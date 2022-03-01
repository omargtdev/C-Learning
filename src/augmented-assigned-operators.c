#include <stdio.h>

int main(){
	
	/* The easiest form to operate a value is with
	 * the augmented assigned operators */

	int x = 20;
	
	/* If we want to increase x in 10, we need to
	 * use addition operation like this:
	 *
	 * x = x + 10
	 *
	 * but, this form is better.
	 */
	x += 10; // This is equal to x = x + 10;

	// And we can do the same with others arithmetic operations
	x -= 10; // x = x - 10
	x *= 10; // x = x * 10
	x /= 10; // x = x / 10
	x %= 10; // x = x % 10

	printf("x: %d", x);

	return 0;
}

