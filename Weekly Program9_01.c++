#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <fstream>



struct player
{
	char name[1000];


};

int main()
{
	player player[10];

	printf("Input data string : \n");

	scanf("%[^.]s", player[0].name);


	FILE* fp;
	fp = fopen("datanumbers.txt", "w");

	fprintf(fp, "%s\n", player[0].name);

	fclose(fp);
	return 0;
}
