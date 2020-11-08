#include <stdio.h>
/// <summary>
/// TOÁN TỬ LOGIC - DÙNG ĐỂ NỐI CÁC BIỂU THỨC LẠI VỚI NHAU
/// <biểu thức 1> && <biểu thức 2> - Yêu cầu cả 2 hoặc tất cả biểu thức phải TRUE 1 thì mới trả ra True
/// <biểu thức 1> || <biểu thức 2> - Yêu cầu ít nhất 1 biểu thức là True thì sẽ trả ra True
/// !<biểu thức 1> Toán tử phủ định
/// </summary>
/// <returns></returns>
int main()
{
	//Nhập môn lập trình C để qua môn
	/*
	 * 1. Nghỉ <=3
	 * 2. TK >=5
	 * 3. Online >=7.5
	 * 4. Thi >=5
	 */
	float nghi = 4, gpaC = 5.0, online = 7.5, thi = 5;
	//int kq = (nghi <= 3) && (gpaC >= 5) && (online >= 7.5) && (thi >= 5);
	//int kq = (nghi <= 3) || (gpaC >= 5) ||(online >= 7.5) || (thi >= 5);
	//int kq = !(nghi <= 3) && (gpaC >= 5) && (online >= 7.5) && (thi >= 5);
	int kq = !((nghi <= 3) && (gpaC >= 5) && (online >= 7.5) && (thi >= 5));
	printf("Nghi: %f,TB: %f,Online: %f,Thi: %f = KQ %d",nghi,gpaC,online,thi,kq);
}