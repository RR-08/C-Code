
#include<stdio.h>

int array[10],s=0;

int main(void){

  int i,c;
    for ( i = 1; i <= 10; i++)
    {
        printf("Enter no %d of 10:",i);
        scanf("%d",&c);
        s+=c;
      //  scanf("%d",&array[i]);
      //  s+=array[i];                      my answers 
    }
    printf("\nthe sum of the numbers is %d",s);
    
    return 0;
}