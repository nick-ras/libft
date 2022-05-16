/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:57:59 by nrasmuss          #+#    #+#             */
/*   Updated: 2022/05/16 14:36:46 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	length;

	length = ft_strlen(s);
	while (length > 0)
	{
		if (s[length] == (char)c)
			return ((char *)s + length);
		length--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

/* int	main(void)
{
	int	c = 48;
	const char *s = "\0";
	printf("MINE     %p\n", ft_strrchr(s, c));
	printf("ORIGINAL %p\n", strrchr(s, c));
	return (0);
} */
