//understand it

#include<stdio.h>

int array[5];

int main(void){

    int a=0,nom=0;
    printf("this program wants you to enter 5 no");
    puts("the number should be between 1 and 10");

    while(a<5){
        
        while(nom<1||nom>10){
            printf("Enter %d number:",a+1);
            scanf("%d",&nom);
        }
        array[a]=nom;
        a++;

    }
    a=0;
    printf("your %d number value was:%d",a+1,array[a]);
    return 0;
}