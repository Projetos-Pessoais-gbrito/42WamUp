/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 00:10:21 by gustavo-lin       #+#    #+#             */
/*   Updated: 2024/10/03 00:17:29 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
	printf("Conteudo de a: %d, Conteudo de b: %d", *a, *b);
}

int main(void)
{
	int a;
	int b;
	int *pointerA;
	int *pointerB;
	
	a = 0;
	b = 1;
	pointerA = &a;
	pointerB = &b;
	ft_swap(pointerA, pointerB);
	return(0);
}