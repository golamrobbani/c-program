//c program to duplicate element in array
//input arr[]={1,3,2,3,2}
//output 3,2
#include<stdio.h>
void main (){
    int arr[]={1,3,2,3,2},temp;
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d\n",arr[i]);
            }
        }
    }
}
