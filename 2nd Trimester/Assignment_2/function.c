#include<stdio.h>


void InputMatrix(int matrix[3][5])
{
    printf("Enter the matrix element:\n");
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        
    }
    
}

void ShowMatrix(int matrix[3][5])
{
printf("Original:\n");
int i,j;

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 5; j++)
    {
       printf("%d ",matrix[i][j]);
    }
    printf("\n");
    
}

}

void ScalerMultiplay(int matrix[3][5],int scaler)
{
printf("Multiplied by %d:\n",scaler);
int i,j;
for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 5; j++)
    {
        matrix[i][j]*=scaler;
        printf("%d ",matrix[i][j]);
    }
    printf("\n");
    
}

}
int main()
{
    int matrix[3][5];
    InputMatrix(matrix);
    ShowMatrix(matrix);
     
    int scaler;
   
    scanf("%d",&scaler);
    ScalerMultiplay(matrix,scaler);
   
    return 0;

}
