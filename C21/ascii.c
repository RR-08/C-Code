#include<stdio.h>

unsigned aChar;//when used as both integer and char

int main(void){

    for(aChar=0;aChar<255;aChar++){
        printf("character %c with code %d\n",aChar,aChar);
    }
    return 0;
}