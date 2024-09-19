#include <stdio.h>
int main(void)
{
	int x = 37970;
	int x1 = 37970 / 10000;
	int x1_1 = 37970 % 10000;
	int x2 = x1_1 / 5000;
	int x2_1 = x1_1 % 5000;
	int x3 = x2_1 / 1000;
	int x3_1 = x2_1 % 1000;
	int x4 = x3_1 / 100;
	int x4_1 = x3_1 % 100;
	int x5 = x4_1 / 10;
	printf("37970원은\n만원짜리 %d개\n오천원짜리 %d개\n천원짜리 %d개\n백원짜리 %d개\n십원짜리 %d개로 구성됩니다.", x1, x2, x3, x4, x5);
	return 0;
}