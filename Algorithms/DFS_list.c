// Depth First Search(DFS - Adjacency List
// by -@imkaka

// DFS is a tree/graph search algorithm which search exploring the depth of any node first.
// Time Complexity - O(b^d) where b is branching factor and d is depth.


#include<stdio.h>
#include<stdlib.h>
 
typedef struct node
{
    struct node *next;
    int vertex;
}node;

// Global var
node *Graph[20];      
int visited[20];
int n;

void input_graph();      //create adjacency list
void insert(int,int);    //insert an edge (vi,vj) in te adjacency list
void DFS(int);
 
void main()
 {
    int i;
    input_graph();
    
    //initialised visited to 0
    for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
}

// Input Graph
void input_graph()
{
    int i,vi,vj,no_of_edges;
    printf("Enter number of vertices:");
   
    scanf("%d",&n);
 
    //initialise Graph[] with a null
   
    for(i=0;i<n;i++)
    {
        Graph[i]=NULL;
        //read edges and insert them in Graph[]
       
        printf("Enter number of edges:");
           scanf("%d",&no_of_edges);
 
           for(i=0;i<no_of_edges;i++)
        {
            printf("Enter an edge(u,v):");
            scanf("%d%d",&vi,&vj);
            insert(vi,vj);
        }
    }
}
 
// Insert Func
void insert(int vi,int vj)
{
    node *p,*q;              // Local variables
    
    //acquire memory for the new node
    q=(node*)malloc(sizeof(node));
    q->vertex=vj;
    q->next=NULL;
 
    //insert the node in the linked list number vi
    if(Graph[vi]==NULL)
        Graph[vi]=q;
    else
    {
        //go to end of the linked list
        p=Graph[vi];
       
        while(p->next!=NULL)
            p=p->next;
        p->next=q;
    }
}

void DFS(int i)
{
    node *p;
   
    printf("\n%d",i);
    p=Graph[i];
    visited[i]=1;
    while(p!=NULL)
    {
       i=p->vertex;
       
       if(!visited[i])
            DFS(i);
        p=p->next;
    }
}
 
