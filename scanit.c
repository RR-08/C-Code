//take int float and unsingned 
#include<stdio.h>

#define quit 4

int get_menu(void);

int main(void){

    int choice=0,i=0;
    float float_var=0.0;
    unsigned unsigned_var=0;



while(choice!=quit){
    
    choice=get_menu();

    if (choice==1){
        printf("Enter an integer value:\n");
        scanf("%d",&i);
    }
    if (choice==2){
        printf("Enter a float value:\n");
        scanf("%.2f",&float_var);
    }
    if (choice==3){
        printf("Enter an integer value:\n");
        scanf("%u",&unsigned_var);
    }

    }
    printf("your choices are %d %f %u\n",i,float_var,unsigned_var);
    
        printf("Program ended");
    
    
    return 0;

}

int get_menu(void){
    int s=0;
    do{
        printf("Enter 1 for integer:\n");
        printf("Enter 2 for float:\n");
        printf("Enter 3 for unsigned int:\n");
        printf("Enter 4 to quit\n");
        scanf("%d",&s);

    }while(s<1||s>4) ;

    return s;

}