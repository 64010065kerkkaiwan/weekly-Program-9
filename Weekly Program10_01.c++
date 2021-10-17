//รับค่าตัวเลข 2 จำนวน เก็บใน x และ y ตามลำดับ จากนั้นให้ทำการสลับค่ากัน โดยห้ามสร้างตัวแปรเพิ่ม 
//เก็บไว้ใน Text File 


// ครั้งที่ 9

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <fstream>
  
  void swap(int *a, int *b) {

	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}


int main()
{
	int x, a=0;
	int y, b=0;
	printf("Input two Numbers : ");
	scanf("%d %d", &x, &y);

	// สำหรับเขียนลงในไฟล์
	a = x;
	b = y;

	swap(&x, &y);
	
	printf("Swapping values   : %d %d\n", x, y);
  
  FILE* fp;
	fp = fopen("Swapnumber.txt", "a");

	fprintf(fp, "Input two Numbers : %d %d\n", a, b);
	fprintf(fp, "Swapping values   : %d %d\n\n", x, y);

	fclose(fp);
	return 0;
  }
