//program on array and if else

#include<stdio.h>

int array[10],nbr=0,ctr=0;

int main(void){
    for(ctr=0;ctr<10&&nbr!=99;ctr++)
    {
    puts("enter a number 99 to quit");
    scanf("%d",&nbr);
    array[ctr]=nbr;// without array it will work fine
    printf("%d\n",array[ctr]);

    }

    return 0;
}