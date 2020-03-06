//#include<stdio.h>
//
//int main() {
//
//	char str[100];
//	char ch;
//
//	int i, k;
//	int star;
//
//	printf("숫자를 여러개 입력:");
//	scanf_s("%s", str, 100);
//
//	i = 0;
//	ch = str[i];
//	while (ch != 0) {
//		star = (int)ch - 48;
//
//		for (k = 0; k < star;k++) {
//			printf("*");
//		}
//		puts("");
//		i += 1;
//		ch = str[i];
//	}
//
//}