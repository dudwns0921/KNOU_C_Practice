#include <stdio.h>
#define PRINT_SPACE printf(" ")
#define PRINT_STAR printf("* \n")

void main() {
	for (int i = 0; i < 5; i++) {
		if (i ==  0) {
			PRINT_STAR;
		}
		else {
			for (int j = 0; j < i; j++) {
				PRINT_SPACE;
			}
			PRINT_STAR;
		}
	}
	for (int i = 5; -1 < i; i--) {
		if (i == 0) {
			PRINT_STAR;
		}
		else {
			for (int j = 0; j < i; j++) {
				PRINT_SPACE;
			}
			PRINT_STAR;
		}
	}
}