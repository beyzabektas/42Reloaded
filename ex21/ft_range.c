/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:43:37 by bbektas           #+#    #+#             */
/*   Updated: 2023/06/17 22:43:47 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret_val;	
	int	i;

	if (min >= max)
		return (0);
	ret_val = malloc((max - min) * sizeof(int));
	if (ret_val == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ret_val[i] = min;
		min++;
		i++;
	}
	return (ret_val);
}
