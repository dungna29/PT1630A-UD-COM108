#include <stdio.h>
/// <summary>
/// NHẬP DỮ LIỆU TỪ BÀN PHÍM
/// scanf_s("%d",<biến để hứng>);- Xác định muốn hứng giá trị có kiểu dữ liệu gì?
/// Vẫn có tương tự như printf
/// %d, %s, %f, %c, %lf
/// </summary>
/// <returns></returns>
int main()
{
	//Viết 1 chương trình tính tuổi của người dùng khi nhập vào năm sinh
	//Bước 1: 
	int namNay = 2020, namSinh = 0;
	//Bước 2: Mời người dùng nhập vào
	printf("Moi ban nhap nam sinh vao day: ");
	scanf_s("%d", &namSinh);//Gán giá trị cho biến sau khi người dùng bấm Enter
	//Bước 3:
	printf("Tuoi cua ban la: %d", namNay - namSinh);
}