#include<stdio.h>
/** main- prints the alphabet in lowercase, followed by a new line.
 * Return: always 0(success)
 */
int main(void)
{
	for(int x = 'A'; x <= 'z'; x++)
    {
        x = tolower(x);
        putchar(x);
    }
	return (0);
}
