#include<stdio.h>

int var=1;
int *ptr;
int main(void){
ptr=&var;

printf("\nDirect Access,var=%d",var);

printf("\nInDirect Access,var=%d",*ptr);

printf("\n Address of var=%d",&var);

printf("\n Address of var=%d",ptr);

return 0;


}
