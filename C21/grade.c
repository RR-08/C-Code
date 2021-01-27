//enter 10 grades and average them
#include<stdio.h>

float array[10],aver,sum=0;

int main(void){

    int i=0;

    for(;i<10;i++){
        printf("Enter the grade of student number %d:",(i+1));
        scanf("%f",&array[i]);
        while(array[i]>100){
            printf("the maximum grade is 100. enter correct score\n");
            scanf("%f",&array[i]);
        }
        sum+=array[i];
        
    }

    aver=sum/10;

    printf("the average of grades is %.2f",aver);
    return 0;
}