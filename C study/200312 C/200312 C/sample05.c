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
//		printf("�̸� : ");
//		scanf_s("%s", s[i].name, 9);
//
//		printf("���� ���� : ");
//		scanf_s("%d", &s[i].kor);
//
//		printf("���� ���� : ");
//		scanf_s("%d", &s[i].eng);
//		s[i].avg = (s[i].kor + s[i].eng) / 2.0f;
//	}
//
//	for (int i = 0; i < 3; i++) {
//		printf("�л� �̸� = = > %s\n", s[i].name);
//		printf("���� ���� = = > %d\n", s[i].kor);
//		printf("���� ���� = = > %d\n", s[i].eng);
//		printf("��� ���� = = > %5.1f\n", s[i].avg);
//	}
//}