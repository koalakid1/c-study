//#include<stdio.h>
//#include<malloc.h>
//
//int main()
//{
//
//	typedef struct _student {
//
//		char name[10];
//		int age;
//
//	}student;
//
//	student* s;
//
//	int cnt, i;
//
//	printf("�Է��� �л� �� : ");
//	scanf_s("%d", &cnt);
//
//	s = (student*)malloc(sizeof(student) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//
//		printf("�̸��� ���� �Է� : ");
//		scanf_s("%s %d", s[i].name, 9, &s[i].age);
//
//	}
//
//	for (i = 0; i < cnt; i++)
//		printf("�̸� : %s, ���� : %d \n", s[i].name, s[i].age);
//
//	free(s);
//}