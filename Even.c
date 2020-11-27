/* 
Question :
Define an array of numbers (use any random numbers). 
Write a program to print only the even numbers of the array. 
Do not use any library functions, need to do via for loops only  */

// used C language

#include <stdio.h>

void main() {
    int array[100] ,i,num;
    
    printf("enter the size of arry\n");
    scanf("%d",&num);
    
     printf("enter the arry\n");
     for (i = 0; i < num; i++) 
        {
            scanf("%d", &array[i]);
        }
        printf("Even numbers in the array are => ");
        for (i = 0; i < num; i++) 
        {
            if (array[i] % 2 == 0) 
            {
                printf("%d \t", array[i]);
            }
        }
        }