//#include <stdio.h>
//
//int main()
//{
//	typedef struct _person {
//           char name[10];
//           union _id {
//                char phone[15];
//                char jumin[15];
//
//		} id;
//
//	} person;
//
//      person p1;
//
//      printf("이름 --> ");
//      scanf_s("%s", p1.name, 10);
//      printf("전화번호 또는 주민번호 --> ");
//      scanf_s("%s", p1.id.jumin, 15);
//
//      printf("\n--- 구조체/공용체 혼합 활용 ---\n");
//      printf("이름 = = > %s\n", p1.name);
//      printf("전화번호/주민번호 = = > %s\n", p1.id.phone);
//}
