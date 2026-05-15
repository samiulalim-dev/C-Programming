#include <stdio.h>

int main()
{
    ///======== 2+4+8+16+ ----- +n^th =========
    //int n;
    //scanf("%d",&n);
    //int sum = 0;
    //for(int i=2;i<=n;i=i*2){
        //sum = sum +i;
    //}
    //printf("%d",sum);

    ///======== 1+3+9+27+ ------ +nth ========

     //for(int i=1;i<=n;i=i*2){
       // sum = sum +i;
    //}
    //printf("%d",sum);

    ///======= 1^2+2^2+3^2+4^2+ ----- +nth ======

    //for(int i=1;i<=n;i++){
      //  int multi = i*i;
        //sum= sum + multi;
    //}
    // printf("%d",sum);

    ///======= 1^2+3^2+5^2+7^2 ----- +nth =======

    //for(int i=1;i<=n;i=i+2){
      //  sum = sum + (i*i);
    //}

    ///======= 1+3+6+10+ ------ +nth ========

    //int n;
    //scanf("%d",&n);
    //int s1=1,s2=2;
    //int sum = 0;
    //for(int i=1;i<=n;i++){
    //    sum = sum +s1;
    //    s1=s1+s2;
    //    s2=s2+1;
    //}
   // printf("%d",sum);

   ///======= 1+2+6+24+ ------ +nth ========
    //int n;
    //scanf("%d",&n);
    //int s1=1,s2=2;
    //int sum = 0;
    //for(int i=1;i<=n;i++){
      //  sum = sum+s1;
        //s1=s1*s2;
        //s2=s2+1;
    //}
    //printf("%d",sum);

    ///======= 1^2+2^2+3^2+4^2+ ----- first 20th output without sum ======

    for(int i=1;i<=20;i++){
        printf("%d\n",i*i);
    }


    return 0;
}
