/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:58:04 by nrasmuss          #+#    #+#             */
/*   Updated: 2022/05/09 19:32:10 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	unsigned char	cc;

	cc = c;
	if (cc > 64 && cc < 91)
		return (cc + 32);
	return (cc);
}

/* int	main(void)
{
	int c = 65;
	printf("%c", ft_tolower(c));
	return (0);
} */
