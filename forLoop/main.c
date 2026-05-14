#include <stdio.h>
int main(){

    /// --------Multiplication of 5-------

   // int num;
   // printf("Enter your number:");
   // scanf("%d",&num);

   // for(int i=1;i<=10;i++){
     //   printf("%d X %d = %d\n",num, i , num*i);
   // }

   /// ------Summation of 1-100th odd Number-----

   //int num;
   //int sum = 0;
   //printf("enter number:");
   //scanf("%d",&num);
   //for(int i = 2; i<=num ; i= i+2){
   // sum = sum + i;
   //}
   //printf("%d",sum);

   /// factorial Number
   //int a;
   //printf("enter your number:");
   //scanf("%d",&a);
   //int multi = 1;
   //for(int i=a;i>=1;i--){
     //   multi = multi * i;
   //}
   // printf("%d",multi);

   /// 1-100 odd number sum
    int a ;
    printf("enter your number:");
    scanf("%d",&a);
    int sum = 0;
    for(int i=0;i<=a;i++){
        if(i % 2 == 1){
           sum = sum + i;
        }
    }

   printf("%d",sum);


    return 0;

}
