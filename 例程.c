#define _CRT_SECURE_NO_WARNINGS 1

 //static int g_val = 123;//全局变量
 static int Add(int x, int y)//static可修饰函数，以限制函数的作用域
{

	int z = x + y;
	return z;
}