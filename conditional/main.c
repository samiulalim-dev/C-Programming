#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int a,b,c,d;
    //scanf("%d" "%d" "%d" "%d",&a,&b,&c,&d);
    //if(a>b && a>c && a>d){
   //     printf("a is maximum");
    //}
    //else if(b>a && b>c && b>d){
      //  printf("b is maximum");
    //}
    //else if(c>a && c>b && c>d){
    //    printf("C is maximum");
    //}
    //else{
      //  printf("D is maximum");


    //Switch statement ------------

    char chr;
    printf("Enter your character:");
    scanf("%c",&chr);
    switch(chr){
    case'a' :
        printf("vowel");
        break;
    case 'e':
        printf("vowel");
        break;

    case 'i':
        printf("vowel");
        break;

    case 'o':
        printf("vowel");
        break;

    case 'u':
        printf("vowel");
        break;

    default:
        printf("constant");
    }
    }
