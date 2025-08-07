/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:28:07 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:25:24 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The function ft_putchar_fd writes the given character to the given
	file descriptor.

	RETURN VALUE
	None.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
