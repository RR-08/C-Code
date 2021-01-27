#include<stdio.h>
#include<stdlib.h>
int i;
float f[2];
int ans(int a);
int main(void){


    scanf("%d",&i);    
    int array[i],c;

    for(c=0;c<3;c++)
    {
    scanf("%d %d %d",&array[0],&array[1],&array[2]);
    f[c]=((array[0]+array[1]+array[2])/3);
    printf("%.2f",f[c]);
    }
    
    return 0;

}