/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-26 00:20:10
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-06-05 00:45:35
*/ 
#include "MP4Ftyp.h"
#include <fstream>
#include <stdlib.h>
#include <map>

#define MAX_BOX_PAYLOAD 0xff

using namespace std;

class BoxStruct {
    public:
        Box box;
        string parent_type;
};
// Todo box记录使用数组实现

class Test {
    public:
        int age;
        string name;
        Test();
        Test(int age, string name);
};

Test::Test() {
    
}

Test::Test(int age, string name ) {
   this->age = age;
   this->name = name;
};

map<string, Test> box_map;

int char2int(char *buf) {
    cout << " c1:" << buf[0] << " c2:" << buf[1] << "c3:" << buf[2] << "c4:" << buf[3] << endl;
    return ((*(buf+ 3))&0xFF) | ((*(buf+2))&0xFF) << 8 | ((*(buf+1))&0xFF) << 16 | ((*(buf))&0xFF) << 24; 
}

int main() {
    Test t;
    t.age = 100;
    t.name = "xxq";
    box_map.insert(pair<string, Test>("xx", t));
    Test value = box_map["xx"];
    cout << " value" << value.age << value.name << endl;
    return 0;
    string input_path = "/Users/xuxiuquan/mygithub/mp4box/src/test.mp4";
    ifstream ifs;
    ifs.open(input_path);
    ifs.seekg(0, ios::end);
    long size = ifs.tellg();
    std::cout << " mp4 size:" << size << endl;
    ifs.seekg(0, ios::beg);
    char* buffer = new char [size];
    ifs.read(buffer, size);
    // ifs.close();
    int position = 0;
    char* box_zie = new char [4];
    char* box_type = new char [4];
    std::cout << " box size:" << size << endl;
    // char* p = "0x1b";      
    while (position <= size)
    {
       box_zie[0] = buffer[position];
       box_zie[1] = buffer[position + 1];
       box_zie[2] = buffer[position + 2];
       box_zie[3] = buffer[position + 3];
       int bsize= char2int(box_zie);
       std::cout << " box size:" << bsize << endl;
       box_type[0] = buffer[position + 4];
       box_type[1] = buffer[position + 5];
       box_type[2] = buffer[position + 6];
       box_type[3] = buffer[position + 7];
       position += bsize;
       std::cout << " box type:" << box_type[0] << box_type[1] << box_type[2] << box_type[3] << endl;
    }
    // return;
    // // ifs.seekg(0, ios::end);
    // long fsize = ifs.tellg();
    // cout << "file size: " << fsize << endl;
    // ifs.seekg(0, ios::beg);

    // // 
    // // char szin[100] = {0};
    // // ifs.read(szin, 100);

    // int read_position = 0;

    // int base_size = 0;
    // char box_size[4] = {0};
    // char box_type[4] = {0};
    // char box_payload[MAX_BOX_PAYLOAD] = {0};
    // while (read_position <= fsize)
    // {   
    //    ifs.read(box_size, 4);
    //    int size = char2int(box_size);
    //    ifs.read(box_type, 4);
    // //    ifs.read(box_payload, (size - 8));
    //    read_position += size;
    //    ifs.seekg(read_position, ios::beg);

    //    cout << " size:" << size << " read_position:" << read_position << endl;
    //    cout << " box type:" << box_type[0] << box_type[1] << box_type[2] << box_type[3] << endl;
    // }
    
    // // for (int i = 0; i < 100;i += 1) {
    // //     cout << "i:" << i << "  value:" << szin[i] << endl;
    // // }
    // // cout << szin[0] << szin[1] << szin[2] << szin[3] << endl;
    // return 0;
}