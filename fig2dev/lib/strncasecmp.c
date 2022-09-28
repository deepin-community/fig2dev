/* strncasecmp by Fred Appelman (Fred.Appelman@cv.ruu.nl) */
/* Modified to accept size_t, instead of int, as third argument.
   2017-01-18	Thomas Loimer <thomas.loimer@tuwien.ac.at> */

#include <stddef.h>
#include <ctype.h>

int strncasecmp(const char *s1, const char *s2, size_t n)
{
	char	c1, c2;

	while (n-- > 0)
	{
		/* Check for end of string, if either of the strings
		 * is ended, we can terminate the test
		 */
		if (*s1=='\0' && *s2!='\0') return -1; /* s1 ended premature */
		if (*s1!='\0' && *s2=='\0') return +1; /* s2 ended premature */

		c1 = toupper(*s1++);
		c2 = toupper(*s2++);
		if (c1 < c2) return -1; /* s1 is "smaller" */
		if (c1 > c2) return +1; /* s2 is "smaller" */
	}
	return 0;
}
