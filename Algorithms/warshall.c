#include <stdio.h>
void warshal(int r[10][10],int n)
{
        int i,j,k;
        for(k=1; k<=n; k++)
                for(i=1; i<=n; i++)
                        for(j=1; j<=n; j++)
                                r[i][j]=r[i][j]||r[i][k]&&r[k][j];
}
void main(){
        int r[10][10],i,j,n;
        printf("Enter the number of vertices\n");
        scanf("%d",&n);
        printf("Enter the adjancency matrix\n");
        for(i=1; i<=n; i++)
                for(j=1; j<=n; j++)
                        scanf("%d",&r[i][j]);
        warshal(r,n);
        printf("Transitive Closure is \n");
        for(i=1; i<=n; i++)
        {
                for(j=1; j<=n; j++)
                        printf("%d\t",r[i][j]);
                printf("\n");
        }
}
