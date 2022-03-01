// We'll use some functions of this library
// apart from printf
#include <stdio.h>
// This include other utils functions as we'll see later.
#include <string.h>

int main(){

	char fullName[30];
	int age;

	/* We can use scanf() for read input from user
	 * and store that answer in a variable 
	 */

	printf("How old are you?\n");
	/* We need to pass the format and the address of the 
	 * variable. The variable address memory (in execution time)
	 * we can specify it by prefixing & to variable name
	 */
	scanf("%d", &age);
	printf("You have %d years old. Great!\n", age);

	/*-------------------------------------------------------------*/

	/* We have also fgets() for to do the same, but we have to pass
	 * it three arguments, variable name (to store), maximum number of chars
	 * to be read, in this case it'd be the lenght of "name" and the stream
	 * that it'd be this file (stdin)
	 *
	 * The difference between scanf and fgets is that fgets read spaces and
	 * scanf can't read it
	 *
	 * fgets always ends the variable content with a break line \n so,
	 * We set the last char of fullName to null (\0)
	 *
	 * Before to do that, we need to use setlen() for know the lenght chars
	 * of fullName. setlen is a function from <string.h> library.
	 */
	printf("What's your name and lastname?\n");

	fgets(fullName, 30, stdin);
	// We access to the last index and set its value in null so as doesn't
	// skip a line
	fullName[strlen(fullName) - 1] = '\0';

	printf("Hi %s. Nice to meet you!\n", fullName);


	return 0;
}



