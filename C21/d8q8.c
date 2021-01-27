//average of 1000 number in an array
#include<stdio.h>
#include<stdlib.h>

int a[1000];
float av,ans;

int main(void){
    int at,c;
    
    for(at=0;at<1000;at++){
        a[at]=rand();
        av+=a[at];
            
        
    }

    ans=av/at;
    printf("the average of all 1000 random number is %.2f\n",ans);
        
   for(at=0;at<1000;at++){

        for(c=0;c<10;c++)
       {
       
           printf("%d\n",a[at]);
           at++;
                }
        printf("enter to continue and ctrl c to quit");

        getchar();
    
    }

   return 0;
    
}
/*without c
for(at=0;a<100;a++){
    printf("%d\n",a[at]);
    if(at%10==0&&at>0){
        printf("enter quit");
        getchat();
    }
}*/
