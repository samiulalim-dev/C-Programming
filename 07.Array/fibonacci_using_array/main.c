#include <stdio.h>

int main()
{
    ///========= nth fibonacci ==========

//    int n;
//    printf("Enter array size:");
//    scanf("%d",&n);
//    int a[n];
//        a[0]=0;
//        a[1]=1;
//    for(int i=2;i<n;i++){
//         a[i]=a[i-1]+a[i-2];
//    }
//   printf("%d",a[n-1]);

   ///========= sum of 10 fibonacci ==========

//    int n =10;
//    int a[n];
//        a[0]=0;
//        a[1]=1;
//    for(int i=2;i<n;i++){
//         a[i]=a[i-1]+a[i-2];
//    }
//    int sum =0;
//   for(int i=0;i<n;i++){
//    sum =sum+a[i];
//   }
//   printf("%d",sum);

    ///========= output of first 10 fibonacci ==========

    int n =10;
    int a[n];
        a[0]=0;
        a[1]=1;
    for(int i=2;i<n;i++){
         a[i]=a[i-1]+a[i-2];
    }

   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }




    return 0;
}
