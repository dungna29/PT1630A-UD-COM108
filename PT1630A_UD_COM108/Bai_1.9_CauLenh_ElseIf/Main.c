#include <stdio.h>
/// <summary>
/// Câu lệnh Eles If
/// Dùng để mở rộng điều kiện ra nhiều trường hợp
/// </summary>
/// <returns></returns>
int main()
{
	//Cách dùng:
	// if (true)
	// {
	// 		Thỏa mãn điều kiện của IF thì vào đây thực hiện 1 hành động nào đó
	// }else if (true)
	// {
	// 		Nếu If không thỏa mãn thì tiếp tục só sánh biểu thức và Else If phải thỏa mãn thì vào đây thực hiện 1 hành động
	// }else if (true)
	// {
	// 		Tương tự nếu không thoảng mãn trường hợp trên
	// }else if (true)
	// {
	// 	
	// }else
	// {
	// 	 Khi mà tất cả các trường hợp trên không thoản mãn
	// }

	//Ví dụ1: Chỉ được phép dùng If Else
	//Xếp hạng điểm như sau:
	/*
	 * 1. DiemC >= 9 - Di choi thoi
	 * 2. DiemC >=8 - Giỏi
	 * 3. DiemC >=6 - Khá
	 * 4. DiemC >=5 - Trung bình
	 * 5. DiemC >=3 - Nên học lại C 
	 * 6. DiemC >=0 và <=3 thì đổi nghề
	 */
	float DiemC = 7.5;
	if (DiemC >= 9)
	{
		printf("Di choi di");
	}else if (DiemC >= 8)
	{
		printf("Gioi");
	}else if (DiemC >= 6)
	{
		printf("kha");
	}else if (DiemC >= 5)
	{
		printf("TB");
	}else if (DiemC >= 3)
	{
		printf("Hoc Lai");
	}else
	{
		printf("Chuyen nganh");
	}










	// if (DiemC >= 9)
	// {
	// 	printf("Di choi di");
	// }else
	// {
	// 	if (DiemC >= 8)
	// 	{
	// 		printf("Gioi");
	// 	}else
	// 	{
	//
	// 		if (DiemC >= 8)
	// 		{
	// 			printf("Gioi");
	// 		}
	// 		else
	// 		{
	//
	// 		}
	// 	}
	// }

}