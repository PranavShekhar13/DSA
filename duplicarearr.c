 #include<stdio.h>
#include<stdlib.h>



    int main() {

        int n,arr[n],i,j=0;

        printf("Enter the size of the array\n");
        scanf("%d",&n);

        printf("Enter the %d  array elements");

        for(int i=0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        for( i=0;i<n;i++){
            for ( j= 0; j<i; j++)
            {
                if(arr[i]==arr[j]){
                    break;
                }
            }
            if(i==j){
                printf("%d\n",arr[i]);
            }
            
        }
        

        return 0;
    }

    


    
