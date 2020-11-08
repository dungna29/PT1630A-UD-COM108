#include <stdio.h>
/// <summary>
/// TOÁN TỬ SO SÁNH
/// Sử dụng khi cần so sánh 2 biểu thức với nhau và sẽ trả ra kết quả True hoặc False trong lập trình C thì 1 và 0
/// > < 
/// >= (Lớn hơn hoặc bằng) 
/// <= (Lớn hơn hoặc bằng)
/// == (So sánh bằng) 
/// != (So sánh khác) 
/// </summary>
/// <returns></returns>
int main()
{
	printf("5 == 5 KQ = %d \n", 5 == 5);//True 1
	printf("5 != 5 KQ = %d \n", 5 != 5);//False 0
	printf("5 > 5 KQ = %d \n", 5 > 5);//False 0
	printf("5 >= 5 KQ = %d \n", 5 >= 5);//True 1
	printf("5 <= 5 KQ = %d \n", 5 <= 5);//True 1
	printf("5 <= 7 KQ = %d \n", 5 <= 7);//True 1


}