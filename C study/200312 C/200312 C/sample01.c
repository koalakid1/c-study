﻿//#include<stdio.h>
//#include<malloc.h>
//
//int main() {
//
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf("입력할 개수는 ? ");
//	scanf_s("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//
//		printf("%d 번째 숫자 : ", i + 1);
//		scanf_s("%d", p + i);
//
//	}
//
//	for (i = 0; i < cnt; i++)
//		hap = hap + *(p + i);
//
//	printf("입력 숫자의 합 ==> %d \n", hap);
//
//	free(p);
//
//}