//c program to swap or interchange three numbers
#include<stdio.h>
void main(){
    int one=10,two=20,three=30,temp;
    temp=one; //temp=10
    one=two; //one=20
    two=three; //two=30;
    three=temp; //three=10
    printf("one=%d\n",one);
    printf("two=%d\n",two);
    printf("three=%d\n",three);
}
