/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nickras <nickras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 13:03:56 by nickras           #+#    #+#             */
/*   Updated: 2022/05/12 15:23:35 by nickras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* gcc -Werror -Wall -Wextra -g
ft_putnbr_fd.c 
ft_strtrim.c ft_strlen.c ft_itoa.c
ft_bzero.c
ft_strdup.c ft_substr.c && ./a.out */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			num;
	unsigned int	ui;

	if (n < 0)
	{
		write(fd, "-", 1);
		ui = (unsigned int)n * -1;
	}
	else
		ui = (unsigned int)n;
	if (ui >= 10)
		ft_putnbr_fd(ui / 10, fd);
	num = ui % 10 + 48;
	write(fd, &num, 1);
}

/* int	main(void)
{
	ft_putnbr_fd(164189, 1);
	return (0);
} */
