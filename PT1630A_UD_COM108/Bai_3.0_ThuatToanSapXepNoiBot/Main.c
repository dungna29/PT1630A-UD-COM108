#include <stdio.h>
/// <summary>
/// Thuật toán sắp xêp
/// </summary>
/// <returns></returns>
int main()
{
	int arrNumber[] = {99,66,88,77,11,00};
	//Thuật toán nổi bọt
	printf("Mang chua duoc sap xep: \n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arrNumber[i]);
	}
	//Sử dụng thuật toán nổi bọt đế sắp xếp
	//Mục tiểu bài toán giúp sắp xếp các vị trí của số
	// So sánh theo cặp và tìm ra vị trí bé nhất để lên đầu
	// for (int i = 0; i < 6; i++)
	// {		
	// 	for (int j = i + 1; j < 6; j++)
	// 	{
	// 		int temp = arrNumber[i];
	// 		if (arrNumber[i] > arrNumber[j])//Đảo dấu và xem kết quả
	// 		{				
	// 			arrNumber[i] = arrNumber[j];				
	// 			arrNumber[j] = temp;
	// 		}
	// 	}
	// }

	for (int i = 0; i < 6; i++)
	{
		printf("Lan chay thu: %d \n", i);
		printf("Gia Tri Tai Vi Tri %d \n", arrNumber[i]);
		for (int j = i + 1; j < 6; j++)
		{
			int temp = arrNumber[i];
			printf("Gia Tri cua %d > %d \n", arrNumber[i], arrNumber[j]);
			if (arrNumber[i] > arrNumber[j])
			{
				arrNumber[i] = arrNumber[j];
				arrNumber[j] = temp;
			}			
			for (int i = 0; i < 6; i++)
			{
				printf("%d ", arrNumber[i]);
			}
			printf("\n");
		}
		printf("Sau khi sap xep lan thu %d \n", i);
		for (int i = 0; i < 6; i++)
		{
			printf("%d ", arrNumber[i]);
		}
	}
	printf("\n");
	printf("Mang sau khi duoc sap xep: \n");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arrNumber[i]);
	}
}
