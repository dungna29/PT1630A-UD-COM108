#include <stdio.h>
/// <summary>
/// Chuỗi trong C chính là 1 mảng ký tự
/// </summary>
/// <returns></returns>
/// Java - String C#- string (Chuỗi)
int main()
{
	//Khai báo 1 mảng kiểu char có kích thước là 1000
	char name[50];
	printf("Moi ban nhap ten: ");
	gets_s(name, 50);
	//scanf_s("%s", name, 50);
	printf("%s", name);

	//Cách 1
	//scanf_s("%s", &ten, 50);

	//Cách 2
	//fgets(ten, 50, stdin);

	//Cách 3
	//scanf_s("%[^\n]", ten, 20);//Regex
	//printf("Ten ban vua nhap la: %s", ten1);
}