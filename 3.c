//Using calloc reserve 2 arrays of 2-D type and perform addition

#include<stdio.h>
#include<stdlib.h>

void main()
	{
		int **arr,**arr2,**arr3;
		int r=3,c=3;
			
		//MATRIX 1
		arr=(int **)calloc(r,sizeof(int));
		for(int i=0;i<r;i++)
		arr[i]=(int *)calloc(c,sizeof(int));

		//MATRIX 2
		arr2=(int **)calloc(r,sizeof(int));
		for(int i=0;i<r;i++)
		arr2[i]=(int *)calloc(c,sizeof(int));

		//MATRIX 3
		arr3=(int **)calloc(r,sizeof(int));
		for(int i=0;i<r;i++)
		arr3[i]=(int *)calloc(c,sizeof(int));

		//INITIALIZATION OF MATRIX 1
		printf("INPUT VALUES FOR MATRIX 1\n");
		for(int i=0;i<r;i++)
			{	
				for(int j=0;j<c;j++)
					scanf("%d",*(arr+i)+j);
			}

		//INITIALIZATION OF MATRIX 2
		printf("INPUT VALUES FOR MATRIX 2\n");
		for(int i=0;i<r;i++)
			{	
				for(int j=0;j<c;j++)
					scanf("%d",*(arr2+i)+j);
			}

		//ADDITION
		for(int i=0;i<r;i++)
			{	
				for(int j=0;j<c;j++)
					*(*(arr3+i)+j)=(*(*(arr+i)+j))+(*(*(arr2+i)+j));
			}
				

		//OUTPUT
		printf("ADDED MATRIX: \n");
		for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
					printf(" %d",*(*(arr3+i)+j));
				printf("\n");
			}

	}
