#include <stdlib.h>
#include <stdio.h>
typedef struct linknode{
	int data;
	
	void *next;
	//struct linknode *next
	
}linknode_t;

static linknode_t *list; //linked list 실체 

linknode_t* create_node(int value){
	
	linknode_t *ndPtr;
	
	//동적 메모리 할당&정수값 저장  
	ndPtr=(linknode_t*)malloc(sizeof (linknode_t)); 
	if(ndPtr==NULL)
	{
		printf("ERROR\n");
		return NULL;
	}
	ndPtr->data=value;
	ndPtr->next= NULL; 
	
	return ndPtr;
}

void addTail(int value)
{
	linknode_t *ndPtr, *newPtr;
	
	if(list==NULL)
	{
		return;
	}
	else
	{
		ndPtr=list;
		while(ndPtr->next!=NULL)
		{
			ndPtr=ndPtr->next;
		}
		
		newPtr=create_node(value);
		ndPtr->next=newPtr;
	}
}

void genList(void){
	
	list=create_node(0);
	
	return;
}

void print_list(void){
	
	linknode_t *ndPtr;
	
	if(list->next==NULL)
	{
		return;
	}
	
	ndPtr=list->next;
	while(ndPtr!=NULL){
		printf("%d ", ndPtr->data);
		ndPtr=ndPtr->next;
	}
}




