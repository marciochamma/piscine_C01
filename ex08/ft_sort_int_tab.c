/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:58:22 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 16:16:58 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	if (size != 0)
	{
		i = 0;
		while (i != size - 1)
		{
			j = 0;
			while (j != size - 1)
			{
				if (tab[j] > tab[j + 1])
				{
					temp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = temp;
				}
				j++;
			}
		i++;
		}		
	}

}

// int	main(void)
// {
// 	// int tab[5] = {2, 4, 3, 1, 5};
// 	int tab[0];
// 	int	size;
// 	int	i;

// 	size = 0;
// 	ft_sort_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		tab[i] += 48;
// 		write(1, &tab[i], 1);
// 		i++;
// 	}
// 	return (0);
// }
