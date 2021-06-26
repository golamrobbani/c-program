#include<stdio.h>
void main(){
   int n,i=2,fresult=1;
   scanf("%d",&n);
   if(n>0){
     while(i<=n){
          fresult*=i;
          i++;
      }
      printf("%d",fresult);
   }
   else{
        printf("Please Enter the Positive value");
   }
}
