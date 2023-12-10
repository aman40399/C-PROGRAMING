#include<stdio.h>
int main(){

    union reportdata
    {
        int maths;
        int english;
        int CSI;
        int eee;
        int CSP;
        char END;
    };
    
    union reportdata aman;
     aman.maths=89;
     aman.english=90;
     aman.CSI=81;
     aman.eee=89;
     aman.CSP=95;
     aman.END="A";

    printf("%d",aman.maths);
}
