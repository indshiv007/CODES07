#include<stdio.h>

int main(){
    int i,j,k,rows;
    int a=65;

    printf("Enter Rows : ");
	scanf("%d", &rows);
		
    for(i=0;i<=rows-1;i++){
        for(j=rows-1;j>=i;j--){
            printf(" ");
        }
        for(k=0;k<=i;k++){
            printf("%c ",a+k);
            
        }
        printf("\n");
        
    }
    for (i = 0; i <= rows - 1; i++)
	{
		for (j = -1; j <= i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= rows - i - 2; k++)
		{
			printf("%c ", a + k);
		}
		printf("\n");;
	}
}