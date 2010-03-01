#include <stdio.h>
int main(void) {
	unsigned long count_null = 0;
	int byte;
	while ((byte=getchar()) != EOF) {
		if (byte == 0) {
			count_null++;
		} else {
			if (count_null > 0)
				fprintf(stderr, "writing %lu nulls\n", count_null);
			while (count_null != 0) {
				putchar(0);
				count_null--;
			}
			putchar(byte);
		}
	}
	
	return 0;
}
