/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-05-26 00:08:41
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-06-29 00:10:27
*/ 
#include  <MP4Ftyp.h>

using namespace std;

void MP4Ftyp::setMMajorBrand(uint32_t mb) {
    m_MajorBrand= mb;
}

void MP4Ftyp:: setMMinorVersion(uint32_t mv) {
    m_MinorVersion = mv;
}

uint32_t MP4Ftyp:: getMMinorVersion() {
    return m_MinorVersion;
}
