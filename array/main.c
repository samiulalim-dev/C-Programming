#include <stdio.h>
#include <stdlib.h>

int main()
{

    ///----- Sum of an array ------

    //int number[]={1,2,3,4,5};
    //int sum= 0;
    //int size;
    //size = sizeof(number) / sizeof(number[0]);
    //for(int i=0; i<size;i++){
      //  sum= sum + number[i];
    //}
    //printf("%d",sum);

    ///----- input sum by loops -----

    int number[5];
    int sum=0;
    for(int i=0;i<5;i++){
        printf("Enter your number %d:",i+1);
        scanf("%d",&number[i]);
    }
    for(int i=0;i<5;i++){

        sum = sum+ number[i];
    }

    printf("%d",sum);



    return 0;
}
