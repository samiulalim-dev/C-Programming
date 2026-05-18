#include <stdio.h>

int main()
{
    ///------ 1 to n sum -------

    int n;
    int sum = 0;
    scanf("%d",&n);
    int s1=1;

    for(int i=1;i<=n;i++){
        sum = sum + s1;
        s1=s1*i;
    }
    printf("%d",s1);
    printf("%d",sum);

    ///------- 1 to n odd number sum -------

    //for(int i=1;i<=n;i++){
        //if(i%2==1){
           // sum = sum + i;
       // }
   // }
    //printf("%d",sum);

    ///------- 1 to n even number sum -------
//
//    for(int i=1;i<=n;i++){
//        if(i%2==0){
//            sum = sum + i;
//        }
//    }
//    printf("%d",sum);


    return 0;
}
