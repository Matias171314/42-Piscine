/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 23:31:55 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/13 18:41:56 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_spaces(int x)
{
	int	i;

	i = 2;
	if (x > 1)
	{
		while (i < x)
		{
			ft_putchar (' ');
			i++;
		}
	}
}

void	ft_printb_x(int x)
{
	int	i;

	i = 2;
	ft_putchar ('A');
	while (i < x)
	{
		ft_putchar ('B');
		i++;
	}
	if (x > 1)
	{
		ft_putchar ('C');
	}
}

void	ft_printb_y(int y, int x)
{
	int	i;

	i = 2;
	while (i < y)
	{
		ft_putchar ('\n');
		ft_putchar ('B');
		i++;
		ft_spaces(x);
		if (x > 1)
		{
			ft_putchar ('B');
		}
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "0 o menos no en una coordenada, no generan nada", 51);
	}
	else
	{
		ft_printb_x(x);
		ft_printb_y(y, x);
		if (y > 1)
		{
			ft_printb_x(x);
		}
	}
}
