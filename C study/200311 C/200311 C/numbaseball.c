//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
//
//int ans[10], user_ans[10], count = 0, count2 = 1, strike = 0, ball = 0;
//
//
//void start() {
//	int checker, checker2 = 0, checker3 = 0;
//	srand((unsigned)time(NULL));
//	while (1) {
//		if (count == 0) { 
//			ans[count] = (rand() % 9) + 1; 
//		}
//		else {
//			checker = (rand() % 10);
//			for (int i = 0; i < count; i++) {
//				if (ans[i] == checker) {
//					checker2 = 1;
//					break;
//				}
//			}
//			if (checker2 == 1) {
//				checker2 = 0;
//				continue;
//			}
//			ans[count] = checker;
//		}
//		count += 1;
//		printf(" \n���� %d�ڸ� ���ھ߱��� �غ�Ǿ����ϴ�. ���ھ߱��� �ڸ����� �ø��ðڽ��ϱ�? (�ִ� 10�ڸ�, �ø��� �����Ÿ� 1 �Է�) \n", count);
//		scanf_s("%d", &checker3);
//		if (checker3 == 1 || count == 10) {
//			printf("\n%d�ڸ� ���ھ߱��� ���۵Ǿ����ϴ�.\n", count); break;
//		}
//	}
//}
//
//
//void one_play() {
//	int checker, checker2 = 0, checker3 = 0;
//	printf("\n���ھ߱� %dȸ�� ����! \n", count2);
//	printf("\n%d�ڸ� ���ڸ� ���ʷ� �Է��ϼ���.(�� ó�� ���ڴ� ������ 1~9������ �����Դϴ�.)\n", count);
//	int i = 0;
//	while (i < count) {
//		printf("\n%d��° ����", i + 1);
//		scanf_s("%d", &checker);
//		for (int j = 0; j < i; j++) {
//			if (user_ans[j] == checker) {
//				checker2 = 1;
//				break;
//			}
//		}
//		if (checker2 == 1) {
//
//			checker2 = 0;
//			printf("�Է��ߴ� ���ڿ� �ٸ� ���ڸ� �Է��ϼ���!\n");
//			continue;
//		}
//		user_ans[i] = checker;
//		for (int k = 0; k < count; k++) {
//			if (user_ans[i] == ans[k]) {
//				if (i == k) {
//					strike += 1;
//					break;
//				}
//				else {
//					ball += 1;
//					break;
//				}
//			}
//		}
//		i++;
//		if (i == count) {
//			count2 += 1;
//			printf("%d ��Ʈ����ũ, %d ���Դϴ�! \n", strike, ball);
//			strike = 0, ball = 0;
//			break;
//		}
//	}
//}
//
//void playing() {
//	int checker = 0;
//	while (1) {
//		one_play();
//		printf("\n������ ���߽ðڽ��ϱ�? (����Ÿ� 0 �Է�) \n");
//		scanf_s("%d", &checker);
//		if (checker == 0) {
//			printf("�����̶�� �����ϴ� %d�ڸ� ���ڸ� ���ʷ� �Է��ϼ���.(�� ó�� ���ڴ� ������ 1~9������ �����Դϴ�.)\n", count);
//			for (int i = 0; i < count; i++) {
//				printf("\n%d��° ���� \n", i + 1);
//				scanf_s("%d", &user_ans[i]);
//			}
//			if (strcmp(user_ans, ans) == 0) {
//				printf("\n�����Դϴ�!!!!!! %dȸ ���� ������ ���߼̽��ϴ�~ \n", count2 - 1);
//				break;
//			}
//			else {
//				printf("\n��! Ʋ�Ƚ��ϴ�!! \n");
//				break;
//			}
//		}
//	}
//}
//
//
//int main() {
//	int coin = 0;
//	while (1) {
//		printf("���� ������ �ݵ�� ���ڸ� ���ڸ� �Է��ϼ���! \n\n");
//		start();
//		playing();
//		printf("�ѹ� �� �Ͻðڽ��ϱ�? (���� �������� 1) \n");
//		scanf_s("%d", &coin);
//		if (coin == 1) {
//			printf("������ �����մϴ�.");
//			break;
//		}
//		count = 0, count2 = 1;
//	}
//}