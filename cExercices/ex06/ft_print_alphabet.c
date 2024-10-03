/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 22:34:41 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/02 23:18:07 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
    write(1, &a, 1);
}

void ft_print_alphabet(void)
{
    int i;

    i = 'a';
    while(i <= 'z')
    {
        ft_putchar(i);
        i++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}