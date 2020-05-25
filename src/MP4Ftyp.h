/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-25 23:56:15
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-05-26 00:33:11
*/ 
#include <iostream>
#include "box.h"

using namespace std;

class MP4Ftyp: public Box {
    private: 
        uint32_t m_MajorBrand;
        uint32_t m_MinorVersion;
    public:
        MP4Ftyp();
        void setMMajorBrand(uint32_t mb);
        void setMMinorVersion(uint32_t mv);
        uint32_t getMMajorBrand();
        uint32_t getMMinorVersion();
};
