//c program to pointer
//input *a b=1
//a=&b
//b=10
//output a=10,b=10

#include<stdio.h>
void main(){
    int *a,b=1;
    a=&b;
    b=10;
    printf("%d\n",*a);
    printf("%d\n",b);
}
