/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewolfghe <ewolfghe@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 21:28:26 by ewolfghe          #+#    #+#             */
/*   Updated: 2022/08/25 22:09:00 by ewolfghe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = 1;
	if (argc > 1)
	{
		while (a < argc)
		{
			b = 0;
			while (argv[a][b] != '\0')
			{
				ft_putchar(argv[a][b]);
				b++;
			}
			ft_putchar('\n');
			a++;
		}
	}
	return (0);
}
