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
//		printf("학생의 학번을 입력 ==> ");
//		gets_s(stu_id, 100);
//		fputs(stu_id, wfp);
//		fprintf(wfp, ",");
//		printf("학생의 이름을 입력 ==> ");
//		gets_s(stu_name, 100);
//		fputs(stu_name, wfp);
//		fprintf(wfp, ",");
//		printf("학생의 전공을 입력 ==> ");
//		gets_s(stu_major, 100);
//		fputs(stu_major, wfp);
//		fprintf(wfp, "\n");
//		fclose(wfp);
//
//		char checker;
//		printf("학생 정보를 추가하시겠습니까?(Y/N)");
//		checker = getchar();
//		checker = getchar();
//		if (checker == 'N' || checker == 'n') break;
//		else fopen_s(&wfp, "c:\\temp\\student.txt", "a");
//
//	}
//}