#include <stdio.h>
#include <stdlib.h>

int 	main() {

	long 	A = 5;
	char	B = 'C';
	short 	C = 10;
	float	D = 0.5f;
	int 	E = 2;

	printf("(1)C + 3 = %d integer\n", C + 3);
	printf("(2)B + 1 = %c character\n", B + 1);
	printf("(3)C + B = %d integer\n", C + B);
	printf("(4)D + A = %.1f float\n", D + A);
	printf("((5) 3 * E + 2 + B) == 3 * 2 + 2 + 67 = %d integer\n", 3 * E + 2 + B);
	printf("((6) 2 * E + (A + 10) / C) == 2 * 2 + (5 + 10) / 67 = %ld integer\n", 2 * E + (A + 10) / C);
	printf("(7) 2 * E + (A + 10.0) == 2 * 2 + (5 * 10.0) = %.1f float\n", 2 * E + (A + 10.0));

	return 0;
}