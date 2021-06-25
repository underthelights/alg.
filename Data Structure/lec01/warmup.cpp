#include <stdio.h>
#include <stdlib.h>
#define max_num 1001

void main() {
	int data[max_num] = { 0 };
	int sorted_data[max_num] = { 0 };
	int buf, i, cnt = 0;
	while (1) {
		printf("enter a number:");
		scanf("%d", &buf);
		if (buf == 0) break;
		data[cnt] = buf;
		
		for (i = cnt - 1; i >= 0; i--) {
			if (sorted_data[i] > buf)
				sorted_data[i + 1] = sorted_data[i];
			else {
				sorted_data[i + 1] = buf;
				break;
			}
		}
		if (i < 0) sorted_data[0] = buf;
		cnt++;
		//cnt++;

		printf("unsorted : ");
		for (i = 0; i < cnt; i++) printf("%d ", data[i]);
		printf("\n");
		printf("sorted : ");
		for (i = 0; i < cnt; i++) printf("%d ", sorted_data[i]);
		printf("\n");


	}
}
