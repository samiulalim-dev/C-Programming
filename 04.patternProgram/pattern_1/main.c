#include <stdio.h>

int main()
{
    ///========= pattern 1 =========
    /**
     3
     3 9
     3 9 27
    */

    //int n,row,col;
    //scanf("%d",&n);
    //for( row=1;row<=n;row++){
       // int s1=3,s2=3;
       // for(col=1;col<=row;col++){
       //     printf(" %d",s1);
       //     s1=s1*s2;
      //  }
   // printf("\n");
   // }

    ///======== pattern 2 ========
    /**
    * a
    * b c
    * d e f
    */
//    int n,row,col;
//    scanf("%d",&n);
//    char ch='a';
//    for(row=1;row<=n;row++){
//        for(col=1;col<=row;col++){
//            printf("%c ",ch);
//            ch++;
//        }
//    printf("\n");
//    }

 ///========= pattern 3 =========
 /***
 1
 1 2
 1 2 6
 1 2 6 24
 */
//   int n,row,col;
//   scanf("%d",&n);
//    for( row=1;row<=n;row++){
//    int s1=1,s2=2;
//    for(col=1;col<=row;col++){
//        printf(" %d",s1);
//        s1=s1*s2;
//        s2=s2+1;
//      }
//   printf("\n");
//
// }

 ///========= pattern 3 =========
 /***
 1
 2 1
 3 2 1
 4 3 2 1
 */
    int n,row,col;
    scanf("%d",&n);
    for( row=1;row<=n;row++){
        for(col=row;col>=1;col--){
            printf(" %d",col);
        }
    printf("\n");
    }



    return 0;
}
