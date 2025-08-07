/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:30:13 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:25:58 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_isprint checks whether c is a printable character or not.

	RETURN VALUE
	Non-zero if c is printable, zero if not.
*/

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (c);
	return (0);
}
