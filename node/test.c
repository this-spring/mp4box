/*
 * @Author: xiuquanxu
 * @Company: kaochong
 * @Date: 2020-06-16 00:32:51
 * @LastEditors: xiuquanxu
 * @LastEditTime: 2020-06-16 00:34:03
 */ 
#include <stdlib.h>
#include <stdio.h>

char* myname = "极客时间";
void showName() {
  printf("%s \n",myname);
  if(1){
    char* myname = "极客邦";
   }
}

int main(){
   showName();
   return 0;
}