#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define GUEST 0
#define USER 1


struct guest
{
	int id;
	char name[20];
	int percentage;
};

struct user
{
	int id;
	char name[20];
	int percentage;
};


// Extrapolating type and size from void pointer
void** genericArr(void** array, int type, int size) {
	/*cast void pointers to something else, 
    get a void pointer as a function parameter then you have to know for sure what type it is and it's size*/
	struct guest** new_Guest = NULL;
	struct user** new_User = NULL;
	int len = 0;

	switch (type) {
	case 0: 
		//  access something being pointed to by the void pointer
		new_Guest = (struct guest**)array;
		for (int i = 0; i < size; ++i) {
			printf("%s""\t", new_Guest[i]->name); // %s is format specifier

		} 
		break;
	case 1: 
		//  access something being pointed to by the void pointer
		new_User = (struct user**)array;
		for (int i = 0; i < size; ++i) {
			printf("%s""\t", new_User[i]->name); // %s is format specifier

		}
		break;
	}

	return array;
}


int main() {


	int UniversalSize = 3;
	struct guest** guestArray = (struct guest**)malloc(UniversalSize * sizeof(struct guest*));
	struct user** userArray = (struct user**)malloc(UniversalSize * sizeof(struct user*));

	// Next you need to allocate space for each string:
	int i;
	int stringsize = 4;
	for (i = 0; i < UniversalSize; ++i) {
		guestArray[i] = (struct guest*)malloc(sizeof(struct guest) * stringsize + 1);
		userArray[i] = (struct user*)malloc(sizeof(struct user) * stringsize + 1);
		strcpy(guestArray[i]->name, "guest");
		strcpy(userArray[i]->name, "user");
	}


	struct guest** guestCopy = (struct guest**)genericArr(guestArray, GUEST, UniversalSize);
	struct user** userCopy = (struct user**)genericArr(userArray, USER, UniversalSize);
	free(guestCopy);
	free(userCopy);
}

