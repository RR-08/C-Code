//funxtion calling with different styles
//puts here
#include<stdio.h>
#include<stdlib.h>

int x,y,ans;
int sum(int a,int b);
int multip(int a,int b),minus(int a,int b);
int larger(int a,int b);

int main(void){

    puts("enter two number:");//prints and start new line
    scanf("%d %d",&x,&y);

    ans=sum(x,y);
    printf("sum of two numbers is %d\n",ans);

    ans=multip(x,y);
    printf("product of two numbers is %d\n",ans);

    ans=minus(x,y);
    printf("minus of two numbers is %d\n",ans);

    larger(x,y);
    printf("larger of the two no is %d",larger(x,y));



    return 0;


}

int sum(int a,int b){
    return (a+b);
}

int minus(int a,int b){
    return (a-b);
}

int multip(int a,int b){
        return (a*b);
}

int larger(int a,int b){
    return (a>b?a:b);
}