#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = argc;
	i = 0;
	j = 0;
	while (argv[i][j] != '\0')
		j++;
	write(1, argv[i], j);
}
