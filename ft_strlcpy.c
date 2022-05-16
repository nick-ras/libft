/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrasmuss <nrasmuss@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:57:48 by nrasmuss          #+#    #+#             */
/*   Updated: 2022/05/02 22:17:18 by nrasmuss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclength;

	srclength = 0;
	i = 0;
	while (src[srclength] != '\0')
		srclength++;
	while (i < (dstsize - 1) && dstsize > 0)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = *((char *)src + i);
		i++;
	}
	while (dst[i] == '\0' && dstsize > 0)
	{
		if (dst[i] == '\0')
			break ;
		dst[i] = '\0';
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (srclength);
}

/* int	main(void)
{
	size_t dstsize = 0;
	char src[] = "lorem ipsum dolor sit amet";
	char dest[25] = "12345";

	printf("%zu\n", ft_strlcpy(dest, src, dstsize));
	write(1, dest, 20);
	printf("\n%zu\n", strlcpy(dest, src, dstsize));
	write(1, dest, 20);
	return (0); 
} */
