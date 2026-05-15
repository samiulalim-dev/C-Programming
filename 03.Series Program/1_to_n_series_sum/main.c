#include <stdio.h>

int main()
{
    ///------ 1 to n sum -------

    int n;
    int sum = 0;
    scanf("%d",&n);
    //for(int i=1;i<=n;i++){
       // sum = sum + i;
    //}
    //printf("%d",sum);

    ///------- 1 to n odd number sum -------

    //for(int i=1;i<=n;i++){
        //if(i%2==1){
           // sum = sum + i;
       // }
   // }
    //printf("%d",sum);

    ///------- 1 to n even number sum -------

    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum = sum + i;
        }
    }
    printf("%d",sum);


    return 0;
}
