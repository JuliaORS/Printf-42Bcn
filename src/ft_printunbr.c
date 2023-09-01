/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julolle- <julolle-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 16:09:36 by julolle-          #+#    #+#             */
/*   Updated: 2023/06/29 12:37:11 by julolle-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printunbr(unsigned int nbr)
{
	char	*str;
	int		i;

	if (nbr == 0)
		return (ft_printchar('0'));
	else
	{
		str = ft_itoa(nbr);
		if (!str)
			return (-1);
		i = ft_printstr(str);
		free (str);
		return (i);
	}	
}
