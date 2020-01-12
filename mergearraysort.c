#include<stdio.h>
int main()
{
int a[100],b[100],c[200],a1,b1,c1,k,temp;
printf("Enter the number of elements in the first array");
scanf("%d",&a1);
printf("Enter %d elements of the first array",a1);
for(int i=0;i<a1;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the number of elements of the second array");
scanf("%d",&b1);
printf("Enter %d elements of the second array",b1);
for(int i=0;i<b1;i++)
{
scanf("%d",&b[i]);
}

c1=a1+b1;
for(int i=0;i<a1;i++)
{
c[i]=a[i];
}
for(int i=0,k=a1;k<c1 && i<b1;i++,k++)
{
c[k]=b[i];
}

printf("\nThe new array after Merging\n");
for(int i=0;i<c1;i++)
{
printf("%d\t",c[i]);
}

for(int i=1;i<c1-1;i++)
{
for(int j=0;j<c1-i;j++)
{
if(c[j]>c[j+1])
{
temp=c[j];
c[j]=c[j+1];
c[j+1]=temp;
}
}
}
printf("\nThe new array in ascending order\n");
for(int i=0;i<c1;i++)
{
printf("%d\t",c[i]);
}
return 0;
}

