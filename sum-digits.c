//c program to sum digits of integer number
//example:number=12
//sum=1+2=3
#include<stdio.h>
void main(){
int n,temp,sum=0,reminder;
//n=12;
scanf("%d",&n);
temp=n;
while(temp!=0){
    reminder=temp%10;//2,1
    sum+=reminder;//2,3
    temp=temp/10;//1,0
}
printf("%d",sum);
}
