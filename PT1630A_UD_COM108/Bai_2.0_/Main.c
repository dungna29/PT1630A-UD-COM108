#include <stdio.h>
/// <summary>
/// Switch Case
/// Dùng để tạo ra menu trong thời điểm mới học
/// Bên trong Switch Case sẽ có các trường hợp và không có điều kiện
/// </summary>
/// <returns></returns>
int main()
{
	//Cách sử dụng: sw + tab
	// switch (input)//input là giá trị truyền vào có thể là số nguyên, string, ký tự...
	// {
	// case 1://Trường 1 tương ứng với kiểu số nguyên
	// 		Nếu thỏa mãn với trường hợp 1 thì sẽ vào đây thực hiện 1 hành động
	// 	break;//Sau khi thực hiện hành động trong Case thì sẽ thoát ra ngoài
	// NẾU KHÔNG SỬ DỤNG BREAK SẼ KO CÓ LỖI VÀ NÓ SẼ CHẠY TIẾP XUỐNG CASE TIẾP THEO CHO ĐẾN KHI GẶP BREAK
	// case 2:
	//
	// 	break;
	// default:
	//	Khi không thỏa mãn tất cả cá trược hợp trong Switch Case sẽ vào đây
	// 	break;
	// }
	// Viết 1 chương trình có 2 chức năng Phép cộng 2 số và Phép Trừ 2 số

	// Bước 1: Khai báo biến
	int a = 0, b = 0, input = 0;
	// Bước 2: Hiển thị thông in ra màn hình
	printf("********* Chuong Trinh May Tinh POLY ********* \n");
	printf("********* 1. Phep cong 2 so          ********* \n");
	printf("********* 2. Phep tru 2 so           ********* \n");
	// Bước 3: Nhập thông tin từ người dùng chọn
	printf("Moi ban chon chuc nang tren: ");
	scanf_s("%d", &input);

	// Bước 4: Thực hiện chức năng của người dùng yêu cầu
	//--------------------Cách 2: Dùng Switch
	switch (input)
	{
	case 1:
		printf("Moi ban nhap so thu 1 :");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2 :");
		scanf_s("%d", &b);
		printf("%d + %d = %d", a, b, a + b);
		break;
	case 2:
		printf("Moi ban nhap so thu 1 :");
		scanf_s("%d", &a);
		printf("Moi ban nhap so thu 2 :");
		scanf_s("%d", &b);
		printf("%d - %d = %d", a, b, a - b);
		break;
	default:
		printf("Chuc nang ban chon khong ton tai");
		break;
	}

	//--------------------Cách 1: Dùng If Else đã được học
	// if (input == 1)
	// {
	// 	printf("Moi ban nhap so thu 1 :");
	// 	scanf_s("%d", &a);
	// 	printf("Moi ban nhap so thu 2 :");
	// 	scanf_s("%d", &b);
	// 	printf("%d + %d = %d", a, b, a + b);//Thực hiền in ra màn hình chức năng người dùng yêu cầu
	// }else if(input == 2)
	// {
	// 	printf("Moi ban nhap so thu 1 :");
	// 	scanf_s("%d", &a);
	// 	printf("Moi ban nhap so thu 2 :");
	// 	scanf_s("%d", &b);
	// 	printf("%d - %d = %d", a, b, a - b);
	// }else
	// {
	// 	printf("Chuc nang khong ton tai");
	// }


	/*
	 * Bài tập: Viết 1 chương trình sử dụng Switch Case để tạo ra menu sau:
	 * 1. Xếp loại học lực khi nhập điểm GPA vào - Tùy biến các loại xếp hạng
	 * 2. Cộng 4 số lại với nhau.
	 * 3. Kiểm tra số vào là số chẵn hay lẻ.
	 * 4. Kiểm tra số nguyên âm và nguyên dương.
	 * 5. Kiểm tra điểm thi để biết học lại hay không?
	 */
}