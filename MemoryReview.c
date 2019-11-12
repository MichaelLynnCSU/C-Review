
#define INITIAL_CAPACITY 3
int main(){


     int* arry = malloc(INITIAL_CAPACITY * sizeof(int));
	 int k = 0;
	 int n = INITIAL_CAPACITY;
	 while(k < n)
    {
        arry[k] = k;
		printf("%d""\n", arry[k]); // %s is format specifier
        k++;
    }
	
	 
   char z[100] = "C Review.";
   printf("%s""\n", z); // %s is format specifier
   
   
	 
	 char **array = malloc(INITIAL_CAPACITY * sizeof(char *));
	 // Next you need to allocate space for each string:
	 int i;
	 int stringsize = 4;
     for (i = 0; i < INITIAL_CAPACITY; ++i) {
     array[i] = (char *)malloc(stringsize+1);
	 array[i] = "test";
	 printf("%s""\t", array[i]); // %s is format specifier
	 }
	 
	 free(arry);
	 
	 
	 
}
