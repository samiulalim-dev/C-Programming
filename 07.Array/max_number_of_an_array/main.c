#include <stdio.h>

int main()
{
    ///======== Max number of an array ========
   int n;
   printf("enter array size:");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    printf("Enter your %d number:",i+1);
    scanf("%d",&a[i]);
   }
   int max=a[0];
   for(int i=0;i<n;i++){
    if(a[i]>max){
        max = a[i];
    }
   }
   printf("%d ",max);
    return 0;
}
