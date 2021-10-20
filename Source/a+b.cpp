#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main(){
	int a, b = 0;
	printf("输入两个整数，程序会尝试将这两个整数相加输出结果。\n请输入第一个整数：");
	cin>>a;
	printf("\n输入第二个整数：");
	cin>>b;
	printf("%d + %d = %d!", a, b, a+b);
	
	getch(); 
	return 114514;
}
