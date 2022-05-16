/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:14:35 by nickras           #+#    #+#             */
/*   Updated: 2022/05/13 10:45:13 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		start;
	int		end;
	size_t	s1len;

	s1len = ft_strlen(s1);
	i = 0;
	start = 0;
	end = 0;
	while (ft_strchr(set, s1[i]))
	{
		start++;
		i++;
	}
	i = 0;
	while (ft_strchr(set, s1[(int)s1len - (int)i - 1]))
	{
		end++;
		i++;
	}
	return (ft_substr(s1, (unsigned int)start, s1len - start - end));
}

/* int	main(void)
{
 	char s1[] = "166623456111";
	char set[] = "126";

 	printf("%s\n", ft_strtrim(s1, set));
 	return (0);
}
 */