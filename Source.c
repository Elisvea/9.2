#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	setlocale(LC_ALL, "Rus");

	int ld, n;

	printf("������� �����, ����� ������ ����� ���������� ��������� ����� � �����:");
	scanf_s("%d", &n);
	ld = n % 10;
	int count = 0;
	while (n > 0) {
		if (n % 10 == ld) {
			count++;
		}
		n = n / 10;
	}
	printf("\n ����:%d", count -1 );
}