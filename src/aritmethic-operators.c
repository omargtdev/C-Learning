#include <stdio.h>

int main(){

	/* We have differents arithmetic operators in
	 * C. If you know other programming language, these
	 * will be familiar to you.
	 *
	 *  + (addition)
	 *  - (subtraction)
	 *  * (multiplication)
	 *  / (division)
	 *  % (modulus)
	 *  ++ (increment)
	 *  -- (decrement)
	 */

	int x = 10;
	int y = 8;

	int additon = x + y;
	int subtraction = x - y;
	int multiplication = x * y;
	/* In this case, it should give us only the
	 * int part (1 in this case), because:
	 * 10 / 8 -> 1 + 2(residue)*/ int divisionInt = x / y;
	/* If we want to get decimal number
	 * of the (float point) division operation,
	 * we need to use at least one decimal, either
	 * in the dividen or divisor. (Store in a float or
	 * double datatype) 
	 */
	float divisionFloat = (x * 1.0) / y;
	double divisionDouble	= (double) x / y;
	/* In this case x and y are ints so, we can add a multiplication
	 * to one of the two for that convert it in decimal
	 *
	 * It'd stay like this : (10 * 1.0) / 8 -> 10.0 / 8
	 *
	 * We can also convert the ints in doubles.
	 */

	//Modulus give us the residue of an division
	int modulus = x % y;


	/* Decrements and Increments only increase or decrease a value
	 * in 1. In this case, x is 10 so, If we use x++, X will be 11
	 */
	x++;
	y--;

	printf("Addition: %d", additon);
	printf("Substraction: %d", subtraction);
	printf("Multiplication: %d", multiplication);
	printf("DivisionInt: %d", divisionInt);
	printf("DivisionFloat: %.2f", divisionFloat);
	printf("DivisionDouble: %.2lf", divisionDouble);
	printf("Modulus (residue): %d", modulus);
	printf("x++: %d", x);
	printf("y--: %d", y);

	return 0;
}
