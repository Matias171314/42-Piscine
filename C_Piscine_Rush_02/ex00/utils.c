/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 02:37:49 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/27 03:48:02 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

void ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i],1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	len = 0;

	while (str && str[len])
		len++;
	return (len);
}

int	is_valid_number(char *str)
{
	int	i = 0;

	if (!str || !str[0])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}