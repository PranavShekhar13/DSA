
#include<stdio.h>
#include<stdlib.h>


int main(){
int n,*p,s,temp=0;

printf("Enter the size of the array\n");
scanf("%d",&n);

p= (int *)malloc(n*sizeof(int));

printf("\nEnter %d array elements\n",n);
for(int i=0;i<n;i++){

scanf("%d",(p+i));

}

for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
        if(*(p+j)>*(p+j+1)){
            temp=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=temp;
        }
    }
}

printf("The array in ascending order\n");

for(int i=0;i<n;i++){

printf("%d\n",*(p+i));

}


return 0;
}
