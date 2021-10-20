/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:34:47 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/20 21:48:50 by seohuisu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
void main()
{
	printf("%d",ft_is_prime(13));
	printf("%d",ft_is_prime(12));
	printf("%d",ft_is_prime(17));
	printf("%d",ft_is_prime(2147483629));
	printf("%d",ft_is_prime(2147483647));
}