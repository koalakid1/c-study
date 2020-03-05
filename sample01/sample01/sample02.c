//#include<stdio.h>
//
//int main() {
//
//	int a, b;
//	int k;
//
//	printf("첫번째 계산할 값을 입력하세요 ==>");
//	scanf_s("%d", &a);
//	
//	printf("두번째 계산할 값을 입력하세요 ==>");
//	scanf_s("%d", &b);
//
//	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==>");
//	scanf_s("%d", &k);
//	
//	if (k == 1) {
//		printf("%d+%d = %d \n", a, b, a + b);
//	}
//	else if (k == 2) {
//		printf("%d-%d = %d \n", a, b, a - b);
//	}
//	else if (k == 3) {
//		printf("%d*%d = %d \n", a, b, a * b);
//	}
//	else if (k == 4) {
//		printf("%d/%d = %d \n", a, b, a / b);
//	
//	int a, b;
//	char k;
//
//	printf("첫번째 계산할 값을 입력하세요 ==>");
//	scanf_s("%d", &a);
//
//	printf("두번째 계산할 값을 입력하세요 ==>");
//	scanf_s("%d", &b);
//
//	printf("+ - * / ==>");
//	scanf_s(" %c", &k, 1);
//
//	if (k == '+') {
//		printf("%d+%d = %d \n", a, b, a + b);
//	}
//	else if (k == '-') {
//		printf("%d-%d = %d \n", a, b, a - b);
//	}
//	else if (k == '*') {
//		printf("%d*%d = %d \n", a, b, a * b);
//	}
//	else if (k == '/') {
//		if (b != 0) {
//			printf("%d/%d = %d \n", a, b, a / b);
//		}
//		else {
//			printf("0으로 나누면 안됩니다. \n");
//		}
//	}
//}
