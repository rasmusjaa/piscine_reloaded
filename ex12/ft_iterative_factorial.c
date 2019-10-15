/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjaakonm <rjaakonm@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 17:21:26 by rjaakonm          #+#    #+#             */
/*   Updated: 2019/10/15 14:09:04 by rjaakonm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 0;
	if (nb >= 0 && nb < 13)
	{
		i = 1;
		while (nb > 0)
		{
			i *= nb;
			nb--;
		}
	}
	return (i);
}
