#include <stdlib.h>
#include <stdio.h>

int printf(const char *format, ...)
{
	/* Our code goes here
	 * we can use write for printing
	 **/
	write(1, "Congratutions, you won the Jackpot!", 37);
}
