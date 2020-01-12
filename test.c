#include<stdio.h>
#include<stdlib.h>

 int main() {

     int i = 100, *ptr=&i;

     printf("\n%d",i);       // 100  - Value of i
     printf("\n%u",&i);      // 6422300 - Address of i
     printf("\n%d",ptr);     // 6422300 - Value of ptr
     printf("\n%d",*ptr);    // 100 - Value of i
     printf("\n%d",&ptr);    // 6422296 - Address of ptr
     printf("\n%d",*(&i));   // 100 - Value of i
     printf("\n%d",*(&ptr)); // 6422300 - Value of ptr


    return 0;
}