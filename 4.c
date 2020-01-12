/*Create a structure student with Roll no & marks
	Access it using:	1)Dot operator
				2)Pointer to structure
				3)Arrow operator
*/

#include<stdio.h>

struct student{
		int Roll;
		float Marks;
		}S1;	 

void main()
	{
		printf("Input the following\n");
		printf("ROLL: ");
		scanf("%d",&S1.Roll);
		printf("MARKS: ");
		scanf("%f",&S1.Marks);
		
		printf("\n\nOutput using (.)Dot Operator\n");
		printf("ROLL: ");
		printf("%d",S1.Roll);
		printf("\nMARKS: ");
		printf("%.2f",S1.Marks);

		struct student *p=&S1;
		printf("\n\nOutput using Pointer to Structure\n");
		printf("ROLL: ");
		printf("%d",(*p).Roll);
		printf("\nMARKS: ");
		printf("%.2f",(*p).Marks);

		printf("\n\nOutput using Arrow Operator\n");
		printf("ROLL: ");
		printf("%d",p->Roll);
		printf("\nMARKS: ");
		printf("%.2f",p->Marks);

		
	}
