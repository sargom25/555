#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int n = 0;
	printf("Введите номер задания");
	scanf("%d", &n);

	if (n == 3) {
		//3.	С начала суток прошло N секунд (N — целое). 
		//Найти количество полных минут, прошедших с начала суток.
		int n = 0;
		float m = 0.0;
		printf("введите кол-во секунд: ");
		scanf("%d", &n);
		m = (float)n / 60;
		printf("m%f /n", m);
		printf("m%f /n, n/60");
	}
	else if (n == 4)
	{
		//4.	Даны два неотрицательных числа a и b.Найти их среднее геометрическое.
		unsigned int a = 0, b = 0, c = 0;
		printf("введите число a: ");
		scanf("%d", &a);

		printf("введите число b: ");
		scanf("%d", &b);
		c = (float)(a + b) / 2;
		printf("c=%f /n", c);
	}

	else if (n == 5)
	{
//5.	Задание: составить структурную схему алгоритма и проект программы вычисления функции, 
		//один параметр ввести с клавиатуры, а другой задать как константу, все вычисляемые значения вывести на экран
		int v = 0;
		printf("введите номер подзадания");
		scanf("%d", &v);
		if (v = 1); {
			float y = 0.0, e = 0.0;
			float c = 0.0, a = 0.0, b = 0.4, x = 3.5;
			printf("введите значение e: ");
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