#include <stdio.h>
/// <summary>
/// Hàm không trả về - void
/// Không tham số truyền vào
/// </summary>
/// <returns></returns>

// 1. Tên hàm phải là tên có nghĩa
// 2. Tên hàm nên là động từ đứng trước sau đó đến danh từ
// Ví dụ tên hàm: tinhTong, layDsSinhVien, getListStudent
// Tham số có thể truyền nhiều tham số phụ thuộc vào bài toán
// <Kiểu hàm> <Tên hàm>(<Tham số>){
// 	Body code
// }


/// <summary>
/// Giải thích hàm này có tác dụng gì
/// Các tham số nó là cái gì khi gọi
/// [dungna29]
/// </summary>

int a = 0, b = 0, input = 0;
void nhapHaiSo()
{
	printf("Moi ban nhap so thu 1 :");
	scanf_s("%d", &a);
	printf("Moi ban nhap so thu 2 :");
	scanf_s("%d", &b);
}
void menu()
{
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
		nhapHaiSo();
		printf("%d + %d = %d", a, b, a + b);
		break;
	case 2:
		nhapHaiSo();
		printf("%d - %d = %d", a, b, a - b);
		break;

	case 3:
		nhapHaiSo();
		printf("%d x %d = %d", a, b, a * b);
		break;
	case 4:
		nhapHaiSo();
		printf("%d / %d = %d", a, b, a / b);
		break;
	default:
		printf("Chuc nang ban chon khong ton tai");
		break;
	}
}

int main()
{
	//Gọi hàm:
	// 1. Cần biết tên hàm
	// 2. Kết thúc 1 hàm luôn là ();
	menu();

	// Lợi ích khi sử dụng hàm
	// 1. Tính tái sử dụng - Khi sửa thì những nơi sử dụng nó sẽ sửa cùng theo
	// 2. Dễ bảo trì code
	// 3. Mỗi 1 hàm sẽ thực hiện 1 nhiệm vụ nào đó hoặc có thể nói có chức năng riêng phục vụ cho mục đích riêng
}


