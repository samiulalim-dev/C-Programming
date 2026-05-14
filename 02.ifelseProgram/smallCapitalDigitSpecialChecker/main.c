#include<stdio.h>
int main(){
   char a;
   scanf("%c",&a);
   if(a>='A' && a<='Z'){
      printf("Capital");
   }
   else if(a>='a' && a<='z'){
      printf("Small");
   }
   else if(a>='0' && a<='9'){
      printf("Digit");
   }
   else{
      printf("Special Character");
   }
}
