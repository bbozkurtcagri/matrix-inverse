#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	float det=0;
	int temp=0;
	int matrix[2][2];
	printf("Enter the elements of the array:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nMATRIX:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
				printf("%3d",matrix[i][j]);
		}
		printf("\n");
	}
	det =  (( matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1] )); 

	printf("Determinant : %.2f\n",det);
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(i==j){
				temp = matrix[i][j];
				matrix[i][j] = matrix[i+1][j+1];
				matrix[i+1][j+1] = temp;
				}
				else{
					matrix[i][j] = -1*matrix[i][j];
				}
			
		}
		
	}
/*	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%.3f\n",(1/det)*matrix[i][j]);
		}
		printf("\n");
	}
*/	
for(i=0;i<2;i++){
		for(j=0;j<2;j++){
				printf("%.3f\t",(1 / det) * matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
//	printf("%d",matrix[1][1]);	
	return 0;

} 
