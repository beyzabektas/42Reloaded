/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbektas <bbektas@student.42.tr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:33:01 by bbektas           #+#    #+#             */
/*   Updated: 2023/06/17 22:35:15 by bbektas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{	
			while (av[j][i] != '\0')
			{
				ft_putchar(av[j][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j++;
		}
		return (0);
	}
}
