/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albelmon <albelmon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 17:36:34 by albelmon          #+#    #+#             */
/*   Updated: 2025/07/27 03:41:32 by albelmon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <header.h>

int main(int argc, char **argv)
{
    char    *dict_path;
    char    *number_str;
    t_dict *dict;

    dict_path = "./numbers.dict"; // Relative path of the dictionary file
    if (argc == 2) // Only a number is provided
        number_str = argv[1];
    else if (argc == 3) // A dictionary file and a number are provided
    {
        dict_path = argv[1];
        number_str = argv[2];
    }
    else // Invalid number of arguments
    {
        ft_putstr("Error\n");
        return (1);
    }
    if (!is_valid_number(number_str)) // Check if the string of number is valid
    {
        ft_putstr("Error\n");
        return (1);
    }
    dict = load_dict(dict_path);
    if (!dict)
    {
        ft_putstr("Dict Error\n");
        return (1);
    }
    return (0);
}
