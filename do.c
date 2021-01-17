//do while loops
#include<stdio.h>

int select(void);

int main(void){

    printf("You chose %d ",select());

    return 0;

}

int select(void){

    int e;

    do{
        printf("1.A\n2.B\n3.C\n4.D\n");
        printf("select any number:");
        scanf("%d",&e);
    }while(e<1||e>4);

    return e;
}