// c program to find largest number of array element
//input: a[]={4,5,3,8,1}
//Output: 8
#include <stdio.h>
void main(){
    int arr[]={4,5,3,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result=largest(arr,n);
    printf("%d",result);
}

int largest(int arr[],int n){

int max=arr[0];
for(int i=1;i<n;i++){
    if(arr[i]>max)
        max=arr[i];
}

return max;
}
