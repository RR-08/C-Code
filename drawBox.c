//draw a box based on number entered by users
//new local var is used because otherwise the value after execution of column becomes zero 1st time

#include<stdio.h>
int a,b;
void draw(int x,int y);

int main(void){

    printf("Enter number of rows:");
    scanf("%d",&a);

    printf("Enter number of columns:");
    scanf("%d",&b);

    draw(a,b);

    return 0;


}

void draw(int x,int y){

    int i;

  for(;x>0;x--)
  {
      for(i=y;i>0;i--)
      printf("R\t");

      
      printf("\n");

  }
}