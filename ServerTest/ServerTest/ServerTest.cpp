// ServerTest.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int ADD(int (*callback)(int,int),int a,int b){
	printf("this is callback function\n");
	return (*callback)(a,b);   //此处回调add函数？？？？为什么
}

// 普通函数，
int add(int a, int b) {
	return a + b;
}

int main(void)
{
	printf("%d\n",add(1,2));
	printf("%d\n", ADD(add,1, 2));
	return 0;
}

