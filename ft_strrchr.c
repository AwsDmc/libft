/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaoni <abaoni@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:04:51 by abaoni            #+#    #+#             */
/*   Updated: 2025/12/01 11:37:17 by abaoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	size_t			len;

	ch = (unsigned char) c;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == ch)
			return ((char *)&s[len]);
		len--;
	}
	if (s[len] == ch)
		return ((char *)&s[len]);
	return (NULL);
}
