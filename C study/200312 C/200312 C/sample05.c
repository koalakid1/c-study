//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	typedef struct _student
//	{
//
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//
//	}student;
//
//	student s[3];
//
//	for (int i = 0; i < 3; i++) {
//		printf("이름 : ");
//		scanf_s("%s", s[i].name, 9);
//
//		printf("국어 점수 : ");
//		scanf_s("%d", &s[i].kor);
//
//		printf("영어 점수 : ");
//		scanf_s("%d", &s[i].eng);
//		s[i].avg = (s[i].kor + s[i].eng) / 2.0f;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("학생 이름 = = > %s\n", s[i].name);
//		printf("국어 점수 = = > %d\n", s[i].kor);
//		printf("영어 점수 = = > %d\n", s[i].eng);
//		printf("평균 점수 = = > %5.1f\n", s[i].avg);
//	}
//}