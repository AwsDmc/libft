/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaoni <awos.baoni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:04:22 by abaoni            #+#    #+#             */
/*   Updated: 2025/12/17 09:42:31 by abaoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	ch;

	i = 0;
	ptr = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = ch;
		i++;
	}
	return (s);
}
