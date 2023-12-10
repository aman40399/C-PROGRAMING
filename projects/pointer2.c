#include<stdio.h>
#include<stdlib.h>

int main() {
    int* ptr= (int*)  malloc(10*4);
    for(int i=0;i<=10;i++){
    scanf("%d",&(*ptr));
    ptr++;
    }
     for(int i=0;i<=10;i++){
    printf("%d",ptr);}
    return 0;
}
