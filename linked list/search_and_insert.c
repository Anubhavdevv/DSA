//DSA DAY 15
//Searching the element in the List and Diplaying it 

#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *next;
}*first = NULL;


//Creating a linked list
void create(int arr[], int n)
{
	int i;
	struct Node *t, *last;
	first = (struct Node*)malloc(sizeof(struct Node));
	first->data = arr[0];
	first->next = NULL;
	last = first;
	for (i = 1; i < n; i++) {
		t = (struct Node*)malloc(sizeof(struct Node));
		t->data = arr[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}

}

//Displaying the Linked List

void display(struct Node *p) {
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

struct Node* Modified_Search(struct Node *p, int key){
	struct Node *q=NULL;       //Node type pointer 
	while(p!=NULL){
		if(key == p->data){
            q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return 0;
}

int count(struct Node* p){
    int c=0;
    while(p!=NULL){
        c = count(p->next);
        return c+1;
    }
    return 0;
}
void Insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;
    if(index < 0 || index > count(p))
         return;
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    if(index == 0){
        t->next=first;
        first=t;
    }
    else{
       for(i=0;i<index-1;i++){
            p=p->next;
            t->next=p->next;
            p->next=t;
       }
    }   
}
int main() {

    struct Node *temp=NULL;
	int n;
    printf("\nEnter the size of the list: ");
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(struct Node));
	printf("\nEnter the Element in the list: \n");
    for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	create(arr, n);

    printf("\n\n");
	int key=0;
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	temp = Modified_Search(first, key);
	
    if(temp){
		printf("Element is Found: %d\n",temp->data);
	}
	else{
		printf("\nElement is not found\n");
	}
	printf("\nDisplaying the List: ");
	display(first);
    printf("\n\n");
    int index=0;
    int x=0;
    printf("Enter the index: ");
    scanf("%d",&index);
    printf("Enter the number: ");
    scanf("%d",&x);
    Insert(first, index, x); 
    printf("\nAfter Inserting: \n");
    display(first);

    return 0;
}
