//#include<stdio.h>
//#include<string.h>
//
//int main() {
//
//	int a = 10;
//	printf("a의 주소 : %p \n",&a);
//
//	int* p;
//	p = &a;
//	printf("p의 값 : %p \n", p);
//	printf("p가 가리키는 내용 : %d \n", *p);
//	printf("p의 주소 : %p \n", &p);
//
//	int b[3] = { 10,20,30 };
//	printf("b[0]의 주소 : %p or %p \n", b, &b[0]);
//	printf("b[0]가 가리키는 내용 : %d or %d \n", *b, b[0]);
//	printf("b[1]의 주소 : %p or %p \n", b+1, &b[1]);
//	printf("b[1]가 가리키는 내용 : %d or %d \n", *(b+1),b[1]);
//	printf("b[2]의 주소 : %p or %p \n", b+2,&b[2]);
//	printf("b[2]가 가리키는 내용 : %d or %d \n", *(b+2), b[2]);
//
//}