#include<stdio.h>
#include<stdlib.h>

int main(){

    int n, arr[n],temp,min;

    printf("Enter the size of the array\n");
    scanf("%d",&n);
    
    printf("Enter the %d array elements",n);
    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){

        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
    }

    printf("The array in ascending order\n");

    for(int k=0;k<n;k++){
        printf("%d/n",arr[k]);
    }



    return 0;
}
