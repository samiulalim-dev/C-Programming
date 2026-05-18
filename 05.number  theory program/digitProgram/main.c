#include <stdio.h>

int main()
{
 ///======= integer digit counting =========
//    int n;
//    int count=0;
//    scanf("%d",&n);
//    while(n!=0){
//       n= n/10;
//        count=count+1;
//    }
//    printf("%d",count);

 ///========== sum of digit =========
//    int n;
//    int count=0;
//    scanf("%d",&n);
//    while(n!=0){
//      count = count + (n%10);
//        n=n/10;
//    }
//    printf("%d",count);

 ///========== digit reverse =========
//    int n,rev;
//    scanf("%d",&n);
//    while(n!=0){
//      rev = rev*10+n%10;
//        n=n/10;
//    }
//    printf("%d",rev);

 ///========= palindrome checker ==========

    int n,rev;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
      rev = rev*10+n%10;
        n=n/10;
    }
    if(temp==rev){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }

    return 0;
}
