#include <stdio.h>
/// <summary>
/// HÀM TRẢ VỀ
/// </summary>
/// <returns></returns>

// Công thức hàm trả về:
// <Kiểu dữ liệu hàm> : (kiểu dữ liệu nguyên thủy) int, float, double, long, char... Ngoài ra nó có thể là các kiểu dữ liệu dạng danh sách
// <Tên hàm>: <động từ> + <tên hàm> phải đặt tên hàm động từ viết thường tên hàm viết kiểu CamelCase
// <tham số>: Giống như hàm void
// return: Trả về giá trị đúng với kiểu dữ liệu của hàm
// <Kiểu dữ liệu hàm> <Tên hàm>(<tham số>){
// 	//Body code
// 	return <giá trị đúng với kiểu dữ liệu của hàm>;
// }

int tinhTong(int a, int b)
{
	return a + b;
}

int tinhTong2(int a, int b)
{
	int ketqua = a + b;
	return ketqua;
}

int getYear()
{
	int year = 2020;
	return year;
}
char getChar()
{
	return 'c';
}
float getDiem()
{
	return 5.6;
}

int main()
{
	//Ctrl + Space và tìm tên hàm
	tinhTong(5, 5);//Không in ra gì vì nó chỉ là 1 giá trị số nguyên
	printf("%d \n", tinhTong(5, 5));
	//Nếu hàm trả về là kiểu số thì có thể tính toán được với hàm đó
	printf("%d", tinhTong(5, 5) +10);
	return 0;
}
