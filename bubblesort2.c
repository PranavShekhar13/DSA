
#include<stdio.h>
#include<stdlib.h>


int main(){
int n, arr[n],temp=0;

printf("Enter the size of the array\n");
scanf("%d",&n);



printf("\nEnter %d array elements\n",n);
for(int i=0;i<n;i++){

scanf("%d",&arr[i]);

}

for(int i=1;i<n-1;i++){
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}

printf("The array in ascending order\n");

for(int i=0;i<n;i++){

printf("%d\n",arr[i]);

}


return 0;
}
