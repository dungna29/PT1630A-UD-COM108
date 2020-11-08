#include <stdio.h>
/// <summary>
/// CÂU LỆNH IF
/// Hay còn gọi là câu điều kiện
/// </summary>
/// <returns></returns>
int main()
{
	//Cách sử dụng: if + tab
	// if (true) - (true) nó là 1 biểu thức hoặc nhiều biểu thức bên trong
	// { Đóng lệnh
	// 				Thực thi 1 hành động nào đó nếu biểu thức của IF phải đúng
	// } Mở lệnh

	//Ví dụ: Điểm thi C
	float diemC = 4.9;
	if (diemC >= 5)
	{
		printf("Chuc mung ban da qua mon");
	}

	if (diemC < 5)
	{
		printf("Chuc mung ban da mat 600K");
	}
}