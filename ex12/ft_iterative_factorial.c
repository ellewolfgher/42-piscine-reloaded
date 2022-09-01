/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:30:12 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/08/25 20:32:42 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	aux;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	aux = nb - 1;
	while (aux > 0)
	{
		nb = nb * aux--;
	}
	if (nb)
		return (nb);
	else
		return (0);
}
