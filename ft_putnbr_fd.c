/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntenisha <ntenisha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 17:27:04 by ntenisha          #+#    #+#             */
/*   Updated: 2021/10/26 18:59:42 by ntenisha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Parameters
** #1.  The integer to output.
** #2.  The file descriptor on which to write.
** Return value		None
** External functs.	write
** Description
** Outputs the integer ’n’ to the given file
** descriptor.
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (!n || !fd)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n < -10)
			ft_putnbr_fd(n / -10, fd);
		ft_putchar_fd(-n % 10 + '0', fd);
	}
	else
	{
		if (n > 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10 + '0'), fd);
	}
}
