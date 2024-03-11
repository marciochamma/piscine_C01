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

#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	print_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
		printf("%d ", arr[i++]);
	printf("\n");
}

void	shuffle_array(int *arr, int size)
{
	int	counter;

	counter = 0;
	while (counter < size * 5)
	{
		ft_swap(&arr[rand() % size], &arr[rand() % size]);
		counter++;
	}
}

void	populate_array(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		arr[i] = i + 1;
		i++;
	}
	shuffle_array(arr, size);
}

int	main(void)
{
	int	empty[0];
	int	test_even[10];
	int	test_odd[11];
	int	test_lots[123];

	populate_array(test_even, 10);
	populate_array(test_odd, 11);
	populate_array(test_lots, 123);
	ft_sort_int_tab(empty, 0);
	ft_sort_int_tab(test_even, 10);
	ft_sort_int_tab(test_odd, 11);
	ft_sort_int_tab(test_lots, 123);
	print_array(empty, 0);
	print_array(test_even, 10);
	print_array(test_odd, 11);
	print_array(test_lots, 123);
}
