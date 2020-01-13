/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokeeler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 20:19:39 by jokeeler          #+#    #+#             */
/*   Updated: 2020/01/11 20:46:56 by jokeeler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int div;

	div = 2;
	if (nb <= 1)
		return (3);
	while (1)
	{
		while (nb % div != 0 && div <= nb / 2)
			div++;
		if (nb % div != 0)
			return (nb);
		nb++;
		div = 2;
	}
	return (nb);
}
