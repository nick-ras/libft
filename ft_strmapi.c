/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:04:19 by nickras           #+#    #+#             */
/*   Updated: 2022/05/11 12:52:03 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	ft_bzero(new, ft_strlen(s));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/* char add(unsigned int i, char s)
{
    s = s + i;
    return (s);
}

int main(void)
{
    char        s[] = "";

    printf("%s\n", ft_strmapi(s, add));
    return (0);
}
 */
