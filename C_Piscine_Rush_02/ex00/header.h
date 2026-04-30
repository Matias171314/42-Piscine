#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
typedef struct t_dict { // estructura para cda elem del diccionario
    char *key;   // Ejemplo: "40"
    char *value; // Ejemplo: "forty"
} t_dict;
int ft_is_valid_number(char *str);
void ft_putstr(char *str);
int ft_strlen(char *number);
int	**ft_trios(char *numbers);
#endif