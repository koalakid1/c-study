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
//	printf("도서명을 입력하세요.");
//	scanf_s(" %s", s[i].name,30);
//	
//	printf("도서의 출판사를 입력하세요.");
//	scanf_s(" %s", s[i].company,30);
//
//	printf("도서의 가격을 입력하세요.");
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
//	printf("입력할 도서수 : ");
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