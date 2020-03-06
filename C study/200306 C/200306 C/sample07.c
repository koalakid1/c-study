//#include<stdio.h>
//
//int main() {
//
//	int menu,a=0,b=0,c=0;
//
//	do {
//		printf("\n 손님 주문하시겠습니까? \n");
//		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4> 그만시킬래요 ==> ");
//		scanf_s("%d", &menu);
//
//		switch(menu){
//			case 1: printf("카페라떼를 현재까지 %d잔 시켰습니다. \n",++a); break;
//			case 2: printf("카푸치노 현재까지 %d잔 시켰습니다. \n",++b); break;
//			case 3: printf("아메리카노 현재까지 %d잔 시켰습니다. \n",++c); break;
//			case 4: {
//				if (a == b == c == 0) {
//					printf(" 주문하신 커피가 없습니다. 꼭 주문해주세요! \n");
//					menu = -1;
//				}
//				else{
//					if (a != 0) printf(" 카페라떼 %d잔 ", a);
//					if (b != 0) printf(" 카푸치노 %d잔 ", b);
//					if (c != 0) printf(" 카푸치노 %d잔 ", c);
//					printf(" 주문하셨습니다! \n");
//					printf(" 주문하신 커피 준비하겠습니다! \n");
//				}
//				break;}
//			default: printf("잘못 주문하셨습니다. \n");
//
//		}
//
//	} while (menu != 4);
//
//}