/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-22 00:11:06
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-05-27 22:59:20
 */ 
#include <iostream>

using namespace std;
class Box {
    private:
        int size;
        string type;

    public:
        Box();
        void setSize(int size);
        void setType(string type);
        int getSize();
        string getType();
};