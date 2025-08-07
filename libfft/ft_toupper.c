/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:24:22 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:22:58 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The function ft_toupper converts a given lowercase letter c to its
	uppercase equivalent.

	RETURN VALUE
	The uppercase equivalent letter
	The original character c if c is not a lowercase letter.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
