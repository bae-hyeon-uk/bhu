#include<stdio.h>

int rec_func(int n);

int main() {

	int a = 0;
	a = rec_func(10);
	printf("%d\n", a);

	return 0;
}

int rec_func(int n) {    //함수 정의

	if (n == 0) return n;  //n이 0이면  돌아감
	n = n + rec_func(n - 1);
	return n;     //입력한 값 반환
}