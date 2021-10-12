#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <fstream>
#include <string.h>


struct player
{
	char name[100];
	
	
};

int main()
{
	player player[100];
	int i = 0;
	printf("Input data string : \n");
	while ( i < 10)
	{
		
		scanf("%[^.]s", player[i].name);
		i++;
		
	}
	
	FILE* fp;
	fp = fopen("TextFile.txt", "w");

	
		fprintf(fp, "%s\n", player[0].name);

	
	printf("%s\n", player[0].name);
	fclose(fp);
	return 0;
}
