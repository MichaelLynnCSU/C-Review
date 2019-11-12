#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{			
		char newString[] = "Hello World";
		int count = 0;
		for(int i = 0; newString[i] != '\0'; i++){
			count = count + 1;
			printf("%c", newString[i]);
		
		}
		
		strcat(newString,"!");
		
	    printf("\n");
		 
		printf("%s %d", newString, count + 1);
		
		
          return 0;
}

