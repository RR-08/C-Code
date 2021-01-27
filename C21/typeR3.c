//revise you still dont know what it is
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sleep(int nbrSec);
unsigned i;
int main(void){
     

    printf("Prints . after 13 sec delay\n");

    for ( i = 0; i <13; i++)
    {
        printf("%c",i);
        fflush(stdout);
        sleep( (int) 1);
    }

    printf("Done\n");
    return 0;
    
}
void sleep(int nbrSec){
    clock_t goal;
    goal = ( nbrSec * CLOCKS_PER_SEC ) + clock();
    while(goal > clock()){
       // printf("x");
    }
}