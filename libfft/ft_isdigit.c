/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateliya <nateliya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:30:20 by nateliya          #+#    #+#             */
/*   Updated: 2025/07/30 02:26:02 by nateliya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The function ft_isdigit checks whether c is a digit character or not.

	RETURN VALUE
	Non-zero if c is a digit, zero if not.
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (c);
	return (0);
}
