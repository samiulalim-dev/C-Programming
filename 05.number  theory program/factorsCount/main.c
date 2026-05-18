#include <stdio.h>

int main()
{
    ///========= factors count ========
//    int n;
//    scanf("%d",&n);
//    int res = 0;
//    for(int i=1;i<=n;i++){
//        if(n%i==0){
//            res++;
//        }
//    }
//   printf("%d",res);


   ///========= factors print ========
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        if(n%i==0){
//            printf("%d",i);
//        }
//    }

     ///========= factors sum ========
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           sum = sum + i;
        }
    }
    printf("%d",sum);


    return 0;
}
