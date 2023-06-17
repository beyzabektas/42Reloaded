/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:42:11 by bbektas           #+#    #+#             */
/*   Updated: 2023/06/17 22:42:50 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		counter;
	char	*ret_val;

	counter = 0;
	while (src[counter])
		counter++;
	ret_val = malloc(sizeof(char) * (counter + 1));
	if (ret_val == NULL)
		return (0);
	counter = 0;
	while (src[counter])
	{
		ret_val[counter] = src[counter];
			counter++;
	}
	ret_val[counter] = '\0';
	return (ret_val);
}
