/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jokeeler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 19:49:53 by jokeeler          #+#    #+#             */
/*   Updated: 2020/01/11 19:50:38 by jokeeler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int temp;

	temp = 1;
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 1 || index == 0)
	{
		return (index);
	}
	else
	{
		return (temp = ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
