#include<stdio.h>
#include<stdlib.h>

int ar[5][4];

int a,c;

int main(void){

    for(a=0;a<5;a++){
        for(c=0;c<5;c++){
            ar[a][c]=rand();
        }
    }

    for(a=0;a<5;a++){
        for(c=0;c<5;c++){
            printf("int ar[%d][%d]=%d\n",a,c,ar[a][c]);

        
        }
    }
 return 0;

}