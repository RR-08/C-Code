#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
    int guess=0,random,noOfG=0,d=0;

    srand(time(0));
    random=rand();


    while (d==0){

        noOfG++;

        printf("Enter any no between 0 to %d :",RAND_MAX);
        scanf("%d",&guess);

        if(guess==random){
            d=1;
        }
        else if(guess<random){
            printf("You guessed low\n");
        }
        else
        {
            printf("You guessed high\n");
        }
        
    }
    printf("You guessed the random no %d in %d guesses",random,noOfG);


    return 0;

}