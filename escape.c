//escape sequece

#include<stdio.h>

int select(void);
void print(void);

int main(void){

    int a;
    a=select();//why can't select be used directly?
    if (a==3){
        printf("you chose to Quit");
    }
    else if(a==1)
    {
        printf("you chose to beep the computer \a\a\a");

    }
    else
    {
        print();
    }
    
    return 0;
    
 

    }


int select(void){
    int i;
        do{
        printf("Select from the following:");
        printf("1.Beep\n2.Print\n3.Quit\n");
        puts("Enter selection");
        scanf("%d",&i);
    }while (i<1||i>3);

    return i;

}

void print(void){
     
 printf( "\nSAMPLE REPORT" );
 printf( "\n\nSequence\tMeaning" );
 printf( "\n=========\t=======" );
 printf( "\n\\a\t\tbell (alert)" );
 printf( "\n\\b\t\tbackspace" );
 printf( "\n...\t\t...");
 }

 
