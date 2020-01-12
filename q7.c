/*Write a program to add two sparse matrices in C */

#include<stdio.h>
#include<stdlib.h>
#define max 30

void printmat(int M[max][3]);
void readmat(int M[max][3]);
 void add(int M1[max][3], int M2[max][3], int M3[max][3]);
char compare(int x,int y);

  
  void main()
	{
	int M1[max][3],M2[max][3],M3[max][3];

		readmat(M1);
		readmat(M2);
		add(M1,M2,M3);
		printmat(M3);
	}

  void readmat(int M[max][3])
	{
	int i,j,t;
	 
	 printf("\nEnter the number of rows and columns of the Sparse matrix");
	  
	  scanf("%d %d",&i,&j);
	   
	 printf("\nEnter the number of non zero Terms");
	
	  scanf("%d",&t);

	    M[0][0]=i;
	    M[0][1]=j;
	    M[0][2]=t;

		 
	     for(int a=1;a<=t;a++)
		{
		 
		  printf("Enter the 3 values of row %d row-wise",a);
		  scanf("%d %d %d",&M[a][0],&M[a][1],&M[a][2]);

	  	}
	  }
	


  void add(int M1[max][3], int M2[max][3], int M3[max][3])
	 {
	int i=1,j=1,k=1,t1,t2;

	   if(M1[0][0]!= M2[0][0]||M1[0][1]!=M2[0][1])
		{

		printf("Addition not Possible");
		
		 exit(0);
		}

	M3[0][0] = M1[0][0];
	M3[0][1] = M1[0][1];
	t1 = M1[0][2];
	t2 = M2[0][2];

	while(i<=t1 && j<=t2)
	 {
	 		switch(compare(M1[i][0],M2[j][0]))
	 			{
	 				case '=':
	 					switch(compare(M1[i][1],M2[j][1]))
	 						{
	 							case '=':
	 								
	 								M3[k][0] = M1[i][0];
	 								M3[k][1] = M1[i][1];
	 								M3[k][2] = M1[i][2]+M2[j][2];
	 								
	 								i++;
	 								j++;
	 								k++;
	 							
	 							break;
	 							
	 						  case '<':
	 								
	 								M3[k][0] = M1[i][0];
	 								M3[k][1] = M1[i][1];
	 								M3[k][2] = M1[i][2];
	 								
	 								i++;
	 								k++;
	 							
	 						 break;
	 							
	 						  case '>':
	 								
	 								M3[k][0] = M2[j][0];
	 								M3[k][1] = M2[j][1];
	 								M3[k][2] = M2[j][2];
	 								
	 								
	 								j++;
	 								k++;
	 							
	 							break;
	 							
	 						}
	 							
				  break;
				 
				 
				case '<':
	 								
	 								M3[k][0] = M1[i][0];
	 								M3[k][1] = M1[i][1];
	 								M3[k][2] = M1[i][2];
	 								
	 								i++;
	 								k++;
	 							
	 				 break;
	 							
	 			case '>':
	 								
	 								M3[k][0] = M2[j][0];
	 								M3[k][1] = M2[j][1];
	 								M3[k][2] = M2[j][2];
	 								
	 								
	 								j++;
	 								k++;
	 							
	 				break;
       	}
       M3[0][2]=k-1;
 	}

    }
 	    
 	 char compare(int x,int y)
 	   {
 	     if(x<y)
 	     
 	     	return('<');
 	     
 	     else if(x>y)
 	     	
 	     	return('>');
 	     
 	     else
 	     	
 	     	return('=');
 	     	
 	  	}
 	  	
 	  void printmat(int M[max][3])
 	  	{
 	  		int i,t;
 	  		
 	  			t=M[0][2];
 	  				printf("\nRow\tColumn\tValue");
 	  				
 	  					for(i=1;i<=t;i++)
 	  						{
 	  						 printf("\n%d\t%d\t%d",M[i][0],M[i][1],M[i][2]);
 	  						}
 	  	}
