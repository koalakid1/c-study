#include<stdio.h>
#include<string.h>

int main() {

	int selfnum[10000] = { 0, };

	for (int i = 1; i <= 10000; i++) {
		int j, self = i;
		while (1) {
			j = i % 10;
			self += j;
			if ((j == i) == 1) {
				break;
			}
			i /= 10;
		}
		if (selfnum[self - 1] == 0) selfnum[self - 1] = 1;
	}
	
	for (int k = 0; k < 10000; k++) {
		if (selfnum[k] == 0) printf("%d", k+1);
	}
}