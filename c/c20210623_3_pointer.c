#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//포인터변수
	//int a = 10;
	//int *p = &a; //a의주소를 넣을때
	////printf("a:%d %p\n", a, &a);
	////printf("a:%p %d\n", p, *p);

	//char c = '%';
	//char* p2 = &c;
	//printf("c:%d *p2:%c\n",c, *p2);

	//double d = 3.14;
	//double* p3 = &d;
	//printf("d:%f %p\n", d, &d);

	//float f = 5.55;
	//float* p4 = &f;
	//printf("d:%f %p\n",f, *p4);

	//포인트 변수 p를 이용하여 a의 값과 b의 값을 출력.
	/*int a = 10, b = 20;
	int* p = &a;
	printf("%d\n", *p);
	int* p = &b;
	printf("%d\n", *p);*/

	//실습
	/*int a = 10, b = 20, c = 30,base = 100;
	int* p = &a;
	*p += base;
	printf("a:%d\n", *p);
	p = &b;
	*p += base;
	printf("b:%d\n", *p);
	p = &c;
	*p += base;
	printf("c:%d\n", *p);*/

	//배열의 포인터
	/*int arr[3] = { 10,20,30 };
	int *p = arr;*/
	//printf("%d\n", *p);
	//printf("%d\n", *(p+1));
	//printf("%d\n", *(p+2));

	/*for (int i = 0; i < 3; i++) {
		printf("%d %d %d %D\n",*(p+i),*(p+2),*(p+3));
	}*/

	/*for (int i = 0; i < 3; i++) {
		printf("%d\n", *p,*arr);
		p++;*/
		//arr++; 불가
	//}

	/*char python[6] = { 'p','y','t','h','o','n' };
	int* p = python;
	for (int i = 0; i < 6; i++) {
		printf("%d", *p);
	}*/

	//피보나치 수열을 포인터를 이용해서 구하고 출력
	int fibo[20];
	int* p = fibo;
	*p = 0; p++;
	*p = 1; p++;
	for (int i = 2; i < 20; i++) {
		*p = *(p - 2) + *(p - 1);
		p++;
	}
	p = fibo; //처음위치로 포인터 초기화
	for (int i = 0; i < 20; i++) {
		printf("%d ", *p);
		p++;
	}

	return 0;
}v