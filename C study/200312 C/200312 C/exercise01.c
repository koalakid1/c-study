//#include<stdio.h>
//#include<string.h>
//#include<malloc.h>
//
//struct book
//{
//	char name[30];
//	char company[30];
//	int price;
//};
//
//void GetBook(struct book* s,int i) {
//
//	printf("�������� �Է��ϼ���.");
//	scanf_s(" %s", s[i].name,30);
//	
//	printf("������ ���ǻ縦 �Է��ϼ���.");
//	scanf_s(" %s", s[i].company,30);
//
//	printf("������ ������ �Է��ϼ���.");
//	scanf_s(" %d", &s[i].price);
//
//}
//
//int main() {
//
//	struct book *s;
//
//	int cnt, i;
//
//	FILE* wfp;
//
//	fopen_s(&wfp, "c:\\temp\\books.txt", "w");
//
//	printf("�Է��� ������ : ");
//	scanf_s("%d", &cnt);
//
//	s = (struct student*)malloc(sizeof(struct book) * cnt);
//
//	for (i = 0; i < cnt; i++) {
//
//		GetBook(s, i);
//
//	}
//
//	for (i = 0; i < cnt; i++) {
//
//		fputs(s[i].name, wfp);
//		fprintf(wfp, ",");
//		fputs(s[i].company, wfp);
//		fprintf(wfp, ",%d\n",s[i].price);
//		fprintf(wfp, "");
//
//	}
//
//}