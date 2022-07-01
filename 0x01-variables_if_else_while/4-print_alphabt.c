# include<studio.h>
/**
<<<<<<< HEAD
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/

=======
 * main - Entry point
 *
 * Description: Alphabet except some
 *
 * Return: Always 0 (Success)
 */
>>>>>>> d31e54f3d5d02e811b2b0cbbaf3c50f663c96cd9
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
}
putchar('\n');

return (0);
}

