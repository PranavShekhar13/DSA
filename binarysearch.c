#include<stdio.h>

#include<stdlib.h>

#include<math.h>

int main(){

 int size, arr[size],value,start,end,mid; //temp

	printf("Enter the size of the array \n");
	scanf("%d",&size);
	
	printf("Enter the %d array Elements in ascending order \n",size);
	
	for(int i=0;i<size;i++){
	
		scanf("%d",&arr[i]);
	
	}
	
	
	/* Bubble Sort  for(int i=0;i<size-1;i++){
	
		for(int j=0;j<size-i;j++){
		
		if(arr[j]>arr[j+1]){
		
		temp=arr[j];
		arr[j]=arr[j+1];
		arr[j+1]=temp;
		
		}
		
	}
	
	
 } */


 
 
 
 printf("Enter the value to be searched \n");
 
 scanf("%d",&value);
 
 start=0;
 end=size-1;
 mid= floor(start+end)/2;
 
 while(start<=end){
 
 if(value>arr[mid])
 
 start=mid+1;

 
 else if(value==arr[mid]){
 
 printf("Element Found at location %d",mid);
 break;
 
 }
 
 else
 end =mid-1;
 mid= floor(start+end)/2;
   

 }
 
 if(start>end){
 
 printf("Element not Found \n");
 
 }
 return 0;
}


