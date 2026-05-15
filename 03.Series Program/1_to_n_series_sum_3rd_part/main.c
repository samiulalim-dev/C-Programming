#include <stdio.h>

int main()
{
    ///======= 1^2-2^2+3^2-4^2+ ------- +nth =======

    //int n;
    //scanf("%d",&n);
    //int sum = 0;
    //for(int i=1;i<=n;i++){
      //  if(i%2==0){
       //     sum=sum-(i*i);
       // }
       // else{
         //   sum = sum + (i*i);
       // }
    //}
    //printf("%d",sum);

     ///======= 1+1/2^2+1/3^2+1/4^2+ ------- +nth =======

    //int n;
    //scanf("%d",&n);
    //float sum = 1;
     //for(int i=2;i<=n;i++){
       //     sum= sum +(1.0/(i*i));
     //}
    //printf("%.4f",sum);

      ///======= 1/1^2+1/2^2+1/3^2+1/4^2+ ------- +nth =======

    int n;
    scanf("%d",&n);
    float sum = 0;
     for(int i=1;i<=n;i++){
            sum= sum +1.0/(i*i);
     }
    printf("%.4f",sum);

    return 0;
}
