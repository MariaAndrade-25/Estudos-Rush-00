/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malves-a <malves-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:09:51 by kenhuama          #+#    #+#             */
/*   Updated: 2026/01/17 16:26:07 by malves-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1)
}

void	print_linha(int tam, char linha1, char linha2, char linha3)
{
    int i;

    i = 1;
    while (i <= tam)
    {
        if (i == 1)
	{
            ft_putchar(linha1);
	}
	    if (i > 1 && i < tam)
	    {
		    ft_putchar(linha2);
	    }
	    if (i == tam && i != 1)
	    {
		    ft_putchar(linha3);
	    }
        i++;
    }
}

void rush01(int x, int y)
{
    int i;

    i = 1;
    while (i <= y)
    {
        if (i == 1)
	{
            print_linha(x, '/', '*', '\\');
	}
	    else if (i > 1 && i < y)
	    {
		    print_linha(x, '*', ' ', '*');
	    }
		    else if (i == y && y > 1)
		    {
			    print_linha(x, '\\', '*', '/');
		    }
        ft_putchar('\n');
        i++;
    }
}

int main()
{
	rush01(1,8);
}
