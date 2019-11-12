#include <stdio.h>
#include <string.h>

struct student 
{
           int id;
           char name[20];
           float percentage;
		   struct student* node; 
};


int main() 
{
          struct student* head = (struct student*)malloc(sizeof(struct student));
		  struct student* front = (struct student*)malloc(sizeof(struct student));
		  front = head;
		  
		  head->id=1;
		  strcpy(head->name, "Raju");
		  head->percentage = 86.5;
		  
		  
		  int size = 5;	
	      int count = 1;		  
		  for(int i = 0; i < size; i++){
			  count = count + 1;
			  struct student* newNode = (struct student*)malloc(sizeof(struct student));
			  newNode->id=count;
			  strcpy(newNode->name, "Raju");
			  newNode->percentage = 86.5;
			  head->node = newNode;
			  head =  head->node;
			}
		  
		    head = front;
		  	for(int i = 0; i < size; i++){
				printf("%d\n", head->id);				
				head = head->node;
			}
			
			printf("\n");
			
		    head = front;
		  	 for(int i = 0; i < size; i++){
				if(i == 1){
					head->id = 8;
				}
				printf("%d\n", head->id);				
				head = head->node;
			}
		  
          return 0;
}
