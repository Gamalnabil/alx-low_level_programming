#include "main.h"

/**
 * rev_string - this function reverse the string
 * @s: this is the value of the string
*/
void rev_string(char *s)
{
	int len = _strlen(s);
	int start = 0;
	int end = len - 1;
	char temp = s[start];

	while (start < end)
	{
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
