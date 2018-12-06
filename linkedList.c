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

void print_node(int n){
	
	linknode_t *ndPtr;
	int i=0;
	ndPtr=list->next;
		
	while(ndPtr!=NULL){
		i++;
		if(i==n)
		{
			printf("%i-th value : %i\n", i, ndPtr->data );
			break;
		}
		ndPtr=ndPtr->next;
	}
	
}






