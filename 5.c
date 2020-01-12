//Polynomial addition

#include<stdio.h>
#include<stdlib.h>

int *alloc(int *z,int m)
	{	
		int i,lim,val,exp;
		z=(int *)malloc((m+1)*sizeof(int));
		for(i=0;i<=m;i++)	
			{
				z[i]=0;
			}
		printf("Number of Non Zero Terms: ");		
		scanf("%d",&lim);
		printf("Input:\nTerm & Position");
		for(i=0;i<lim;i++)
			{
				scanf("%d %d",&val,&exp);
				z[exp]=val;
			
			}
	
		return z;
	}
	
void prin(int *a,int m)
	{
		int i=0;			
		for(i=0;i<=m;i++)	
			{
				if(a[i]!=0 && i!=0)
				{
					printf("+%dx^%d ",a[i],i);
				}	
				else if(a[i]!=0)
				{
					printf("%dx^%d ",a[i],i);
				}		
			}	
	
	
	
	}	
	
int *add(int *a,int m,int *b,int n)
	{
		int *c,s,i;
		s= m>n? m:n;
		c=(int *)malloc((s+1)*sizeof(int));	
		
		if(s==m)
			{
				for(i=0;i<=m;i++)
					c[i]=a[i];
					
				for(i=0;i<=n;i++)
					c[i]+=b[i];
					
			}
			
		else{
				
				for(i=0;i<=n;i++)
					c[i]=b[i];
					
				for(i=0;i<=m;i++)
					c[i]+=a[i];
					
		
			}	
			return c;
	}	

void main()
	{  
		int *a,*b,*c;
		int m,n,i;

		//Allocation
		printf("DEGREE OF POLYNOMIAL 1: ");
		scanf("%d",&m);
		a=alloc(a,m);
			
		printf("DEGREE OF POLYNOMIAL 2: ");
		scanf("%d",&n);
		b=alloc(b,n);
		
		c=add(a,m,b,n);				
			
		i=m>n?m:n;
		
		//DISPLAY
		prin(c,i);
			
						
	}
