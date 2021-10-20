/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seohuisu <seohuisu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:07:26 by seohuisu          #+#    #+#             */
/*   Updated: 2021/10/20 17:20:46 by seohuisu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	i = 0;
	ans = 1;
	if (nb < 0)
		return (0);
	while (++i <= nb)
	{
		ans *= i;
	}
	return (ans);
}
#include <stdio.h>
void	main(void)
{
	int	nb;

	nb = 5;
	printf("%d",ft_iterative_factorial(nb));
}