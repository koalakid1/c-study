//#include<stdio.h>
//
//void main() {
//
//	FILE* wfp;
//	int hap = 0;
//	int in, i;
//
//	fopen_s(&wfp, "c:\\temp\\data7.txt", "w"); // w�� �����, a�� �߰�
//
//	for (i = 0;i < 5; i++)
//	{
//
//		printf("���� %d : ", i + 1);
//		scanf_s("%d", &in);
//		hap = hap + in;
//
//	}
//
//	fprintf(wfp, "�հ� ==> : %d \n", hap);
//
//	fclose(wfp);
//
//}