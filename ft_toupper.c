/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:58:07 by nrasmuss          #+#    #+#             */
/*   Updated: 2022/05/09 19:29:28 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h> 

int	ft_toupper(int c)
{
	unsigned char	cc;

	cc = c;
	if (cc > 96 && cc < 123)
		return (cc - 32);
	return (cc);
}

/* int	main(void)
{
	int	i;

	i = -100;
	while (i < 0)
	{
		printf("MINE -%d-\n", ft_toupper(i));
		printf("-%d-\n", toupper(i));
		i++;
	}
	return (0);
} */
