//Program on local variable and function calling

#include<stdio.h>

int x=2,y=5;

void demo(void);



int main(void){
     printf("before calling demo x=%d and y=%d\n",x,y);
     demo();
     printf("after calling demo x=%d and y=%d\n",x,y);
     return 0;
}

void demo(void){
    
    int x=55,y=66;
    printf("inside demo x=%d and y=%d\n",x,y);
}

