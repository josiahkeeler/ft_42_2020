/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokeeler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 16:56:18 by jokeeler          #+#    #+#             */
/*   Updated: 2020/01/09 20:04:47 by jokeeler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_putchar(x);
				ft_putchar(y);
				ft_putchar(z);
				ft_putchar(',' * (x != '7' || y != '8' || z != '9'));
				ft_putchar(' ' * (x != '7' || y != '8' || z != '9'));
				z++;
			}
			y++;
		}
		x++;
	}
}
