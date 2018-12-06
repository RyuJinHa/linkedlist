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
