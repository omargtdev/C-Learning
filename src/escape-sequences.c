#include <stdio.h>

int main(){

	 /* We use escape sequences for specific use,
	  * forgive the redundancy. For example, we
	  * want to skip a line or create new line, we can
	  * realize with \n */
	 printf("This is a line\nThis is another line");

	 // Or we want to use tabulator (horizontal) with \t
	 printf("This a part of\t the sentence");

	 // Or also we can escape the quotes simples or doubles
	 printf("This is my phrase: \"Never stop learning\"\nWell isn't mine");

	 /* In itself, escape sequences are bytes in format hexadecimal.
		* Well everything here are bits and bytes so, we can represent them 
		* like 0x0A, for a new line (\n) in this case, as escape sequences.
		*
		* Check https://en.wikipedia.org/wiki/Escape_sequences_in_C for more info
		* and its table. 
	 */

	return 0;
}
