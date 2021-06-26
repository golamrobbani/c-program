#include<stdio.h>
void main(){
    int *a,b;
    b=1;
    a=&b;
    b=10;
    printf("%d\n",*a);
    printf("%d\n",b);

    b=200;
    printf("%d",*a);

}
