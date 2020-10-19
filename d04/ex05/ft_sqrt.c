/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mghazari <maximeghazarian1@gmail.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 18:29:45 by mghazari          #+#    #+#             */
/*   Updated: 2020/10/19 18:53:24 by mghazari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	for(i = 1; i <= nb / 2; i++)
		if ((i * i) == (nb))
			return (i);
	return (0);
}
