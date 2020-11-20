#include <stdio.h>
/// <summary>
/// MẢNG - ARRAY
/// </summary>
/// <returns></returns>
int main()
{
	//Lưu nhiều biến có kiểu dữ liệu 8,9,7,6
	int a = 8, b = 9, c = 7, d = 6;
	/*
	 * 1. Mảng dùng để lưu trữ 1 tập hợp giá trị có cùng kiểu dữ liệu
	 * 2. Mảng trong lập trình là mảng tĩnh không co giãn
	 * 3. Index trong mảng luôn bắt đầu từ 0
	 */
	 //Cách dùng:
	 // <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	 // <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];
	int arrNumber[] = { 8,2,7,9 };//Khai báo 1 mảng số nguyên có mấy 4 phần tử
	int arrNumber2[8];//Khai báo 1 mảng số nguyên có kích thước là 8 phần tử

	// Để lấy được giá trị đơn của mảng thì cần phải biết vị trí của nó
	// Nhớ rằng Index luôn bắt đầu từ 0
	// <tên mảng>[index] tương ứng với 1 giá trị
	printf("Index 0 = %d \n", arrNumber[0]);
	printf("Index 1 = %d \n", arrNumber[1]);
	printf("Index 2 = %d \n", arrNumber[2]);
	printf("Index 3 = %d \n", arrNumber[3]);

	//Gán giá trị cho mảng
	// <tên mảng>[index] = giá trị cần gán;
	arrNumber2[0] = 9;
	arrNumber2[0] = 8;
	arrNumber2[1] = 3;
	arrNumber2[2] = 4;
	arrNumber2[3] = 5;
	arrNumber2[4] = 10;

	// In tất cả các phần tử trong mảng ra màn hình
	// Dùng vòng lặp để in tất cả các phần tử trong mảng ra
	for (int i = 0; i < 5; i++)
	{
		printf("\t Index %d = %d \n", i, arrNumber2[i]);
	}

	/*
	 * Bài 1: Khai báo 1 mảng số nguyên gồm các phần tử sau
	 * int arrNumber[] = {88,7,9,6,5,8};	 *
	 *  - In số 5 ra màn hình bằng câu printf.
	 *  - In tất cả các phần tử có ở trong mảng ra màn hình
	 *  - In tất cả các giá trị chẵn ra màn hình.
	 */
	 //Bài giải:
	int arrNumber2020[] = { 88,7,9,6,5,8 };
	printf("%d\n", arrNumber2020[4]);

	//In tất cả ra  màn hình dùng
	for (int i = 0; i < 6; i++)
	{
		printf("%d = %d", i, arrNumber2020[i]);
	}

	//In tất cả giá trị chẵn ra màn hình
	for (int i = 0; i < 6; i++)
	{
		if (arrNumber[i] % 2 == 0)
		{
			printf("%d = %d", i, arrNumber2020[i]);
		}
	}
}
