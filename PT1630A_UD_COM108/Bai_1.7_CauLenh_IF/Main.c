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
	/*
	 * Bài 1: Viết 1 chương trình cho phép người dùng nhập 1 số nguyên
	 * - Kết quả: In ra màn hính số nguyên đố là số chẵn hay số lẻ
	 *
	 * Bài 2: Viết 1 chương trình cho phép người dùng nhập 1 số nguyên
	 * - Kết quả: In ra số đó là số âm hay số dương
	 *
	 * Bài 3: Viết 1 chương trình nhập điểm C nhập vào 4 đầu điểm
	 * 1. Số buổi nghỉ
	 * 2. Điểm thi
	 * 3. Điểm tổng kết
	 * 4. Điểm Online
	 *
	 * Kết quả: Nếu số buổi nghỉ <=3 và Điểm thi >=5 Điểm TK >=5 Điểm Onl >=7.5
	 * thì sẽ in ra màn hình chúc mừng quan môn
	 */
}