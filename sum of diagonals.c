#include<stdio.h>
int main()
{
	int Mat[3][3];
	int *m[3][3];
	int i,j;
	int sum=0;
	char A;
	printf("Enter numbers for 3 by 3 array:\n");
	for(i=0;i<3;i++)
	   {
	   	for(j=0;j<3;j++)
	   	   {
	   	   	printf("element-[%d][%d]: ",i,j);
	   	   	scanf("%d",&Mat[i][j]);
	   	   	m[i][j]=&Mat[i][j];
		   }
	   }
	   printf("The matrix is:\n");

	for(i=0;i<3;i++)
	   {
	   	for(j=0;j<3;j++)
	   	   {
	   	   	printf("%d ",*m[i][j]);    
		   }
		printf("\n");   
	   }
	
	printf("Want to know the sum of diagonal element?(Y for yes or N for NO): ");
	scanf("%s",&A);
	if(A=='Y') 
    {
	
	for(i=0;i<3;i++)
	   { 
	   	for(j=0;j<3;j++)
	   	   {
	   	   	if(i==j||i+j==2)
	   	   	  {
	   	   	  	sum=sum + Mat[i][j];
		   	  }
		   }
	   }
	printf("sum of diagonal element is:%d\n",sum); 
    }
    else
       {
       	printf("You are exiting from program\a. ");
	   }
}
  
 
