#include<stdio.h>
int main(){
    int i,n,x;
    printf("array size : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<=n-1;i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
    printf("hey this is your array\n");
    for(i=0;i<=n-1;i++) printf("arr[%i]= %d\n",i,arr[i]);
   
}