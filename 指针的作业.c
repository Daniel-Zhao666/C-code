#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void main()
{
	char* c[] = {"ENTER", "NEW", "POINT", "FIRST"};
	char* *cp[] = { c + 3, c + 2, c +1, c };
	char* * *cpp = cp;

	printf("%s\n", **++cpp);//ָ�� c + 2 
	printf("%s\n", *--*++cpp + 3);//++ -- �����cpp�е�����
	printf("%s\n", *cpp[-2] + 3);//���� ++ ��cpp��ַ��ָ�� c + 1 ��λ��, * *(cpp - 2) + 3 ��*һ�ζ�ȡ��c+3�Ŀռ䣬
	// **�����Σ� -> �õ� c + 3 �ռ��Ӧ��ŵ��ַ�����Ԫ�ص�λ�ã�char* �� -> FIRST����+3 -> ��ʾ�ַ�����ƶ�3����ӡST
	printf("%s\n", cpp[-1][-1] + 1);//��һ�ε� [cpp-2]�� cpp�ĵ�ַ��δ�ı䣬cpp[-1]��ָ����c+1 -> c+2��
	//cpp[-1][-1] -> c+1(c + 2 - 1) �ҵ���Ӧ���ַ�Ϊ��NEW����cpp[-1][-1] + 1 -> EW����ӡ��
	//cpp[-1][-1] + 1 -> *(*(cpp - 1) -1) + 1
}


//void main()
//{
	//char* a[] = {" work ", " at ", " alibaba "};//�����ַ��������ַ����ĵ�ַ�ŵ������� --> w a a 
	//char* *pa = a;// *pa -> ����Ϊ char*

	//pa++;// pa++ -> char* + 1��ʾ����һ��char*���ַ�
	//printf("%s\n", *pa);

//}


//void main()
//{
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
	//int *ptr1 = (int *)(&aa + 1);//  &aa -> ��ʾȡ��������ά����ĵ�ַ����һ�еĵ�ַ����+1����һ�����͵��ڶ���ĩβ
	// &aa -> ����ָ�� ǿתΪint * ��ptr1 
	//int *ptr2 = (int *)(*(aa + 1));//��Ԫ�ص�ַ��aa��+1���ʾ

	//printf("%d, %d\n", *(ptr1 - 1), *(ptr2 - 1));
//}



//void main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p, %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}


//void main()
//{
	//int a[3][2] = {(0, 1),(2, 3), (4, 5)};//���ű��ʽ���Ա��ʽ���һ��Ԫ��Ϊ׼�������ʼ��Ԫ�ؽ���1 3 5
	//int *p;
	//p = a[0];
  	//printf("%d\n", p[0]);
//}


//void main()
//{

	//int a[4] = {1, 2, 3, 4};
	
	//int *ptr1 = (int*)(&a + 1);//����һ�����鳤�ȣ�ת���������һ��Ԫ��ĩβ��ǿ������ת��Ϊint*���ŵ�ptr1��
	//int *ptr2 = (int*)((int)a + 1);//+ 1 ���ַ���һ���ֽ�
	//printf("%x\n %x", ptr1[-1], *ptr2);// x% -> ��ӡ16����
//}


//struct Test
//{
//	int num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//�ṹ��ָ�����
//
////���ṹ��Test���ͱ�����СΪ20byte
//
//void main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n",(unsigned long)p + 0x1);
//	printf("%p\n",(unsigned int*)p + 0x1);
//}


//void main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d, %d\n", *(a + 1), *(ptr - 1));
//}


//int main()
//{
	


	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));// 48
	//printf("%d\n", sizeof(a[0][0])); //  4
	//printf("%p\n", &a[0][0]);
	//printf("%p\n",a[0] + 1);
	//printf("%d\n", sizeof(a[0]));// a[0]�൱�ڵ�һ����Ϊһά�������������sizeof��arr[0]��->����������������arr[0]�У�
								//�����ڼ����һ�еĴ�С  -> 16

	//printf("%d\n", sizeof(a[0] + 1));// -> 4  a[0]���ڱ��ʽ���У���ʾ��Ԫ�صĵ�ַ,��Ϊ���е�һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*(a[0] + 1)));// 4

	//printf("%d\n", sizeof(a + 1));//aΪ��ά��������������sizeof(a)��Ҳ��&(a)������a����Ԫ�ص�ַ
	    //�Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������һ�У���ʱ��a�ǵ�һ����Ԫ�صĵ�ַ��a + 1 -> �ڶ��еĵ�ַ
	//printf("%d\n", sizeof(*(a + 1)));//����ڶ���Ԫ�ش�С

	//printf("%d\n", sizeof(&a[0] + 1));//  -> �ڶ��е�ַ
	//printf("%d\n", sizeof(*(&a[0] + 1)));//�ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(*a));//a����Ԫ�ص�ַ����һ�еĵ�ַ��*aΪ��һ�У�sizeof(*a)�����һ�д�С
	//printf("%d\n", sizeof(a[3]));//������ʵ�����Ԫ�أ��൱�ڷ���a[0]

	//char *p = "abcde";//����Ԫ�ش���p��
	
	//printf("%d\n", strlen(p));  // 5
	//printf("%d\n", strlen(p + 1));   // 4 
	//printf("%d\n", strlen(*p));      // error
	//printf("%d\n", strlen(p[0]));    // error
	//printf("%d\n", strlen(&p));     // ��� p�Ŀռ��� �ַ��ռ䲻ͬ
	//printf("%d\n", strlen(&p + 1)); // ���
	//printf("%d\n", strlen(&p[0] + 1));// 4


	//printf("%d\n", sizeof(p));//����ָ������Ĵ�С 4/8
	//printf("%d\n", sizeof(p + 1)); // ������һ��Ԫ�صĵ�ַ�����������С
	//printf("%d\n", sizeof(*p));// 1
	//printf("%d\n", sizeof(p[0]));// -> ��ͬ�� *��p + 0��== 'a' 
	//printf("%d\n", sizeof(&p));// 4/8
	//printf("%d\n", sizeof(&p + 1));// 4/8
	//printf("%d\n", sizeof(&p[0] + 1));// 4


	//char arr[] = "abcde";//a ~ \0

	//printf("%d\n", strlen(arr));// 5
	//printf("%d\n", strlen(arr + 0));// 5 
	//printf("%d\n", strlen(*arr));// error
	//printf("%d\n", strlen(arr[1]));// error
	//printf("%d\n", strlen(&arr));// 5
	//printf("%d\n", strlen(&arr + 1));// ���
	//printf("%d\n", strlen(&arr[0] + 1));// 4
	
	//printf("%d\n", sizeof(arr));//����������ռ�ռ�Ĵ�С
	//printf("%d\n", sizeof(arr + 0)); // 4/8
	//printf("%d\n", sizeof(*arr));// 1
	//printf("%d\n", sizeof(arr[1]));// 1
	//printf("%d\n", sizeof(&arr));// 4/8
	//printf("%d\n", sizeof(&arr + 1));
	//printf("%d\n", sizeof(&arr[0] + 1));//��ӡ��ַʱ�������ƽ̨�й�


//	return 0;
//}
