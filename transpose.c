#include <stdio.h>


int main()
{
	int row,column,i,j;
	printf("Enter the row of Matrix \n");
	scanf("%d",&row);
	printf("Enter the column of Matrix \n");
	scanf("%d",&column);
	
	int A[row][column];
	int B[column][row];

	printf("Enter the value for matrix\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			
			printf("(%d,%d)=",i+1,j+1);
			scanf("%d",&A[i][j]);
	
		}
		
	}
	printf("The matrix that you have entered:\n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			
			printf("%d\t",A[i][j]);
			
			
		}
		printf("\n");
	}
	
	printf("Transpose of matrix is: ");
	
	for(i=0;i<column;i++){
		for(j=0;j<row;j++){
			
		B[i][j]=A[j][i];
			
			
		}
		printf("\n");
	}		
		
	for(i=0;i<column;i++){
		for(j=0;j<row;j++){
			
			printf("%d\t",B[i][j]);
			
			
		}
		printf("\n");
	}
	
	
	return 0;
	
}
