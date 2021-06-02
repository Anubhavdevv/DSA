#include <stdio.h>
#include <stdlib.h>


//DSA DAY14
/*
1) Creating and Displaying User Input Linked List
2) Count Nodes
3) Sum of The Nodes
4) Maximum Element
5) Minimum Element
*/


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

//Displaying the Reversed Linked List using Recursion
void rev_display(struct Node *p) {
	if (p != NULL) {
		rev_display(p->next);
		printf("%d ", p->data);
	}
}

//Displaying the Linked List

void display(struct Node *p) {
	while (p != NULL) {
		printf("%d ", p->data);
		p = p->next;
	}
}

//Count Node Recursively
int getCount(struct Node* p)
{
	int c = 0;
	while (p) {
		c = getCount(p->next);
		return c + 1; 
	}
	return 0;
}


//Sum of elment recursively
int Add_recur(struct Node *p) {
	if (p) {
		return Add_recur(p->next) + p->data;
	}
	return 0;
}


//Maximum Element in the List
int max_Node(struct Node *p) {
	int max = INT_MIN;
	while (p != NULL) {
		if (max < p->data)
			max = p->data;
		p = p->next;
	}
	return max;
}

int min_Node(struct Node *p) {
	int min = INT_MAX;
	while (p != NULL) {
		if (min > p->data)
			min = p->data;
		p = p->next;
	}
	return min;
}

struct Node *search(struct Node *p, int key){
	while(p!=NULL){
		if(key==p->data){
			return p; 
		}
		p=p->next;
	}
	return 0;
}

//RECURSIVELY LINEAR SEARCH 

struct Node* Rsearch(struct Node *p, int key){
	if(p==NULL)
	   return 0;
	if(key==p->data)
	    return p;
	return Rsearch(p->next, key); 
}



void searching(struct Node *p, int key){
	while(p!=NULL){
		p=p->next;
		if(p->data == key){
			printf("\nElement Found: %d", key);
			break;
		}
		else{
			printf("\nElement Not Found!!");
			break;;
		}
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
int main() {

    struct Node *temp=NULL;
	int n;
	scanf("%d", &n);
	int *arr = (int*)malloc(n * sizeof(struct Node));
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	create(arr, n);
	display(first);

	printf("\n\nReverse Linked List: ");
	rev_display(first);

	printf("\n\nCount Node: %d", getCount(first));

	printf("\n\nSum of The Nodes: %d", Add_recur(first));

	printf("\n\nMaximum Element: %d", max_Node(first));

	printf("\n\nMinimum Element: %d", min_Node(first));
    printf("\n\n");
	int key=0;
	printf("Enter the element to be searched: ");
	scanf("%d",&key);
	//searching(first, key);
	temp = Modified_Search(first, key);
	
    if(temp){
		printf("Element is Found: %d",temp->data);
	}
	else{
		printf("Element is not found");
	}
	printf("\n");
	display(first);
	
}
