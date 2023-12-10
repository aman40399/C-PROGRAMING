#include<stdio.h>
int main(){
       FILE* ptr=fopen("heymama.txt","w");
       char arry[100]="rolla baby";
       fputs(arry,ptr);
       fclose(ptr);
       return 0;

            
}
