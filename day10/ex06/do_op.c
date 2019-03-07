#include <stdlib.h>
#include <unistd.h>

void	do_op(char *nb1, char *op, char *nb2)
{
	int		res;
	int		n1;
	int		n2;

	
	n1 = atoi(nb1);
	n2 = atoi(nb2);
	res = 0;
	if (*op == '+')
		res = n1 + n2;
	else if (*op == '-')
		res = n1 - n2;
	else if (*op == '/')
		res = n1 / n2;
	else if (*op == '%')
		res = n1 % n2;
	else if (*op == '*')
		res = n1 * n2;
	putnbr(res);
}
int        main(int argc, char **argv)
{
    if (argv[2][0] == '/' && argv[3][0] == '0')
    {
        write(1, "Stop : division by zero\n", 24);
        return (0);
    }
    else if (argv[2][0] == '%' && argv[3][0] == '0')
    {
        write(1, "Stop : modulo by zero\n", 22);
        return (0);
    }
    if (argc == 4)
    {
        do_op(argv[1], argv[2], argv[3]);
        ft_putchar('\n');
    }
    return (0);
}
