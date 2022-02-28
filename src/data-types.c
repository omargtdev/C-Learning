#include <stdio.h>
/* To can use booleans (true and false), we need to
 * import this library */
#include <stdbool.h>

int main(){

	/* There are differents data types in c, where
	 * we can stock them in variables */

	//--------- Char (character)
	/* Char stock a one caracter (1 byte), where it can be
	 * the specific character like 'C' or 'a'. If you realized,
	 * you need to use single quotes '' and not double quotes ""
	 *
	 * We can also put a decimal number represented for the character what
	 * we want (in size of byte 0 to 255), BUT for default the size 
	 * goes from -128 to +127. To -128 to -1 is for extended ASCII. (Windows-1252)*/

	char myChar1 = 'C';
	char myChar2 = 67; // C in decimal format

	/* If you want to use the range from 0 to 255, adding "unsigned" keyword
	 * before the variable's type */
	unsigned char myChar3 = 67;
	/*unsigned char myChar3 = -189; // Negative (its value is C too) */

	/* If you try to put a bigger value than limit, it'd cause a overflow
	 * char: 
	 *  +128 = -128
	 *  -129 = +128
	 * unsigned char:
	 *  +256 = 0
	 *  -1 = +256 
	 *  256 = 0 */

	// Consult https://en.wikipedia.org/wiki/ASCII for more info about ASCII
	// codes characters

	//--------- Arrays of chars (strings)
	/* It's like strings, if you know other language like python, java, js you know what
	 * I'm talking about. In this case, we need to use double quotes for it */
	char myArrayOfChars[] = "Hi, I'm an array of chars";
	/* 
	 * We can define the size too. In this case, It'd be 15 bytes (15 characters)
	 * SPACE counts too as character */
	char myString[15] = "I only have 14";

	//--------- Floats and doubles
	/* Floats and doubles are for storage real numbers (3.14, 2.56) with
	 * coma 'floating' based in IEE 754 standard to store them
	 * More info about IEE 754 : https://en.wikipedia.org/wiki/IEEE_754
	 *
	 * Floats are single precision so, they have 32 bits of precision instead
	 * doubles have 64 bits of precision (double precision), hence its name
	 *
	 * Floats only have 6 digits of precision (float point part):*/
	float myFloat1 = 6.2365; // Its value, it'd be 6.236500
	float myFloat2 = 8.123562323;
	/* The second float takes only first 6 digits precise as We said before
	 * it'd be 8.123563 (rounded) */

	// Doubles instead takes the first 15 digits (with precision)
	double myDouble1 = 6.342378501235475;
	double myDouble2 = 6.342378501235475263;

	//--------- Booleans (bool)
	/* We can use booleans too, but only importing the <stdbool.h> library
	 * A boolean stores one of the two following values: 
	 * 
	 * true -> 1
	 * false -> 0
	 *
	*/
	bool myBool = true; // it'd be 1

	//--------- Integers
	/* We can store integer numbers with int. When We define an int, for default
	 * is a long int, I mean we store 4 bytes. */
	long int myLongInt1 = 2147483647; // 4 bytes (-2,147,483,648 to +2,147,483,647)
	int myInt1 = -2147483648; // Here the same -> 4 bytes (-2,147,483,648 to +2,147,483,647)

	// If we want store only 2 bytes, we use short keyword before int.
	short int myShortInt1 = 32767; // 2 bytes (-32,768 to +32,767)

	// If we want store more of 4 bytes, we use long long int (8 bytes)
	long long int myLongLongInt1 = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion)

	/* We can also add "unsigned" to represent only positive numbers, but
	 * the range of the negative part is added to positive like in chars */
	unsigned long int myLongInt2 = 4294967295; // 4 bytes (0 to +4,294,967,295)
	unsigned int myInt2 = 0; // Same -> 4 bytes (0 to +4,294,967,295)

	unsigned short int myShortInt2 = 65535; // 2 bytes (0 to +65,535)	
	
	unsigned long long int myLongLongInt2 = 18446744073709551615;	// 8 bytes (0 to +18 quintillion)

	/* Here applies overflow too, e.g:
	 * The max value of short int is +32,767, If we store +32,768 value it'd 
	 * be -32,768 because +32,768 surpasses the limit of size (2 bytes), and so
	 * with the others */

	//--------- Formats
	/* Formats to show or print data types
	 * %d -> Format numbers: integers, chars
	 * 			 and booleans (Remember that boolean is an integer: 0 or 1)
	 * %c -> chars
	 * %f -> floating pointers: doubles, floats
	 * 			 Extra -> We can format the float pointer like these:
	 * 			 %0.8f or %.8f -> Show eight characteres of the float pointer
	 * 			 %0.15f or %.15f -> Show fifteen characteres of the float pointer
	 * 			 If you only assign %f, for default it'll be %.6f
	 * %s -> Array of chars (String)
	 * %u -> unsigned int
	 * %ld -> long int
	 * %lu -> unsigned long int
	 * %lld -> long long int
	 * %llu -> unsigned long long int
	*/

	printf("Char1: %c\n", myChar1);
	printf("Char2: %c\n", myChar2);
	printf("Char3: %c\n", myChar3);
	printf("ArrayOfChars1: %s\n", myArrayOfChars);
	printf("ArrayOfChars2: %s\n", myString);
	printf("Float1: %f\n", myFloat1);
	printf("Float2: %.8f\n", myFloat2);
	printf("Double1: %.15lf\n", myDouble1);
	printf("Double2: %.18lf\n", myDouble2);
	printf("Bool: %d\n", myBool);
	printf("LongInt1: %ld\n", myLongInt1);
	printf("Int1: %d\n", myInt1);
	printf("ShortInt1: %d\n", myShortInt1);
	printf("LongLongInt1: %lld\n", myLongLongInt1);
	printf("LongInt2: %lu\n", myLongInt2);
	printf("Int2: %u\n", myInt2);
	printf("ShortInt2: %u\n", myShortInt2);
	printf("LongLongInt2: %llu\n", myLongLongInt2);

	return 0;
}
