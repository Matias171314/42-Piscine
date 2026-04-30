/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 18:13:50 by albelmon          #+#    #+#             */
/*   Updated: 2025/07/27 02:51:16 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int	**ft_trios(char *numbers)
{
	int	ntrios;
	int	**trios;
	int	nlen;
	int i; // indice (recorre numbers)
	int t; // indice del trio
	int p; // posicion dentro del trio

	nlen = ft_strlen(numbers);				
	ntrios = (nlen + 2) / 3; //Te da el número de trios que vas a tener
	trios = malloc(sizeof(int *) * ntrios); //Reserva espacio de memoria para guardar arrays bidimensionales 
	t = ntrios - 1;
	i = nlen - 1;
	while (t >= 0)
	{
		trios[t] = (int *)malloc(sizeof(int) * 3);
		p = 2;
		while (p >= 0)
		{
			if (i >= 0)
				trios[t][p] = numbers[i] - '0';
			else
				trios[t][p] = 0;
			p--;
			i--;
		}
		t--;
	}
	return (trios);
}
