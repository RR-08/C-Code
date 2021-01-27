#include<stdio.h>

int main(void){
    int p,n;
    float si,r;
     printf("enter p n r:");
     scanf("%d %d %f",&p,&n,&r);
     si=(p*n*r)/100;
     printf("%f",si);
     return 0;
}