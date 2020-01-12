//Create and initialize an array then using pointer to array find minimum and maximum element out of array


#include<stdio.h>

void main()
{
	int arr[5]={3,6,4,0,9};
	int *p=arr;
	int max=*arr,min=*arr;	
	for(int i=0;i<5;i++)
	{
		if(*(arr+i)>max)
			max=*(arr+i);

		if(*(arr+i)<min)
			min=*(arr+i);
		}
	printf("Max= %d \t Min= %d",max,min);
}
