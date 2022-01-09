#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void insert(struct Node **, int, int);
void delete(struct Node **, int);
void traversal(struct Node*);
void middle(struct Node **);
struct Node *search(struct Node *, int);
int main(){
	int choice, want_continue, pos, data, key;
	printf("Choices are:1.Insert, 2.Delete, 3.Traversal, 4.Search\n");
	struct Node *head=NULL, *r, *m;
	do{
		printf("Enter choice:");
		scanf("%d", &choice);
		switch(choice){
			case 1: printf("Enter value and position :");
				scanf("%d%d",&data, &pos);
				insert(&head, data, pos);
				break;
			case 2: printf("Enter position to delete :");
				scanf("%d", &pos);
				delete(&head, pos);
				break;
			case 3:	traversal(head);
				break;
			case 4: printf("Enter key :");
				scanf("%d", &key);
				r = search(head, key);
				if(r == NULL)
					printf("Not Found\n");
				else
					printf("Successful\n");
			case 5: printf("Middle value of above node is:\n");
				middle(&head);
				break;
		}
		printf("want to continue, Enter 1\n");
		scanf("%d", &want_continue);
		}while(want_continue == 1);
	return 0;
}
void insert(struct Node **head, int data, int pos){
	struct Node *p, *q, *temp;
	int k=1;
	temp = (struct Node*) malloc(sizeof(struct Node));
	temp -> data = data;
	p = *head;
	if(pos == 1){
		temp -> next = *head;
		*head = temp;

	}
	else{
		while((p != NULL) && (k < pos)){
			q = p;
			p = p -> next;
			k++;
		}
		q -> next = temp;
		temp -> next = p;
	}
}

void delete(struct Node **head, int pos){
	struct Node *p, *q;
	int k = 1;
	p = *head;
	if(pos == 1){
		*head = (*head) -> next;
		free(p);
	}
	else{
		while((p != NULL) && (k < pos)){
			q = p;
			p = p -> next;
			k++;
		}
		if(p == NULL)
			printf("Node doesn't exsist\n");
		else{
			q->next = p->next;
			free(p);
		}
	}
}

void traversal(struct Node *head){
	struct Node *p;
	p = head;
	while(p != NULL){
		printf("%d\t", p->data);
		p = p->next;
	}
	printf("\n");
}

struct Node *search(struct Node *head, int key){
	struct Node *p;
	p = head;
	while(p != NULL){
		if(p->data == key){
			return p;
		}
		p = p->next;
	}

	return NULL;
}
void middle(struct Node **head){
	struct Node *p, *q;
	p = *head;
	q = *head;
	while( (q != NULL) && ((q -> next) != NULL)){
		q = q -> next -> next;
		p = p -> next;
	}
	printf("%d\n", (p->data));
}

	


