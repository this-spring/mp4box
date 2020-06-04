/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-06-04 00:22:05
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-06-04 00:52:19
*/ 
#include <iostream>
#include <stdlib.h>

using namespace std;

int char_to_int(char * ch){

	char c;
	int result =0;
	while(c = *ch++){
		result *= 10; 
		result += (int)(c-'0');
	}
	return result;
}

int main() {
    char * t = new char [4];
    t[0] = 0x00;
    t[1] = 0x00;
    t[2] = 0x04;
    t[3] = 0xb7;
    // b = * (int *) a
    int lt = 0;

    cout << " lt:" << i << endl;

    cout << t[3] << endl;
    int ll = (t[0] << 24) | (((int)t[1]) << 16) | (((int)t[2]) << 8) | (int)t[3];
    cout << "len: " << ll << endl;
    return 0;
}