#include <stdio.h>
void floyd(int r[10][10],int n)
{
        int i,j,k;
        for(k=1; k<=n; k++)
                for(i=1; i<=n; i++)
                        for(j=1; j<=n; j++)
                                r[i][j]=min(r[i][j],r[i][k]+r[k][j]);
}
int min(int a,int b)
{
        if(a<b)
                return a;
        else
                return b;
}
void main(){
        int r[10][10],i,j,n;
        printf("Enter the number of vertices\n");
        scanf("%d",&n);
        printf("Enter the weight matrix\n");
        for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                        scanf("%d",&r[i][j]);
        floyd(r,n);
        printf("Shortest Path is \n");
        for(i=1; i<=n; i++)
        {
                for(j=1; j<=n; j++)
                        printf("%d\t",r[i][j]);
                printf("\n");
        }
}
 
