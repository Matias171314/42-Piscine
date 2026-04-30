/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 00:58:43 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/27 02:52:08 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

char	*ft_read_file(char *filename)
{
	int		file;
	char	str[1024];

	file = open(filename, O_RDONLY);
	read(file, &str, sizeof(str));
	close(file);
	return (str);
}