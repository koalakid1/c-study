//#include<stdio.h>
//
//int main() {
//
//	int menu,a=0,b=0,c=0;
//
//	do {
//		printf("\n �մ� �ֹ��Ͻðڽ��ϱ�? \n");
//		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4> �׸���ų���� ==> ");
//		scanf_s("%d", &menu);
//
//		switch(menu){
//			case 1: printf("ī��󶼸� ������� %d�� ���׽��ϴ�. \n",++a); break;
//			case 2: printf("īǪġ�� ������� %d�� ���׽��ϴ�. \n",++b); break;
//			case 3: printf("�Ƹ޸�ī�� ������� %d�� ���׽��ϴ�. \n",++c); break;
//			case 4: {
//				if (a == b == c == 0) {
//					printf(" �ֹ��Ͻ� Ŀ�ǰ� �����ϴ�. �� �ֹ����ּ���! \n");
//					menu = -1;
//				}
//				else{
//					if (a != 0) printf(" ī��� %d�� ", a);
//					if (b != 0) printf(" īǪġ�� %d�� ", b);
//					if (c != 0) printf(" īǪġ�� %d�� ", c);
//					printf(" �ֹ��ϼ̽��ϴ�! \n");
//					printf(" �ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�! \n");
//				}
//				break;}
//			default: printf("�߸� �ֹ��ϼ̽��ϴ�. \n");
//
//		}
//
//	} while (menu != 4);
//
//}