/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:28:28 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:25:35 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The function ft_memcpy copies n bytes from memory area src to memory
	area dst.
	Does not account for memory overlaps. Use ft_memmove if the memory areas
	overlap or might overlap.

	RETURN VALUE
	A pointer to dst. NULL if src and dst are both NULL.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (!dst && !src)
		return (0);
	if (n == 0 || (dst == src))
		return (dst);
	dp = (char *)dst;
	sp = (const char *)src;
	while (n != 0)
	{
		if (*dp != *sp)
			*dp = *sp;
		dp++;
		sp++;
		n--;
	}
	return (dst);
}
