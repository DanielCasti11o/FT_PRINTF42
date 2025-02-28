/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacastil <dacastil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:34:26 by dacastil          #+#    #+#             */
/*   Updated: 2024/11/25 19:30:25 by dacastil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	ln;

	ln = 0;
	if (!s)
		s = "(null)";
	while (s[ln])
	{
		write (1, &s[ln], 1);
		ln++;
	}
	return (ln);
}
