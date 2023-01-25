#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void)
{
	FILE *myfile;
	
	char line[MAX];
	int buffer;
	
	myfile = fopen("hello.txt", "r");
	if (myfile == NULL){
		printf("File is empty or does not exist. Try again\n");
		return 0;
	}
	
	fscanf(myfile, "%[^EOF]", line);
	printf("%s\n", line);
	

	fclose(myfile);

	return 0;
}
