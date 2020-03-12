//#include<stdio.h>
//
//int main()
//{
//
//	typedef struct _student {
//
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//
//	}student;
//
//	student s;
//	student* p;
//
//	p = &s;
//
//	printf("이름 입력 : ");
//	scanf_s("%s", p->name, 10);
//	
//	printf("국어 점수 : ");
//	scanf_s("%d", &p->kor);
//	
//	printf("영어 점수 : ");
//	scanf_s("%d", &p->eng);
//
//	p->avg = (p->kor + p->eng) / 2.0f;
//
//	printf("학생 이름 = = > %s\n", p->name);
//	printf("국어 점수 = = > %d\n", p->kor);
//	printf("영어 점수 = = > %d\n", p->eng);
//	printf("평균 점수 = = > %5.1f\n", p->avg);
//}