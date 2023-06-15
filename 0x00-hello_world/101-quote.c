#include<unistd.h>

/**
 * main - Entry point
 *
 * Description: A programe that prints using write in unistd lib
 *		write(int fd,const void *buf,size_t count)
 *
 * Return: 1 (not success)
*/

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1,quote,59);
	return (1);
}
