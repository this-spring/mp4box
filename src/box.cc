/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-22 00:10:18
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-05-26 00:17:48
*/
#include "box.h"

using namespace std;

Box::Box() {
    
};

void Box::setSize(int size) {
    this->size = size;
};

int Box::getSize() {
    return this->size;
};