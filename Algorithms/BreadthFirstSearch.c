#include <stdio.h>
void bfs(int[20][20], int, int[20], int);
int count = 0, visitedorder[20], i, visited[20], queue[20];
void main()
{
  int n, a[20][20], j, source;
  printf("Enter number of vertices: \n");
  scanf("%d", &n);
  printf("Enter the adjacency matrix: \n");
  for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
      scanf("%d", &a[i][j]);
  for (i = 1; i <= n; i++)
    visited[i] = 0;
  printf("Enter the source node \n");
  scanf("%d", &source);
  bfs(a, n, visited, source);
  for (i = 1; i <= n; i++)
    if (visited[i] == 0)
      bfs(a, n, visited, i);
  for (i = 1; i <= n; i++)
    visitedorder[visited[i]] = i;
  printf("BFS Traversal \n");
  for (i = 1; i <= n; i++)
    printf("%c \t", 64 + visitedorder[i]);
}

void bfs(int a[20][20], int n, int visitedorder[20], int source)
{
  int f, r, u, v;
  f = 0;
  r = -1;
  count++;
  visited[source] = count;
  queue[++r] = source;
  while (f <= r)
  {
    u = queue[f++];
    for (v = 1; v <= n; v++)
    {
      if (a[u][v] == 1 && visited[v] == 0)
      {
        queue[++r] = v;
        count++;
        visited[v] = count;
      }
    }
  }
}
