#include <stdio.h>

int main()
{
    int n;
    int res=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            res++;
        }
    }
    if(res==2){
        printf("This is a prime number");
    }
    else{
        printf("This is not a prime number");
    }

    return 0;
}
