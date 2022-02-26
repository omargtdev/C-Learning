/* 
* These are called libraries
* that bring differents new functions or
* variables that We can use
* 
* If you know python, it'd be like imports
* from name_package import something_that_you_want
*
* In C we only can import all the library like this: */
#include <stdio.h>

/*
* This is the main function, that always executes 
* the program that We've compilated
* 
* It's a method of type int, so should return a integer */
int main(){

	/* Each sentence we must terminate it with a semicolon (;) 
	 *
	 * printf("Something");
	 * printf("Other sentence");
	 * anyMethodThatIveCreated();
	 * return somthing;
	 *
	 * */

	/* 
	 * This function is how to prints in console
	 * This function is part of <stdio.h> library so,
	 * We must import first as before */
	printf("Hello world!");

	/* Well, how we've explained before. It's a int method so,
	 * We return a integer, but we should return 1 for false and 0 for true*/
	return 0;
}
