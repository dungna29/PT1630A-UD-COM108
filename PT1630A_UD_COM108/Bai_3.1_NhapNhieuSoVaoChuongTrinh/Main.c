#include <stdio.h>
int main()
{
	// Viết 1 chương trình cho phép nhập nhiều số nguyên vào
	// Sau khi nhập xong in tất cả số nguyên đã nhập ra.
	// Gợi ý : Mảng
	//15 phút 10 điểm LAB 1 và 2 cho 2 bạn nhanh nhất
	int input = 0, arrNumber[1000];
	printf("Moi ban nhap so luong so ban muon: ");
	scanf_s("%d", &input);
	for (int i = 0; i < input; i++)
	{
		printf("Moi ban nhap so thu [%d]: ", i);
		scanf_s("%d", &arrNumber[i]);
	}
	printf("Nhung so ban vua nhap vao la:\n");
	for (int i = 0; i < input; i++)
	{		
		printf(" [%d] ", arrNumber[i]);
		
	}
}