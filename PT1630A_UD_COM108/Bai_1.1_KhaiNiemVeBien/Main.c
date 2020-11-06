#include <stdio.h>
/// <summary>
/// KHÁI NIỆM VỀ BIẾN
/// 1. Biến dùng để lưu trữ giá trị trong lập trình
/// 2. Biến được lưu vào RAM khi chương trình bắt đầu chạy và sẽ mất đi khi tắt chương trình
/// 3. Biến cần phải có kiểu dữ liệu ví dụ:  int, float,char
/// </summary>
/// <returns></returns>
int _year = 2020;//Khai báo biến toàn cục
int main()
{
	/*
	 * Phần 1: Cách khai báo 1 biến - Tên biến có phân biết chữ hoa và chữ thường, không được đặt giống nhau
	 * <Kiểu dữ liệu> <Tên biến>;//Cách khai báo 1
	 * <Kiểu dữ liệu> <Tên biến 1>,<Tên biến 2>,<Tên biến 3>;//Khai báo nhiều biến có cùng kiểu dữ liệu
	 * <Kiểu dữ liệu> <Tên biến> =(toán tử gán) <giá trị>;
	 */
	//Ví dụ:
	int a;//Khai báo 1 biến a có kiểu dữ liệu là số nguyên và khôg khởi tạo giá trị ban đầu
	a = 1;//Gán giá trị cho biến a
	int c1, c2, c3 = 8, c4, c5 = 9;//Khai báo nhiều biến trên cùng 1 dòng và có cùng kiểu dữ liệu
	int A;//Phân biệt hoa và thường

	/*
	 * Phần 2: Biến cục bộ và biến toàn cục
	 * - Biến cục bộ: là biến được khai báo bên trong hàm
	 * - Biến toàn cục: là biến được khai báo bên ngoài hàm và nên có dấu _ trước tên biến
	 */

	/*
	 * Phần 3: Đặt tên biến 
	 * - Tên biến đặt dễ hiểu và đúng nghĩa
	 * - Tên biến hạn chế đặt bằng tiếng việt khi đi làm về sau
	 * - Không đặt tên biến gây hiểu nhầm.
	 * Gồm 3 cách đặt tên biến với 2 từ trở lên
	 * - C1: normal: sinhvien - thông thường tên biến sẽ đặt kiểu nomarl
	 * - C2: CamelCase: SinhVien
	 * - C3: Under_Score: sinh_Vien
	 */

	/*
	 * Phần 4: Các kiểu dữ liệu trong lập trình
	 * Số nguyên: byte,short,long, int
	 * Số thực: float,double
	 * Ký tự: char
	 * Chuỗi: String
	 * Logic: Boolean trả ra True hoặc False nhưng trong C sẽ trả ra 0 và 1
	 */
}