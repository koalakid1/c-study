//#include<stdio.h>
//
//void main()
//{
//	char stu_id[100], stu_name[100], stu_major[100];
//	FILE* wfp;
//
//	fopen_s(&wfp, "c:\\temp\\student.txt", "w");
//	
//	while (1) {
//
//		printf("�л��� �й��� �Է� ==> ");
//		gets_s(stu_id, 100);
//		fputs(stu_id, wfp);
//		fprintf(wfp, ",");
//		printf("�л��� �̸��� �Է� ==> ");
//		gets_s(stu_name, 100);
//		fputs(stu_name, wfp);
//		fprintf(wfp, ",");
//		printf("�л��� ������ �Է� ==> ");
//		gets_s(stu_major, 100);
//		fputs(stu_major, wfp);
//		fprintf(wfp, "\n");
//		fclose(wfp);
//
//		char checker;
//		printf("�л� ������ �߰��Ͻðڽ��ϱ�?(Y/N)");
//		checker = getchar();
//		checker = getchar();
//		if (checker == 'N' || checker == 'n') break;
//		else fopen_s(&wfp, "c:\\temp\\student.txt", "a");
//
//	}
//}