/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:01:50 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/20 21:12:23 by seohuisu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

#include <stdio.h>

void	main(void)
{
	int	nb;
	int	power;

	nb = 2;
	power = 3;
	printf("%d",ft_recursive_power(nb, power));
}