#include <stdio.h>

//����ָ�������Ӧ��
//void menu()
//{
//	printf("############################\n");
//	printf("######1.Add        2.Sub  ##\n");
//	printf("######3.Mul        4.Div  ##\n");
//	printf("############ 0.exit #########\n");
//	printf("############################\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int(*pfarr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("������");
//		scanf_s("%d", &input);
//		if (input > 0 && input <= 4)
//		{
//			printf("���������������� ");
//			scanf_s("%d%d", &a, &b);
//			int ret = pfarr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳��ɹ���");
//		}
//		else
//		{
//			printf("����ʧ�ܣ�����������\n");
//		}
//	} while (input);
//
//	return 0;
//
//}

//ð������qsort ��Ӧ��
//#include <stdlib.h>     /* qsort */
//
//int values[] = { 40, 10, 100, 90, 20, 25, 7 };
//
//int compare(const void * a, const void * b)
//{
//	return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//	int n;
//	qsort(values, 6, sizeof(int), compare);
//	for (n = 0; n<6; n++)
//		printf("%d ", values[n]);
//	return 0;
//}


//my_qsort��ʵ��

//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp(void*e1, void*e2)//�ȽϺ���
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//int cmp_stu(void*e1, void*e2)
//{
//	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
//}
//void Swap(char*buft1, char*buft2, int width)//��������
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *buft1;
//		*buft1 = *buft2;
//		*buft2 = tmp;
//		buft1++;
//		buft2++;
//	}
//}
//
//void my_qsort(void*base, int sz, int width, int(*cmp)(void*n1, void*n2))//ð������������
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp(((char*)base +j*width ),((char*)base+(j+1)*width)) > 0)
//			{
//				Swap(((char*)base + j*width), ((char*)base + (j + 1)*width),width);//��������ʵ�ֽ���
//			}
//		}
//	}
//	
//}
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int width = sizeof(arr[0])
//	my_qsort(arr, sz, sizeof(arr[0]), cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test2()
//{
//	struct Stu s[3] = { { "wjm", 20 }, { "zc", 23}, { "mjq", 22 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	my_qsort(s, sz, sizeof(s[0]), cmp_stu);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i]);
//	}
//}
//int main()
//{
//	test1();
//	test2();
//	return 0;
//}

//ָ��ϰ��

//int main()
//{
//	char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char**cp[] = { c + 3, c + 2, c + 1, c };
//	char***cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *--*++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//��ӡ*��

//int main()
//{
//	int line = 0;
//	scanf_s("%d", &line);
//	int i = 0;
//	//��ӡ�ո�
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line-i-1; j++)
//		{
//			printf(" ");
//		}//��ӡ*
//	
//		int z = 0;
//		for (z = 0; z<2*(i)+1; z++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°��
//	int a = 0;
//	for (a = 0; a < line - 1; a++)
//	{
//		int b = 0;
//		for (b = 0; b <a+1 ; b++)
//		{
//			printf(" ");
//		}
//		int c = 0;
//		for (c = 0; c < 2*(line-1-a)-1 ; c++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//my_strlen��ʵ��
//#include<assert.h>
//
//int my_strlen(char*str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//my_strcpy��ʵ��
//#include<assert.h>
//char* my_strcpy(char*dest, char*scr)
//{
//	assert(dest!=NULL);
//	assert(scr != NULL);
//	char*ret = dest;
//	while (*scr != 0)
//	{
//		*dest++ = *scr++;
//	}
//	*dest = *scr;
//	return ret;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//my_strcat��ʵ��
//#include<assert.h>
//char* my_strcat(char*dest, char*scr)
//{
//		assert(dest!=NULL);
//		assert(scr != NULL);
//		char*ret = dest;
//		while (*dest != 0)
//		{
//			dest++;
//		}
//		while (*dest++=*scr++)
//		{
//			;
//		}
//		return ret;
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "ghik";
//		printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}

//my_strncpy��ʵ��
//#include<assert.h>
//char*my_strncpy(char*dest, char*scr, int num)
//{
//	assert(dest&&scr);
//	int count= num;
//	char*ret = dest;
//	while (count && (*dest++ = *scr++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (--count)
//		{
//			*dest = '\0';
//		}
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	printf("%s\n", my_strncpy(arr1, arr2, 2));
//	return 0;
//}

//strtok��ʵ��
//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	char arr[20] = "abc@196,cfg";
//	char*p = "@,";
//	char buf[1023] = { 0 };
//	strcpy_s(buf, arr);
//	char*ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//�ַ�ת������tolower/toupper
//#include <ctype.h>
////int main()
////{
////	char ch = toupper('a');
////	//char ret=toupper(ch);
////	putchar(ch);
////	return 0;
////}
//
//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while ()
//	return 0;
//}

//my_memcpy��ʵ��
//
//void* my_memmove(void*dest,const void*src, size_t num)
//{
//	int i = 0;
//	void* ret = dest;
//	if ((char*)dest < (char*)src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};
//	int arr2[5] = { 0 };
//	my_memmove(arr1+2, arr1, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//memset--�ڴ�����
#include<string.h>
int main()
{
	int arr[10] = { 0 };
	memset(arr, 1, 10);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}