/*#include<stdio.h>
#include<math.h>
int main() {
	int n,d1,d2,d3,d4;
	printf_s("请输入一个四位的整数：");
	scanf_s("%d", &n);
	d1 = n / 1000;
	d2 = n / 100 % 10;
	d3 = n / 10 % 10;
	d4 = n % 10;
	if (d1 == d4 && d2 == d3)
		printf_s("该数是回文数\n");
	else
		printf_s("该数不是回文数\n");
}

#include<stdio.h>
int main(void) {
	char ch;
	printf_s("Please enter a character.\n");
	scanf_s("%c", &ch,2);
	printf_s("The code for %c is %d.\n", ch, ch);
	return 0;
}


#include<stdio.h>
#include<inttypes.h>
int main() {
	int32_t me32;
	me32 = 45933945;
	printf_s("First, assume int32_t is int: ");
	printf_s("Next, let's not make any assumptions.\n");
	printf_s("Instead, use a\"macro\" from inttypes.h");
	printf_s("me32=%"PRId32"\n", me32);

	return 0;
}
*/

/*#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40] = {0};

	printf_s("Hi!What's your first name?\n");
	scanf_s("%s", name,40);
	printf_s("%s,what's your weight in pounds?\n", name);
	scanf_s("%f ", &weight);
	size = sizeof(name);
	letters = strlen(name);
	volume = weight / DENSITY;
	printf_s("Well, %s ,your volume is %2.2f cubic feet.\n", &letters);
	printf_s("Also, your first name has %d letters, \n", letters);
	printf_s("and we have %d bytes to store it. \n", size);

	return 0;
}
*/

/*#include <stdio.h>
int main()
{
	int a = 10;
	while (a < 20)
	{
		printf_s("the value of a: %d\n", a);
		a++;
	}
	return 0;
}*/

//简易计算器
/*#include<stdio.h>
int main()
{
	int num1, num2;
	char op;
	scanf_s("%d%c%d", &num1,sizeof(num1) & op, sizeof(op), &num2, sizeof(num2));
	switch (op)
	{
			case '+':
			printf_s("% d",  num1 + num2);
			break;
			case '-':
			printf_s("% d", num1 -num2);
			break;
			case '*':
			printf_s("% d", num1 * num2);
			break;
			case '/':
			printf_s("商为% d，余数为%d", num1/num2,num1%num2);
			break;
			default:
			printf_s("运算符错误");
			break;
	}
	return 0;
}*/

/*#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
double factorial(unsigned int i)
{
	if (i <= 1)
	{
		return 1;
	}
	return i * factorial(i - 1);
}
int  main()
{
	int i = 15;
	printf("%d 的阶乘为 %f\n", i, factorial(i));
	return 0;
}*/

//一个while函数的小使用实例
/*#include<stdio.h>
int main() {
	int i = 1, p = 1;
	while (i < 5)
	{
		p = p * i;
		++i;
	}
	printf("%d\n", p);
}*/

/*#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int i = 1, sum = 0;
	do
	{
		sum = sum + 1;
		i++;
	} while (i <= 5);
	printf("%d\n", sum);
}*/
//一个指针使用的实例
/*#include<stdio.h>
#define _CRE_SECURE_NO_WARNINGS
int main()
{
	int var = 10;
	int* p=&var;
	printf("var变量的地址：%p\n", p);
	if (p)
		printf("是非空指针");

	return 0;
}
*/

//冒泡算法实现
/*
#include <stdio.h>
#define _CRE_SECURE_NO_WARNINGS
void bubble_sort(int arr[], int len) {
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
		for (j = 0; j < len - 1 - i; j++)
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
}
int main() {
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = (int)sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	return 0;
}*/


//C programming examples 5
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float firstn, secondn, sum;
	printf("Enter two numbers(divide them by the blank):");
    scanf("%lf%lf",&firstn, &secondn);
	sum = firstn * secondn;
	printf("%.2lf", sum);

	return 0;
}
*/
//三个数相加，取四舍五入
/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float d = a + b + c;
	int y = round(d);
	printf("%g %d", a + b + c, y);
	return 0;
}
*/

//将总秒数转化为时分秒的格式显示
/*#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, h, m, s;
	scanf("%d", &a);
	h = a / 3600;
	m = (a - 3600 * h) / 60;
	s = a - 3600 * h - 60 * m;
	printf("%d:%.2d:%.2d\n", h, m, s);
	return 0;
}*/

