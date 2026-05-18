#include <stdio.h>

int main()
{
    int n,a;
    int res =1;
    scanf("%d %d",&n,&a);
    for(int i=1;i<=n;i++){
        res=res*a;
    }
    printf("%d",res);
    return 0;
}
