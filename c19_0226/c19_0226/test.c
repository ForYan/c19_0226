#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

//第四个：编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :1999 2299
//输出例子 : 7
int PrintBit(int num1, int num2){
	int count = 0;
	int str1[12] = { 0 };
	int str2[12] = { 0 };
	int i = 0;
	for (; i <12;++i){
		str1[i]  = num1 % 2;
		num1 = num1 / 2;
		str2[i] = num2 % 2;
		num2 = num2 / 2;
	}
	for (int n = 0; n < 12;++n){
		if (str1[n] != str2[n]){
			++count;
		}
	}
	return count;
}
int main(){
	int count = PrintBit(2299,2299);
	printf("count=%d\n", count);
	system("pause");
	return 0;
}

//第三个：输出一个整数的每一位。12345->1234->123->12->1
//void PrintNum(int num){
//	if (num > 9){
//		PrintNum(num / 10);
//	}
//	printf("%d ", num%10);
//}
//int main(){
//	int num = 12345;
//	PrintNum(num);
//	system("pause");
//	return 0;
//}

//第二个：获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。
//先获取二进制序列
//再进行输出
//例如：15%2=7……… 1
//void Print(int num){
//	int str[8] = { 0 };
//	int i = 0;
//	for (i = 0; i <=7 ; ++i){
//		int ret = num % 2;
//		str[i] = ret;
//		num = num / 2;
//	}
//	//偶数序列
//	for (int i = 0; i < 8; i += 2){
//		printf("%d ", str[i]);
//	}
//	printf("\n");
//    //奇数序列
//	for (i = 1; i < 8; i += 2){
//		printf("%d ", str[i]);
//	}
//	
//}
//int main(){
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	Print(num);
//	system("pause");
//	return 0;
//}
//第一个：写一个函数返回参数二进制中 1 的个数
//比如： 15       0000 1111       4 个 1
//int CountOne(unsigned int num){
//	//15%2==7…… 1；
//	//7%2==3…… 1；
//	//3%2==1…… 1；
//	//1%2==0…… 1；
//	int count = 0;
//	while (num > 0){		
//		int tem = num / 2;
//		if (num%2==1){
//			++count;
//		}
//		num = tem;
//	}
//	return count;
//}
//int main(){
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	int count = CountOne(num);
//	printf("count=%d\n", count);
//	system("pause");
//	return 0;
//}