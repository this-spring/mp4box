/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-26 00:20:10
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-05-28 01:05:27
*/ 
#include "MP4Ftyp.h"
#include <fstream>

#define MAX_BOX_PAYLOAD 0xff

using namespace std;

int char2int(char *a) {
    cout << " c1:" << a[0] << " c2:" << a[1] << "c3:" << a[2] << "c4:" << a[3] << endl;
    // return  ((c1 >> 24) & 0xFF) | (((c2 >> 16) & 0xFF) << 8) | (((c3 >> 8) & 0xFF) << 16) | ((c4 & 0xFF) << 24);
    return (a[0]<<24)|(a[1]<<24)|(a[2]<<24)|a[3];
}

int main() {
    string input_path = "/Users/xuxiuquan/mygithub/mp4box/src/test.mp4";
    ifstream ifs;
    ifs.open(input_path);
    ifs.seekg(0, ios::end);
    long fsize = ifs.tellg();
    cout << "file size: " << fsize << endl;
    ifs.seekg(0, ios::beg);

    // 
    // char szin[100] = {0};
    // ifs.read(szin, 100);

    int read_position = 0;

    int base_size = 0;
    char box_size[4] = {0};
    char box_type[4] = {0};
    char box_payload[MAX_BOX_PAYLOAD] = {0};
    while (read_position <= fsize)
    {   
       ifs.read(box_size, 4);
       int size = char2int(box_size);
       ifs.read(box_type, 4);
    //    ifs.read(box_payload, (size - 8));
       read_position += size;
       ifs.seekg(read_position, ios::beg);

       cout << " size:" << size << " read_position:" << read_position << endl;
       cout << " box type:" << box_type[0] << box_type[1] << box_type[2] << box_type[3] << endl;
    }
    
    // for (int i = 0; i < 100;i += 1) {
    //     cout << "i:" << i << "  value:" << szin[i] << endl;
    // }
    // cout << szin[0] << szin[1] << szin[2] << szin[3] << endl;
    return 0;
}