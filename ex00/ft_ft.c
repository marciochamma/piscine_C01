/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchamma <mchamma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:31:52 by mchamma           #+#    #+#             */
/*   Updated: 2023/03/23 15:17:52 by mchamma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int	main(void)
// {
// 	int	aux;
// 	int	*nbr;

// 	aux = 0;
// 	nbr = &aux;
// 	printf("o valor atual é %d\n", aux);
// 	ft_ft(nbr);
// 	printf("o valor modificado é %d", aux);
// 	return (0);
// }
