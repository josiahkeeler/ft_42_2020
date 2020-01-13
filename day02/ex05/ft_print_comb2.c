/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokeeler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:40:40 by jokeeler          #+#    #+#             */
/*   Updated: 2020/01/09 18:39:59 by jokeeler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_putchar(nb1 / 10 + '0');
			ft_putchar(nb1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(nb2 / 10 + '0');
			ft_putchar(nb2 % 10 + '0');
			ft_putchar(',' * (nb1 != 98));
			ft_putchar(' ' * (nb1 != 98));
			nb2++;
		}
		nb1++;
	}
}
