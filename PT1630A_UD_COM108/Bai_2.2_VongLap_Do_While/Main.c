#include <stdio.h>
/// <summary>
/// Vòng lặp Do While
/// Tương tự như định nghĩa While
/// Đối với Do While thì biểu thức While mà False thì sẽ chạy 1 lần.
/// </summary>
/// <returns></returns>
int main()
{
	//Cách dùng: do + tab
	// do
	// { mở lệnh
	// 	 Thực hành động ít nhất là 1 lần nếu biểu thức False
	// } đóng lệnh
	// while (true); Chỉ chạy khi biểu thức = true

	// Chương trình hỏi bạn gái có thích mình không?
	char c;
	do
	{
		printf("Cau co thich to khong? c = Co - k = ko : ");
		scanf_s("%c", &c);
		getchar();		
	} while (!(c == 'c')); 
	printf("Ok");
	//Cách 1:
	// do
	// {
	// 	printf("Cau co thich to khong? c = Co - k = ko : ");
	// 	scanf_s("%c", &c);
	// 	getchar();
	// 	if (c == 'c')
	// 	{
	// 		printf("Ok");
	// 		break;
	// 	}
	// }
	// while (1);
	
	//Ví dụ 1: Biểu thức  = False
	// do
	// {
	// 	printf("While = False");
	// }
	// while (5 < 3);//(5 < 3) = False

	/*
	 * Bài 1: Viết 1 chương trình cho phép người dùng nhập vào từ 0 đến 100.
	 * Nếu người dùng nhập không đúng yêu cầu thì yêu cầu người dùng nhập lại.
	 *
	 * Bài 2: Viết 1 chương trình cho phép người dùng chỉ nhập vào số chẵn.
	 * Nếu số lẻ thông báo và bắt người dùng nhập lại.
	 *
	 * Bài 3: Viết 1 chương trình cho phép người dùng nhập vào 1 bảng cửu chương kiểu số nguyên
	 * Sau đó in bảng cửu chương người dùng đã chỉ định ra màn hình. Sử dụng While hoặc Do While.
	 */
}