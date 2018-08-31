// Author: Tushar Mittal (@techytushar)
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//defining a max function to be used later.
#define max(x,y) (x>y) ? (x) : (y)

//structure for the nodes.
struct bst{
    int data;
    struct bst *lchild;
    struct bst *rchild;
}bst;
typedef struct bst node;
node *root = NULL;

//to create node and allocating space
node *create(){
    node *p;
    p = (node *)malloc(sizeof(node));
    p->lchild = NULL;
    p->rchild = NULL;
    return p;
}

/*to insert node into tree, if root is null then node will become the root, else loop till the element
  child position is empty.*/
void insert(){
    node *p=create(), *q = root;
    printf("Enter a value: ");
    scanf("%d",&p->data);
    if(root==NULL){
        root=p;
    }
    else{
        while(1){
            if(p->data>q->data){
                if(q->rchild==NULL){
                    q->rchild = p;
                    break;
                }
                else q = q->rchild;
            }
            else if(p->data<=q->data){
                if(q->lchild==NULL){
                    q->lchild = p;
                    break;
                }
                else q = q->lchild;
            }
        }
    }
}

//to search for an element in the tree.
int search(node *p,int data){
    if(p==NULL){
        printf("\nElement not found.\n");
        return 0;
    }
    if(p->data == data){
        printf("\nElement Found!\n");
        return 0;
    }
    else if(p->data>data){
        return search(p->lchild,data);
    }
    else{
        return search(p->rchild,data);
    }
}

// to find the maximum and minimum element in the tree. max is the rightmost and min is the leftmost.
int findminmax(){
    node *p = root;
    if(root==NULL){
        printf("\nTree is empty.\n");
        return 0;
    }
    while(p->rchild!=NULL){
        p = p->rchild;
    }
    printf("\nThe max element in the tree is %d.\n",p->data);
    p = root;
    while(p->lchild!=NULL){
        p = p->lchild;
    }
    printf("The min element in the tree is %d.\n",p->data);
    return 0;
}

// to find height of root node. recursive call returns max of left subtree height and right subtree height.
int height(node *p){
        if(p==NULL){
            return -1;
        }
        else return max(height(p->lchild)+1,height(p->rchild)+1);
}

//Inorder traversal.
int in_traverse(node *p){
    if(p==NULL){
        return 0;
    }
    in_traverse(p->lchild);
    printf(" %d ",p->data);
    in_traverse(p->rchild);
}

// pre order traversal
int pre_traverse(node *p){
    if(p==NULL){
        return 0;
    }
    printf(" %d ",p->data);
    pre_traverse(p->lchild);
    pre_traverse(p->rchild);
}

// post order traversal.
int post_traverse(node *p){
    if(p==NULL){
        return 0;
    }
    post_traverse(p->lchild);
    post_traverse(p->rchild);
    printf(" %d ",p->data);
}

// main driver program
int main(){
    int a,b;
    printf("\n********* Binary Search Tree ********\n");
    while(1){
        printf("\n1.For insert\n2.For searching.\n3.Find min and max.\n4.Find height.\n5.In Order Traversal\n6.Pre Order Traversal\n7.Post Order Traversal\n8.Exit  ");
        scanf("%d",&a);
        if(a==1){
            insert();
        }
        else if(a==2){
            printf("Enter the value to search for: ");
            scanf("%d",&b);
            search(root,b);
        }
        else if(a==3){
            findminmax();
        }
        else if(a==4){
            printf("\nThe height of root node is: %d.\n",height(root));
        }
        else if(a==5){
            in_traverse(root);
        }
        else if(a==6){
            pre_traverse(root);
        }
        else if(a==7){
            post_traverse(root);
        }
        else if(a==8){
            break;
        }
        else{
            printf("\nWrong Choice!");
        }
    }
}