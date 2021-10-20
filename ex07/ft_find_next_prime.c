/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:43:04 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/20 21:47:16 by seohuisu         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb + 1;
	while (1)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
}

#include <stdio.h>
void main()
{
	printf("%d",ft_find_next_prime(13));
	printf("%d",ft_find_next_prime(12));
	printf("%d",ft_find_next_prime(17));
	printf("%d",ft_find_next_prime(2));
}