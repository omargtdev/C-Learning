#include <stdio.h>

int main(){
	/* 
	 * The variables are those who keep a value
	 * in the memory. Each one has a memory address. They're have 
	 * their names (identifiers), in which we access to memory addresses them 
	 * with it and get their value.
	 *
	 * To define a variable, we need to declare it first. */
	 int myFirstVariable;

	 /* 
		* We can write a name as we want following these instruccions:
		* - Don't use keywors of the language
		* - Can only starts with $ or _, if you wish. 		
		* - Don't let spaces e.g.
		*   int my Variable Name = 20;
		* - You can use case sensitive or type to define uppercase and lowercase */

	 /* Where int is the type of the variable, in this case integer and
		* myFirstVariable is the name. We can declare more types 
		* of variables, not just int. */
	 char mySecondVariable;
	 float myFirstFloat;

	 // See more about data types in data-types.c

	 /* Then, we need or should give it a value (depends of data type).
		* That is called initialize the variable or initialization */
	 myFirstVariable = 5;
	 mySecondVariable = 'A';
	 myFirstFloat = 2.5;

	 /* Here, we call to variable's name and follwed by equal (=) assign it
		* the value. */
	 /* We also define a variable declaring and initializing it in the same
		* line of code */
	 int anotherVariable = 10;

	 /* So, For print them we need to pass to printf function with next
		* format:
		* %d -> Integers
		* %f -> Float point
		* %c -> Characters
		* and much more but for now it's ok these.
	 */

	/* We can also define that our variables being constants 
	 * A constant is a variable can't change its value, we define
	 * it with "const" keyword
	 */
	 const int myConst = 25;

	 // This would give an error
	 /* myConst = 30; */

	 
	 printf("myFirstVariable: %d\n", myFirstVariable);
	 printf("anotherVariable: %d\n", anotherVariable);
	 printf("mySecondVariable: %c\n", mySecondVariable);
	 printf("myFirstFloat: %f", myFirstFloat);

	 printf("Constant: %d", myConst);

	return 0;	
}
