#include <stdio.h>
int main()
{
    int matrix[20][20];
    int i,j,r,c;

    scanf("%d",&r); //Accepts number of rows
    scanf("%d",&c); //Accepts number of columns 

    for(i=0;i< r;i++) //Accepts the matrix elements from the test case data
    {
        for(j=0;j< c;j++)
        {
            scanf("%d",&matrix[i][j]); 
        }
    }


for(i=0;i< r;i++) 
    {
  		int sum = 0;
        for(j=0;j< c;j++)
        {
            sum += matrix[i][j];
        }
  		printf("%d\n", sum);
    }

return 0;

}
