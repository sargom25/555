#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	printf("������� ����� �������");
	scanf("%d", &n);

	if (n == 3) {
		//3.	� ������ ����� ������ N ������ (N � �����). 
		//����� ���������� ������ �����, ��������� � ������ �����.
		int n = 0;
		float m = 0.0;
		printf("������� ���-�� ������: ");
		scanf("%d", &n);
		m = (float)n / 60;
		printf("m%f /n", m);
		printf("m%f /n, n/60");
	}
	else if (n == 4)
	{
		//4.	���� ��� ��������������� ����� a � b.����� �� ������� ��������������.
		unsigned int a = 0, b = 0, c = 0;
		printf("������� ����� a: ");
		scanf("%d", &a);

		printf("������� ����� b: ");
		scanf("%d", &b);
		c = (float)(a + b) / 2;
		printf("c=%f /n", c);
	}

	else if (n == 5)
	{
//5.	�������: ��������� ����������� ����� ��������� � ������ ��������� ���������� �������, 
		//���� �������� ������ � ����������, � ������ ������ ��� ���������, ��� ����������� �������� ������� �� �����
		int v = 0;
		printf("������� ����� ����������");
		scanf("%d", &v);
		if (v = 1); {
			float y = 0.0, e = 0.0;
			float c = 0.0, a = 0.0, b = 0.4, x = 3.5;
			printf("������� �������� e: ");
			scanf("%d", &e);
			y = pow(e, 2 * x) + pow(9.7, e);
			printf("y=%f \n", y);

			c = pow(a, 2) + sqrt(b*x);
			printf("c=%f \n", c);

			a = log(x);
			printf("a=%f \n", a);
			}



	}

}