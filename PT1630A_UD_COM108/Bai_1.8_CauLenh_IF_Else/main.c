#include <stdio.h>
/// <summary>
/// Câu lệnh If Else - Câu điều kiện nếu thì
/// </summary>
/// <returns></returns>
int main()
{
	// Cách dùng:
	// if (true)
	// {
	// 	Khi thỏa mãn điều kiện IF thì sẽ vào đây thực hiện 1 hành động nào đấy
	// }else   Không có biểu thức
	// { Mở lệnh
	// 	Khi ngược lại với điều kiện của IF thì sẽ vào đây thực hiện 1 hành động nào đó
	// } Đóng lệnh
	//Ví dụ:
	float diemC = 4.9;
	if (diemC >= 0 && diemC <= 10)
	{
		if (diemC < 5)
		{
			printf("Chuc mung ban mat 600k");
		}
		else
		{
			printf("Chuc mung ban da qua mon");
		}
	}else
	{
		printf("Diem cua ban khong duoc su dung o VN");
	}
	
}