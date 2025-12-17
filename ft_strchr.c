/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaoni <abaoni@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:09:50 by abaoni            #+#    #+#             */
/*   Updated: 2025/12/17 10:14:13 by abaoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		ch;

	i = 0;
	ch = (unsigned char) c;
	ptr = (const unsigned char *)s;
	while (ptr[i])
	{
		if (ptr[i] == ch)
			return ((char *)&ptr[i]);
		i++;
	}
	if (ptr[i] == ch)
		return ((char *)&ptr[i]);
	return (NULL);
}
