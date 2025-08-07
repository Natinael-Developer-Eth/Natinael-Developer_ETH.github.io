/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:30:26 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:26:06 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_isascii checks whether c is an ascii character or not.

	RESULT VALUE
	Non-zero if c is ascii, zero if not.
*/

int	ft_isascii(int c)
{
	if (c == 0)
		return (1);
	if (c > 0 && c <= 127)
		return (c);
	return (0);
}
