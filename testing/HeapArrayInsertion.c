#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{			
		  int size = 5;
		  char** arr = (char**)malloc(size * sizeof(char*));
		  
		  printf("%d\n", size); 
		  
		  for(int i = 0; i < size; i++){
			char* arrStr = "test";
			arr[i] = arrStr;		
		  }
		  
		   for(int i = 0; i < size; i++){
			printf("%s\n", arr[i]);  
		  }
		  
		  size = (size + 1);
		  arr = (char **)realloc(arr, (size) * sizeof(char*));
		  
		  char* arrStr2 = "null";
		  arr[size - 1] = arrStr2;
		  printf("\n");
		  

		  for(int i = 0; i < (size); i++){
			printf("%s\n", arr[i]);  
		  }
		  
		 char** newArr = (char**)malloc(size * sizeof(char*));
		  
		  
		    for(int i = 0; i < size; i++){
			if(i == 1){
				char* arrStr = "test2";
				newArr[i] = arrStr;		
			}
			else{
				newArr[i] = arr[i];
			}	
		  }
		  
		  	  printf("\n");
		  for(int i = 0; i < (size + 1); i++){
			printf("%s\n", newArr[i]);  
		  }
		  
		  
		 
		 
		  
		  
          return 0;
}

