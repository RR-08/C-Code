//using  malloc func to store memory
#include<stdio.h>
#include<stdlib.h>

char c,*p,*ptr;

int main(void){

    ptr=malloc(35*sizeof(char));
    if(ptr==NULL){
        printf("Memory allocation error");
        return 1;
    }

    p=ptr;
    for(c=65;c<91;c++)
        *p++=c;
        
        *p='\0';
        puts(ptr);
        free(ptr);
        return 0;
    
}