//try and understand how array elements are passed
#include<stdio.h>

int a[5],l(int b[],int y);

int main(void){

    int c;
    for(c=0;c<5;c++)
    {
    printf("Enter number %d of 5:",c+1);
    scanf("%d",&a[c]);

    }
    printf("largest value of all is %d",l(a,5));

    return 0;


}
   /* int l(int b[],int y){

        int c,bt=-1200;

        for(c=0;c<5;c++){
            if(b[c]>bt){
            bt=b[c];}

        }

        return bt;

    }*/
    //same as wait!!
    int l(int *b,int y){
        int c,bt=-7908;
        for(c=0;c<y;c++){
        if(*b>bt)
        {
            bt=*b;//understand this
        }
        *b++;//*(b+c)
        }
        return bt;
    }