//题目要求
/*计算银行存款本息。输入存款金额money（单位：元），存期years，年利率rate，计算到期存款本息（保留2位小数）。计算公式如下：
sum = money(1 + rate)years

提示：求x的y次幂可以使用数学函数pow(x, y)，其中x, y均为double型, 在程序开始加上：#include<math.h>

输入:存款金额，存期，年利率。均为浮点数，且用逗号分隔
输出：存款本息（保留2位小数)*/
/*#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
#include<Math.h>
int main()
{
	float money, years, rate, p, sum;
	scanf("%f,%f,%f", &money, &years, &rate);
	sum = money * pow(1 + rate, years);
	printf("%.2lf", sum);



	return 0;
}*/

//使用递归求自然数前n项和
/*#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
int addNumber(int n);
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Sum=%d", addNumber(num));


	return 0;
}

int addNumber(int n)
{
	if (n != 0)
		return n + addNumber(n - 1);
	else
		return n;
}*/

//输出九九乘法口诀表
/*#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
int addNumber(int n);
int main()
{
	int i = 0; 
	int j = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("% dx % d = % d\t", j, i, i * j);
		}
		printf("\n");
	}

	return 0;
}*/

//使用递归方法写的阶乘
/*#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
long int multiplynumbers(int n);
int main()
{
	int n;
	printf("输入一个整数: ");
	scanf("%d", &n);
	printf("%d! = %ld", n, multiplynumbers(n));

	return 0;
}
//以下是一个递归函数的写法
long int multiplynumbers(int n)
{
	if (n > 1)
		return n * multiplynumbers(n - 1);
	else
		return 1;

}*/

//格式化一个主对角线为1，其余元素均为0的矩阵
/*#define _CRT_SRCURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0, j = 0;
	int array[5][5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][j] = 0;
		}
		array[i][i] = 1;

	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d", array[i][j]);
		}
		printf("\n");
	}

	return 0;
}*/

//题目：编程求以下级数前n项之和：
//s = 1 - 1 / 3 + 1 / 5 - 1 / 7 + 1 / 9 - 1 / 11 + 1 / 13 - 1 / 15 + .....
//输入：一个正整数n
//输出：前n项和的值
/*#include<stdio.h>
#include<math.h>
double sum(int n)
{
	double s=0.0;
	for (int i = 1; i <= n; i++)
	{
		s += 1 / (2.0 * i - 1) * pow(-1, i+1);
	}
	return s;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%lf", sum(n));



	return 0;
}*/

//输出一个范围内带7和7的倍数
/*#include<stdio.h>
#include<math.h>

int main()
{
	int a, b,m,q,array[2000], count=0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		q = i;
		while (q)
		{
			q = q / 10;
			count++;
		}
		if (i % 7 == 0)
		{
			printf("%d是7的倍数\n", i);
		}
		if(1)
		{
			m = i;
			for (int j = 0; j <= count; j++)
			{
				array[j] = m % 10;
				m = m / 10;
				if(array[j]==7)
				{
					printf("%d是带7的数\n", i);
					break;
				}
			}
		}
	}

	return 0;
}*/

//第八周作业第四题
/*#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, i, count, n1, p, q, n2, n3, t, flag = 0;
	scanf("%d%d", &a, &b);
	for (i = a; i <= b; i++)
	{
		count = 0;
		q = i;
		while(q)
		{
			q = q / 10;
			count++;
		}
		//更简单的判断位数的方法
		//for (count = 0; i != 0; count++)
		//{
		//	i /= 10;
		//}
		t = count;
		n2 =(int) pow(10, t );
		n3 = (i*i) % n2;
		if (flag==0&&n3 == i)
		{
			printf("%d", i);
			flag = 1;
		}
		else if(n3==i)
		{
			printf(" %d", i);
		}

	}

	return 0;
}*/


#include<stdio.h>
#include<math.h>
int main()
{
	int m, n, count = 0;  //定义区间上下限以及初始化一个计数器
	scanf("%d%d", &m, &n);//获取定义区间
	int i , j , k;
	
	for (i=m; i <= n-2; i++)
	{
		for (j=i+1; j <= n - 1; j++)
		{
			for (k=j+1; k <= n; k++)
			{
				if (i * i + j * j == k * k)
				{
					count++;
					break;
				}
			}
		}
	}
	printf("%d", count);

	return 0;
}
