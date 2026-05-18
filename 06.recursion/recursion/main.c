#include <stdio.h>
///======= 1+3+6+10+ ------- +nth =========(recursion)

int fn(int i,int n,int s1,int s2,int sum){

    if(i<=n){
        sum= sum+s1;
        s1=s1+s2;
        s2=s2+1;
       return fn(i+1,n,s1,s2,sum);
    }
    return sum;
 }

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fn(1,n,1,2,0));
}
