#include<stdio.h>
int main(){
    int temp;
    int arry[5]={5,4,3,2,1};
    for(int i=0;i<=4;i++){
        for(int j=0;j<4;j++){
            if(arry[j]>arry[j+1]){
            temp=arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=temp;
            }
        }
    }
    for(int i=0;i<=5;i++){
        printf("%d",arry[i]);
    }
}