/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-28 00:26:41
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-05-28 00:56:22
*/ 
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main() {
    string input_path = "/Users/xuxiuquan/mygithub/mp4box/src/xx.t";
    ifstream ifs;
    char t[1] = {0};
    ifs.open(input_path);
    // ifs.seekg(1, ios::beg);
    ifs.read(t, 1);
    std::cout << t[0] << endl;
    // ifs.seekg(2);
    ifs.read(t, 1);
    std::cout << t[0] << endl;
        ifs.read(t, 1);
    std::cout << t[0] << endl;
        ifs.read(t, 1);
    std::cout << t[0] << endl;
        ifs.read(t, 1);
    std::cout << t[0] << endl;

    return 0;
}