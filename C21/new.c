#include <stdio.h>
#include<stdlib.h>

void update(int *a,int *b) {
    int t=*a;
    *a=(int)*a+*b;
    *b=abs(*a>*b?(t-*b):(*b-t));
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}