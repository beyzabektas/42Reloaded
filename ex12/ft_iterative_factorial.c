/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 21:52:10 by bbektas           #+#    #+#             */
/*   Updated: 2023/06/20 13:55:59 by bebektas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 0)
		return (1);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
