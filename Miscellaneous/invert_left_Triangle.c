//Program to print Upside down Left Triangle

/* 
output

if user give number of rows = 5

* * * * * 
* * * * 
* * * 
* * 
* 

*/

#include <stdio.h>
int main()
{
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);
    //main Loop
    for(i=rows; i>=1; --i)
    {
        for(j=1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}