#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_DEPRECATE

struct student 
{
           int id;
           char name[20];
           float percentage;
};

void func(struct student **record);
void func2(struct student **record);
void func3(struct student *record);
void func4(struct student *record);

int main() 
{			
		 int size = (10 + 1);
         struct student** record_arr = (struct student **)malloc(size * sizeof(struct student*));
		 struct student*  record_node = (struct student *)malloc(sizeof(struct student));
		
	      record_arr[0] = record_node;
          record_arr[0]->id=1;
		  strcpy(record_arr[0]->name, "Alpha");
          record_arr[0]->percentage = 86.5;
          func(record_arr);
		  func2(&*record_arr);
		  func3(record_arr[0]);
		  func4(&*record_arr[0]);
		  
		  free(record_arr);
		  free(record_node);
		  
          return 0;
}

// copy of pointer to pointers
void func(struct student **record)
{
          printf(" Id is: %d \n", record[0]->id);
          printf(" Name is: %s \n", record[0]->name);
          printf(" Percentage is: %f \n", record[0]->percentage);
}

// the real macoy
void func2(struct student **record)
{
          printf(" Id is: %d \n", record[0]->id);
          printf(" Name is: %s \n", record[0]->name);
          printf(" Percentage is: %f \n", record[0]->percentage);
}

// copy of pointer
void func3(struct student *record)
{
          printf(" Id is: %d \n", record->id);
          printf(" Name is: %s \n", record->name);
          printf(" Percentage is: %f \n", record->percentage);
}

// the real macoy
void func4(struct student *record)
{
          printf(" Id is: %d \n", record->id);
          printf(" Name is: %s \n", record->name);
          printf(" Percentage is: %f \n", record->percentage);
}