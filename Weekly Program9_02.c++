//เพิ่มเติมโดยใช้ฟังก์ชัน flie
//เกิด bug ก็ยังสามารถ runcode ได้อยู่


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include <fstream>


char flie(char writ) {
	FILE* fp;
	fp = fopen("Tempdata.txt", "w");

	fprintf(fp, "%s\n", writ);

	fclose(fp);
}


int main()
{
	
	char name[1000];
	

	printf("Input data string : \n");

	scanf("%[^.]s", name);
	
	flie(name[1000]);
	return 0;
}
