/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:57:34 by nrasmuss          #+#    #+#             */
/*   Updated: 2022/05/10 12:53:18 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dstr;
	unsigned char	*srcr;

	dstr = (unsigned char *)dst;
	srcr = (unsigned char *)src;
	if (!n)
		return (dstr);
	i = 0;
	while (i < n)
	{
		dstr[i] = srcr[i];
		i++;
	}
	return (dstr);
}

/* int	main(void)
{
	size_t	n = 2;
	char	dst[3] = "123";
	char	src[2] = "12";

	printf("MINE   --%p--\n", ft_memcpy(dst, src, n));
	printf("ORIGINAL --%p--\n", memcpy(dst, src, n));
	return (0);
} */
