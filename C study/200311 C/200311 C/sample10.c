//#include<stdio.h>
//
//void main() {
//
//	FILE* wfp;
//	int hap = 0;
//	int in, i;
//
//	fopen_s(&wfp, "c:\\temp\\data7.txt", "w"); // w는 덮어쓰기, a는 추가
//
//	for (i = 0;i < 5; i++)
//	{
//
//		printf("숫자 %d : ", i + 1);
//		scanf_s("%d", &in);
//		hap = hap + in;
//
//	}
//
//	fprintf(wfp, "합계 ==> : %d \n", hap);
//
//	fclose(wfp);
//
//}