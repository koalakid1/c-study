#include<stdio.h>

int main(int c, char* path[]) {

	char str[200];
	FILE* rfp;

	fopen_s(&rfp, path[1], "r");
	for (;;) {

		fgets(str, 200, rfp);
		if (feof(rfp)) {

			break;

		}
		printf("%s", str);

	}
	fclose(rfp);

	return 0;
}