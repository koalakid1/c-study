//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//
//	FILE* rfp;
//	FILE* wfp;
//	char str1[200], str2[200];
//	int size, i;
//
//	fopen_s(&rfp, "c:\\temp\\in.txt", "r");
//	fopen_s(&wfp, "c:\\temp\\out.txt", "w");
//
//	while (1) {
//
//		fgets(str1, 200, rfp);
//
//		size = strlen(str1);
//
//		for (i = size - 1;i >= 0; i--)
//			str2[size - 1 - i] = str1[i - 1];
//		str2[size - 1] = '\0';
//		fputs(str2, wfp);
//		fputs("\n", wfp);
//
//		if (feof(rfp))
//			break;
//
//
//	}
//
//	fclose(rfp);
//	fclose(wfp);
//
//}