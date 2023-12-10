#include<stdio.h>
int main(){
   int n,SumOdd,SumEven;
   printf("enter the number to find sum of series  : ");
   //1-2+3-4
   scanf("%d",&n);
   for(int i=0;i<=n;++i){
    if(i%2==0){
    SumOdd=SumOdd+i;}
   }
   for(int i=0;i<=n;++i){
    if(i%2!=0){
    SumEven=SumEven+i;}
   }
   int GrandSum;
   GrandSum=SumEven+SumOdd;
   printf("here is the sum of the series : %d  \n",GrandSum);
   return 0;
}
