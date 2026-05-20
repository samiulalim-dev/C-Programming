#include <stdio.h>

int main()
{
    ///======= GCD =========
//   int a,b;
//   scanf("%d %d",&a,&b);
//   int gcd=1;
//   for(int i=1;i<=a && i<=b;i++){
//    if(a%i==0 && b%i==0){
//        gcd=i;
//    }
//   }
//   printf("%d",gcd);

///========= LCM of Two Numbers ========

    int a, b;
    scanf("%d %d",&a,&b);
    int gcd=1;
    for(int i=1;i<=a&&i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    printf("LCM = %d",(a*b)/gcd);

    return 0;
}
