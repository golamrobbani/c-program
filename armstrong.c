//c program to check Armstrong number
//example:number=153
//sum=1^3+5^3+3^3=1+125+27=153
//if(sum==number) armstrong number
//else not armstrong number
#include<stdio.h>
void main(){
int n,temp,sum=0,reminder;
//n=153;
scanf("%d",&n);
temp=n;
while(temp!=0){
    reminder=temp%10;//3,5,1
    sum+=reminder*reminder*reminder;//27,152,153
    temp=temp/10;//15,1,0
}
if(sum==n)
printf("Armstrong number");
else
printf("Not Armstrong number");
}
