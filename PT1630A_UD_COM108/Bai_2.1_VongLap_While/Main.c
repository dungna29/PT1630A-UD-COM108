#include <stdio.h>
/// <summary>
/// VÒNG LẶP 
/// Lặp đi lặp lại 1 hành động nào đó
/// VÒNG LẶP WHILE
/// </summary>
/// <returns></returns>
int main()
{
	//Sử dụng: wh + tab
	// while (true) - Biểu thức giống như if hoặc Else If
	// {
	// 	Chỉ khi biểu thức true thì vòng lặp mới được thực hiện
	//	Vòng lặp thì nên tìm điểm ngắt vòng lặp
	//	Break, Goto, Continue về tìm hiểu thêm
	// }

	//Ví dụ 5:  Sử dụng Break
	// int a = 0;
	// while (a < 5)
	// {
	// 	printf("Chao cac ban den voi WHILE %d \n", a);
	// 	a++;
	// }

	//Ví dụ 4: Đưa ra điều kiện ngắt vòng lặp
	// Tìm ra các điểm ngắt vòng lặp cho hợp lý
	int a = 0;
	while (a < 10)
	{
		if (a == 5)
		{
			break;//Dùng để ngắt vòng lặp
		}
		printf("Chao cac ban den voi WHILE %d \n", a);
		a++;
		
	}

	//Ví dụ 3: //Vòng lặp này là vòng lặp vô hạn
	// while (5 > 3 && 3 >1)//(5 > 3 && 3 >1) = True
	// {
	// 	printf("Khi while  = true");
	// }


	// Ví dụ 2:
	// while (5>6)//(5>6) = Flase
	// {
	// 	//Nếu biểu thức False thì sẽ không chạy xuống đây
	// 	printf("Co chay hay khong");
	// }



	//Ví dụ 1: Vòng lặp vô hạn
	// while (1)
	// {
	// 	//Chương trình nhập số Lẻ Chẵn
	// // Bước 1:
	// 	int input = 0;
	// 	//Bước 2:
	// 	printf("Moi ban nhap so nguyen: ");
	// 	scanf_s("%d", &input);
	// 	if (input % 2 == 0)
	// 	{
	// 		printf("Chan \n");
	// 	}
	// 	else
	// 	{
	// 		printf("Le \n");
	// 	}
	// }
	
}