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
	printf("37970����\n����¥�� %d��\n��õ��¥�� %d��\nõ��¥�� %d��\n���¥�� %d��\n�ʿ�¥�� %d���� �����˴ϴ�.", x1, x2, x3, x4, x5);
	return 0;
}