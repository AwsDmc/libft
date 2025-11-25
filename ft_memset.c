/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaoni <awos.baoni@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 20:04:22 by abaoni            #+#    #+#             */
/*   Updated: 2025/11/25 17:12:55 by abaoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	size_t			i;
	unsigned char	*helper;

	i = 0;
	helper = (unsigned char *)ptr;
	while (i < len)
	{
		helper[i] = c;
		i++;
	}
	return (ptr);
}
