#include <stdio.h>

int main()
{
    ///========= pattern 1 =========

    int n,row,col;
    scanf("%d",&n);
    for( row=1;row<=n;row++){
        int s1=3,s2=3;
        for(col=1;col<=row;col++){
            printf(" %d",s1);
            s1=s1*s2;
        }
    printf("\n");
    }

    return 0;
}
