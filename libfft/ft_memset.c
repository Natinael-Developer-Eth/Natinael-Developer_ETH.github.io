/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:28:14 by nateliya          #+#    #+#             */
/*   Updated: 2025/08/05 04:58:56 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/*
	The function ft_memset fills the first len bytes of the memory area
	pointed	to by b with the byte c. Both b and c are interpreted as 
	unsigned char.

	RETURN VALUE
	A pointer to memory area s.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	ch;

	p = (unsigned char *)b;
	ch = c;
	while (len--)
	{
		*p = ch;
		p++;
	}
	return (b);
}
