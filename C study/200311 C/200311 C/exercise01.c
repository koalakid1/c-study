//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//
//int getNumber() {
//	
//	srand((unsigned)time(NULL));
//
//	return rand() % 45 + 1;
//
//}
//
//int* Newlotto(int* lotto) {
//
//	srand((unsigned)time(NULL));
//	int num, checker = 'Y';
//
//	for (int i = 0; i < 6;) {
//
//		int num = getNumber();
//
//		for (int j = 0; j < i; j++) {
//
//			if (lotto[j] == num) {
//
//				checker = 'N';
//				break;
//
//			}
//
//		}
//
//		if (checker == 'N'){
//			
//			checker = 'Y';
//			continue;
//
//		}
//			
//		else {
//
//			lotto[i++] = num;
//
//		}
//
//	}
//
//	return lotto;
//}
//
//int main() {
//	char checker;
//	while (1) {
//		int lotto[6];
//		Newlotto(lotto);
//		printf("\n��÷�� ���� �ζǹ�ȣ. \n");
//		for (int i = 0; i < 6; i++) {
//
//			printf("%d ", lotto[i]);
//
//		}
//		puts("");
//
//		printf("�ζ� �߰� ���� �Ͻðھ��? (Y/N)");
//		checker = getche();
//		if (checker == 'N' || checker == 'n') break;
//	}
//
//}