#include<stdio.h>

int i=123,*p,a[10]={1,2,3,4,5,6,7,8,9,10},ctr,*o,g=0;
float f=123.34,*j,*u,d[10]={1,2,3,4,5,6,7,8,9,10};
long l=12344,*k,n[10]={1,2,3,4,5,6,7,8,9,10},s;

int main(void){

    p=&i;
    j=&f;
    k=&l;

    printf("the value of i = %d\nf=%f\n l=%ld\n",i,f,l);
    printf("the value of i = %d\nf=%f\n l=%ld\n",*p,*j,*k);
    printf("address\n");
    printf("the address of i = %d\nf=%d\n l=%d\n",&i,&f,&l);
    printf("the address of i = %d\nf=%d\n l=%d\n",p,j,k);
    printf("For interger array\n");    //%d is used cause addresses are integer value

    o=a;
    //why??
    for(ctr=0;ctr<10;ctr++){
        printf("%d\n",*o++);
    }


    printf("For float array\n");
    
    u=d;
    for(ctr=0;ctr<10;ctr++){
        printf("%d\n",&d[ctr]);
    }
    g=*(u)-*(u+2);
    printf("the diff is %d\n",g);

    
    printf("For long array");

    for(ctr=0;ctr<10;ctr++){
        printf("%d\n",&n[ctr]);
    }

   return 0;
}