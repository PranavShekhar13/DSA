#include<stdio.h>

int main(){

	int size,arr[size],i,e;

		printf("Enter the size of the array \n");

		scanf("%d",&size);

		printf("Enter the %d array elememts \n",size);

			for(i=0;i<size;i++){

				scanf("%d",&arr[i]);
			}
		
		printf("Enter the element to be searched in the array \n");
		
		scanf("%d",&e);
		
			for(i=0;i<size;i++){
				
				if(e==arr[i]){
					printf("Element found at index %d",i);
				break;					
				}
				else{
				if(i==size-1){
					printf("Element not found \n");
				break;
				  }
				}
			}
			
		return 0;
		
	}
