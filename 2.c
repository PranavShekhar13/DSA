//Allocate memory for n number of integers and find max and min using pointer

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n;
	printf("Input size :");
	scanf("%d",&n);

	//memory allocation
	int *ptr=(int *)malloc(n*sizeof(int));
	if(!ptr)
		{ printf("Not Enough Memory!!");
			exit(1);
		}

	//INPUT
	printf("Input %d Values: ",n);
	for(int i=0;i<5;i++)
		{
			scanf("%d",ptr+i);
		}
	
	//CHECK FOR MAX MIN
	int max=*ptr,min=*ptr;
	for(int i=0;i<5;i++)
		{
			if(*(ptr+i)>max)
				max=*(ptr+i);

			if(*(ptr+i)<min)
				min=*(ptr+i);
		}

	printf("Max= %d \t Min= %d",max,min);


}
