//c program to swap or interchange two numbers without third variable
#include<stdio.h>
void main(){
    int one=10,two=20;
    one=one+two; //one=30(10+20)
    two=one-two; //two=10(30-20)
    one=one-two; //one=20(30-10)
    printf("one=%d\n",one);
    printf("two=%d",two);
}

