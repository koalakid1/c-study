//#include<stdio.h>
//#include<malloc.h>
//#include<string.h>
//
//int main() {
//
//	char* p[3];
//	char imsi[100];
//	int i, size;
//
//	for (i = 0; i < 3; i++) {
//
//		printf("%d ��° ���ڿ� : ", i + 1);
//		gets_s(imsi, 100);
//
//		size = strlen(imsi);
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);
//
//		strcpy_s(p[i], size + 1, imsi);
//
//	}
//
//	printf("\n -- �Է°� �ݴ�� ��� (������) -- \n");
//	for (i = 2; i >= 0; i--)
//	{
//
//		printf("%d : %s\n", i + 1, *(p + i));
//
//	}
//
//	for (i = 0; i < 3; i++)
//		free(p[i]);
//
//}