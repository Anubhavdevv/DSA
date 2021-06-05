//DSA DAY 18
//Problem: Inserting in a Sorted Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;


void Display(struct Node *p){
     while(p!=NULL){
         printf("%d ",p->data);
         p = p->next;
     }
}

void create(int A[],int n)
{
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void SortedInsert(struct Node *p,int x)
{
    struct Node *t,*q=NULL;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;
    if(first==NULL)
       first=t;
    else
    {
        while(p && p->data<x){
           q=p;
           p=p->next;
        }
        if(p==first){
            t->next=first;
            first=t;
        }
        else{
           t->next=q->next;
           q->next=t;
        }
    }
}


int main()
{
    int n;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(n*sizeof(struct Node));
    printf("\nEnter elements in array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int a=0;
    printf("\nEnter the position: ");
    scanf("%d",&a);
    create(arr,a);
    int ele = 0;
    printf("\nEnter the element: ");
    scanf("%d",&ele);
    SortedInsert(first,ele);
    printf("\nInsertion in Sorted Linked List: \n");
    Display(first);
    return 0;
}
