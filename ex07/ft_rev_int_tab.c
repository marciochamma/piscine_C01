/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 09:55:23 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 16:04:01 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i != size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int		tab[4] = {50, 10, 20, 30};
// 	int		i;
// 	int		size;

// 	size = 4;
// 	ft_rev_int_tab(tab, size);
// 	i = 0;
// 	while (i < size)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// }
