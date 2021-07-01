// c program to call by value and call by reference example
#include<stdio.h>
void main(){
int num1=10;
//call_by_value(num1);
call_by_referency(&num1);
printf("after function call num1=%d",num1);
}

int call_by_value(int num1){
num1+=10;
}

int call_by_referency(int *num1){
   (*num1)+=10;
}
