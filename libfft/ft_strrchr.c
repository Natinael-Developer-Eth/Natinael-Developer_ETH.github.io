/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:26:07 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:23:32 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	The function ft_strrchr finds the last occurrence of character c in
	string str.

	RETURN VALUE 
	A pointer to the last occurrence of c in str.
	NULL if c is not found.
*/

char	*ft_strrchr(const char *str, int c)
{
	char			*p;
	unsigned char	ch;
	size_t			offset;

	ch = c;
	offset = ft_strlen(str);
	p = (char *)str + offset;
	if (ch == '\0')
		return (p++);
	while (p >= str)
	{
		if (*p == ch)
			return (p);
		p--;
	}
	p = NULL;
	return (p);
}
