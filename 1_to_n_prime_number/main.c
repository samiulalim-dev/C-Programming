#include <stdio.h>

int main()
{
    ///======= 1 to n prime number ==========
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<=n;i++){
//        int count =0;
//        for(int j=1;j<=i;j++){
//            if(i%j==0){
//                count++;
//            }
//        }
//    if(count==2){
//        printf("%d",i);
//    }
//
//    }

 ///======= fibonacci series ========

    int n;
    scanf("%d",&n);
    int s1 = 0; //8
    int s2 = 1; //13
    for(int i=1; i<=n; i++){
        printf("%d",s1);
        int temp = s1+s2; //13
        s1=s2;
        s2=temp;
    }

    return 0;
}
