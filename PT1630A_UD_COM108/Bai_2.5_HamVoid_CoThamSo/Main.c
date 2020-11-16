#include <stdio.h>
/// <summary>
/// Hàm không trả về - void
/// Không co số truyền vào
/// </summary>
/// <returns></returns>

// (<Tham số>) có thể là những kiểu dữ liệu khác nhau và có thể khai báo số lượng phụ thuộc vào bài toán
// <Kiểu hàm> <Tên hàm>(<Tham số>){
// 	Body code
// }

void tinhTongBonSo(int so1,int so2,int so3,int so4)
{
	printf("%d + %d + %d + %d = %d", so1, so2, so3, so4, so1 + so2 + so3 + so4);
}
void chucNang()
{
	tinhTongBonSo(9, 8, 7, 8);
}
void tempFc(long l,int b,int c,char e,float f, double d)
{
	
}
int main()
{
	//Chú ý: Khi sử dụng hàm có tham số phải truyền đúng kiểu dữ liệu và vị trí từ trái qua phải
	tinhTongBonSo(5,6,0,0);

}