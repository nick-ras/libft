/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 12:18:12 by nickras           #+#    #+#             */
/*   Updated: 2022/05/12 12:43:51 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	length;

	length = ft_strlen(s);
	write(fd, s, length);
}

/* int	main(void)
{
	char s[] = "   lorem\nipsum\rdolor\tsit amet   ";

	ft_putstr_fd(s, 1);
	return (0);
} */
