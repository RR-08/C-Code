//two arrays are passed and then sum of total value is return
#include<stdio.h>

int a1[5]={2,3,4,6,5},a2[5]={4,7,8,4,2},c=0;
int *p1,*p2;
int sumarray(int a[],int b[]);

int main(void){

    p1=a1;
    p2=a2;
        
    sumarray(a1,a2);
 
    return 0;

}
int sumarray(int a[],int b[]){
    int sum[5],*p3;
    p3=sum;

   for(c=0;c<5;c++){
      //  sum+=a[c]+b[c]; ques 7
      sum[c]=a[c]+b[c];
        printf("%d\n",sum[c]);

    }


}