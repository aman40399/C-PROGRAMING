// #include<stdio.h>
// #define AM(x,y) x##y
// int main(){
//    printf("%d",AM(787,878));
//}


 #include<stdio.h>
 #define AM(s) #s
 int main(){

   printf("%s",AM("rolla baby"));


}

