//c program to array short Ascending order
//input arr[]={4,2,3,1};
//output 1,2,3,4
#include<stdio.h>
void main(){
int arr[]={4,2,3,1},temp;
int n=sizeof(arr)/sizeof(arr[0]);

for (int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}

}
