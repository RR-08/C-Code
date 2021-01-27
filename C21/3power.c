#include<stdio.h>

int a;
int power(int v),done=1;


int main(void){
  
    printf("Enter a number:");
    scanf("%d",&a);

    power(a);

    printf("three raised to %d is %d\n",a,power(a));
   
    

    return 0;
}

int power(int v){
    if  (v==1)
    return 3;
    else
    {
        return (3*power(v-1));
    }
    

}

