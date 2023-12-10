#include<stdio.h>
int main(){
    int arry[5]={9,4,56566,5,6};
    int x=arry[0];
    int y;
    for(int i=0;i<=4;i++){
        if(x<arry[i]){
            x=arry[i];
        }
        else y =arry[i];
    }
    printf("biggest value among array is %d \n",x);
}