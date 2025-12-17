#include <stdio.h>
#include "libft.h"
#include <string.h>
int	main(void)
{
	char str[5] = "Aws";
	const char c = 'w';
	printf("%s",ft_strlcat(&str,&c,5));
}
