/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:13:19 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:26:25 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The function ft_calloc allocates memory for an array of count elements
	of size bytes each and sets the memory to zero.

	RETURN VALUE
	The pointer to the allocated memory. NULL if the memory allocation fails.
*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(count * size);
	if (!r)
		return (NULL);
	ft_bzero(r, size * count);
	return (r);
}
