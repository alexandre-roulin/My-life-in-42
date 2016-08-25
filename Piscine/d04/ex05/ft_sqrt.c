/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 02:00:02 by aroulin           #+#    #+#             */
/*   Updated: 2016/08/11 02:33:40 by aroulin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long rac;

	rac = 1;
	while (nb != rac * rac)
	{
		rac++;
		if (nb == rac * rac)
		{
			return (rac);
		}
		if (rac > nb / rac)
		{
			return (0);
		}
	}
	return (1);
}
