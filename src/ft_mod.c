#include "libft.h"

int32_t	ft_mod(int32_t num, size_t mod)
{
	num %= mod;
	if (num < 0)
		return (num + mod);
	return (num);
}