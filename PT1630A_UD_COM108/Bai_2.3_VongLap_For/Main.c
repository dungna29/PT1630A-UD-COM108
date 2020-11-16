#include <stdio.h>
/// <summary>
/// Vòng lặp FOR
/// </summary>
/// <returns></returns>

int main()
{
	//Cách dùng: for + tab
	// int i = 0: Khai báo i bắt đầu từ 0
	// i < length: Điều kiện để ngắt vòng lặp
	// i++: Tăng i lên 1 đơn vị
	// for (int i = 0; i < length; i++)
	// {
	//	//Thực hiện 1 hành động nào đó
	//
	// }

	//In 1 bảng cửu chương chỉ định
	// for (int i = 0; i <= 10; i++)
	// {
	// 	printf("%d x %d = %d \n", 9, i, 9 * i);
	// }

	// In tất 9 bảng cửu chương sử dụng 2 vòng lặp for
	for (int i = 1; i <= 9; i++)
	{
		//i = 3
		for (int j = 0; j <= 10; j++)
		{
			//i = 2
			//j =0
			printf("%d x %d = %d \n", i, j, i * i);// 1 * 0
		}
	}


	//While bảng cửu chương
	//int a = 0, input = 9;
	// while (a<=10)
	// {
	// 	printf("%d x %d = %d \n", input, a, input * a);
	// 	a++;
	// }


	// int i = 1, j = 0;
	// while (i < 10)
	// {
	// 	while (j <= 10)
	// 	{
	// 		printf("%d x %d = %d \n", i, j, i * j);
	// 		j++;
	// 	}
	// 	i++;
	// 	j = 0;//Reset j về 0
	// 	
	//
	// }
}
