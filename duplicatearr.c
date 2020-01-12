#include<stdio.h>

#include<stdlib.h>

int main(){

    int n,ar[n],count=0;

    printf("Enter the size of the array\n");
    scanf("%d",&n);

    printf("Enter the %d array elements\n",n);
    for(int x=0;x<n;x++){
        scanf("%d",&ar[x]);
    }

    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            if(ar[a]==ar[b])
            {
                printf("%d",ar[a]);
            }

        }
    }


    return 0;
}