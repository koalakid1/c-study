//#include<stdio.h>
//#include<malloc.h>
//
//int main() {
//
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������? ");
//	scanf_s("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//	
//	for (i = 0;i < cnt;i++) {
//
//
//		printf("%d ��° ���� : ", i + 1);
//		scanf_s("%d", (p + i));
//
//	}
//
//	for (i = 0; i < cnt; i++)
//		hap = hap + *(p + i);
//
//	printf("�Է� ���� �� ==> %d \n", hap);
//
//	free(p);
//
//}