//question 9 and 10 
#include<stdio.h>


int a[10],n[10];

int main(void){
    int s;
    for(s=0;s<10;s++){
        a[s]=s;//adding printf here gives the same result
        printf("%d\n",a[s]);

        n[s]=(a[s]+10);

    }
        printf("this is the new array\n");

    for(s=0;s<10;s++){
        printf("%d\n",n[s]);
        
    }
    
 /*   for(s=0;s<10;s++){
        printf("%d\n",a[s]);
    }*/




 return 0;

}