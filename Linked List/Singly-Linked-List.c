// Author: Tushar Mittal (@techytushar) :p

#include<stdio.h>
#include<stdlib.h>
//structure of the nodes of single linked list, each node contains a value and address of the next node.
struct sll{
    int data;
    struct sll *next;
};
// type defining the structure of the node as 'node' so that we don't have to write full struct statement again and again, we can just write node.
typedef struct sll node;
//head pointer which will always store the address of head node. Initially it will be null
node *head = NULL;
// to store len of linked list
int len = 0;
// to create and allocate memory of a node.
node *create(){
    node *p;
    p = (node *)malloc(sizeof(node));
    p->next = NULL;
    return p;
}
//to insert a node at begining.
void insertatbeg(){
    //incresing length of linked list
    len++;
    //allocating memory for the node by calling the function create and scanning the value to be stored.
    node *p;
    p = create();
    printf("\nEnter a value: ");
    scanf("%d",&p->data);
    if(head==NULL){
        head = p;
        p->next = NULL;
    }
    else{
        p->next = head;
        head = p;
    }
}
//to insert a node at specified position.
void insertatpos(){
    int a;
    node *p = create(),*q=head;
    printf("Enter a value: ");
    scanf("%d",&p->data);
    printf("Enter a position between 0 and %d: ",len);
    scanf("%d",&a);
    len++;
    if(a>0 && a<len){
        while(a!=1){
            q = q->next;
            a--;
        }
        p->next = q->next;
        q->next = p;
    }
    else{
        printf("\nEnter a valid position!");
    }
}
// to insert a node at the end.
void insertatend(){
    node *p=create(),*q = head;
    printf("Enter a value: ");
    scanf("%d",&p->data);
    len++;
    p->next= NULL;
    if(head==NULL){
        head = p;
    }
    else{
        while(q->next!=NULL){
            q = q->next;
        }
        q->next = p;
    }
}
//to delete a node from begining.
void deleteatbeg(){
    node *p=head;
    if(head==NULL){
        printf("List Empty. Nothing to delete.");
    }
    else{
        printf("%d\n",p->data);
        head = p->next;
        free(p);
        len--;
    }
}
//delete from end.
void deleteatend(){
    node *p,*q=head;
    if(head==NULL){
        printf("List is empty. Nothing to delete.");
    }
    else{
        while(q->next!=NULL){
            p = q;
            q = q->next;
        }
        printf("%d",q->data);
        p->next = NULL;
        len--;
        free(q);
    }
}
//to delete node from a position.
void deletefrompos(){
    node *p=head;
    int a;
    if(p==NULL){
        printf("List is empty. Noting to delete.");
    }
    else{
        printf("Enter a position between 1 and %d to delete from: ",len+1);
        scanf("%d",&a);
        if(a>1 && a<=len){
            a-=2;
            while(a){
                p=p->next;
                a--;
            }
            printf("%d",p->next->data);
            p->next = p->next->next;
            len--;
        }
        else{
            printf("Enter a valid position.");
        }
    }
}
// to traverse and print all the nodes.
void traverse(){
    node *p=head;
    if(head==NULL){
        printf("\nList is empty.");
    }
    else{
        while(p!=NULL){
            printf("%d==>",p->data);
            p = p->next;
        }
        printf("X\n");
    }
}
//to reverse linked list
void reverse(){
    node *p,*q,*r;
    if(head==NULL){
        printf("List is empty.\nNULL");
    }
    else if(len==1){
        traverse();
    }
    else{
        p = head,q=p->next,r=q->next;
        while(r!=NULL){
            q->next = p;
            p = q;
            q = r;
            r = r->next;
        }
        q->next = p;
        head->next = NULL;
        head = q;
        printf("List reversed!\n");
        traverse();
    }
}
int main(){
    int a,b;
    while(1){
        printf("\n1.for insert at beg.\n2.for insert at pos\n3.insert at end\n4.delete from beg\n5.delete from end\n6.delete from position\n7.Traverse\n8.Reverse\n9.EXIT  ");
        scanf("%d",&a);
        if(a==1){
            insertatbeg();
        }
        else if(a==2){
            insertatpos();
        }
        else if(a==3){
            insertatend();
        }
        else if(a==4){
            deleteatbeg();
        }
        else if(a==5){
            deleteatend();
        }
        else if(a==6){
            deletefrompos();
        }
        else if(a==7){
            traverse();
        }
        else if(a==8){
            reverse();
        }
        else if(a==9){
            break;       
        }
        else{
            printf("Wrong Choice!");
        } 
    }
    return 0;
}