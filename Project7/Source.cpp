#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void task1()
{
	int n;
	do
	{
		printf("������� �����:");
		scanf_s("%d", &n);
	} while (n != 0 && n <= 5 && n >= -5);
}
void task2()
{
	int N, M, sum = 0;
	printf("������� �����:");
	scanf_s("%d", &N);
	printf("������� �������:");
	scanf_s("%d", &M);
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			i *= i;
		sum += i;
	}
	printf("�����: %d\n", sum);
}
void task3()
{
	int A, B, s1, s2, S, mes;
	printf("�������� ������ ���������: ");
	scanf_s("%d", &A);
	printf("�������� ������ ����������: ");
	scanf_s("%d", &S);
	printf("�������� ������ ��������: ");
	scanf_s("%d", &B);
	s2 = 0;
	s1 = 12 * A;
	for (size_t i = 1; i <= 12; i++)
	{
		B = (float)B * 1.03;
		s2 = s2 + B;
	}
	printf("��������� �� 12 �������=%d\n", s1);
	printf("������� �� 12 �������=%d\n", s2);
	mes = (s1 + S) / s2;
	printf("����� �������:%d\n", mes);
}
void task4()
{
	int s, m, k, n, a;

	printf("�������� �����: ");
	scanf_s("%d", &a);
	printf("���������� �����: ");
	scanf_s("%d", &m);
	s = 0;
	n = m;
	for (size_t i = 1; i <= m; i++)
	{
		k = n % 10;
		printf("k=%d; ", k);
		n = a % 10;
		printf("n=%d; \n", n);
		s = s + k;

	}
	printf("����� ��������� ����� �����:%d\n", s);

}
void task5()
{
	int x1, x2, x3, x4, i;
	printf("������� �����:");
	scanf_s("%d", &i);
	for (size_t i = 100; i <= 9999; i++)
	{
		x4 = i % 10;
		x3 = i / 10;
		x3 = x3 % 10;
		x2 = i / 100;
		x2 = x2 % 10;
		x1 = i / 1000;
		x1 = x1 % 10;
	}
	if (pow(x1, 3) + pow(x2, 3) + pow(x3, 3) + pow(x4, 3))
	{
		printf("����� �������� ������ ����������;\n����� :%d\n", i);
	}
}
void task6()
{
	int x1, x2, x3, x4, i;
	printf("������� �����:");
	scanf_s("%d", &i);
	for (i = 100; i <= 9999; i++)
	{
		x4 = i % 10;
		x3 = i / 10;
		x3 = x3 % 10;
		x2 = i / 100;
		x2 = x2 % 10;
		x1 = i / 1000;
		x1 = x1 % 10;
	}
	if (i % 7 == 0 && (x1 + x2 + x3) % 7 == 0)
	{
		printf("�����: %d\n", i);
	}
	else
	{
		printf("����� �� ������������� �������\n");
	}
}
void task7()
{

}
int main()
{
	setlocale(LC_ALL, "");
	int task = 0;
	int flag;
	int a;
	do
	{
		printf("������� ����� �������: ");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
		{
			task1();
		}
		break;
		case 2:
		{
			task2();
		}
		break;
		case 3:
		{
			task3();
		}
		break;
		case 4:
		{
			task4();
		}
		break;
		case 5:
		{
			task5();
		}
		break;
		case 6:
		{
			task6();
		}
		break;
		default:
			break;

		}
		printf("������ ����������? 1/0 \n");
		scanf_s("%d", &flag);
	} while (flag == 1);
	system("pause");
}