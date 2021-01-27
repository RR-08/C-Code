#include<stdio.h>

int main(void){

    int a=5,b=6,c=5,d=1;
    int x;

    x=a<b||a<c&&c<d;
    printf("Your x evaluates to %d\n",x);

    x=(a<b||a<c)&&c<d;
    printf("Your x evaluates to %d\n",x);

    x=a<b||(a<c&&c<d);
    printf("Your x evaluates to %d\n",x);

    if (a!=b-d)
    {
        printf("a!=b-d true\n");
    }
    else
    {
        printf("false\n");
    }
 


        if( x==5)
        printf("hello" );
        else
        printf("x does not equal 1");



    return 0;
}