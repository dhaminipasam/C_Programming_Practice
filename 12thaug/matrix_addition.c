#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
        printf("\nEnter First matrix for 3X3 matrix");
        matrixInput(a);
       
        printf("\nEnter Second matrix for 3X3 matrix");
        matrixInput(b);

         
        matrixsum(a,b,c);

        printf("sum of entered matrices :-\n");

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                printf("%d\t",*(*(c + i) + j));
            printf("\n");
        }
    return 0;
}

void matrixInput(int mat[3][3])
{
    int row, col;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            scanf("%d", (*(mat + row) + col));
        }
    }
}


void matrixsum(int mat1[3][3], int mat2[3][3], int res[3][3])
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            *(*(res + i) + j) =(*(*(mat1 + i) + j))+(*(*(mat2 + i) + j));     
        }
    }
}


Refer this :https://www.geeksforgeeks.org/pointer-array-array-pointer/