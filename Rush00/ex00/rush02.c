/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bedoueni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 16:04:59 by bedoueni          #+#    #+#             */
/*   Updated: 2019/07/06 16:05:02 by bedoueni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	if (x > 0 && y > 0)
	{
		while (a <= y)
		{
			b = 0;
			while (b++ <= x)
			{
				if ((a == 1 && b == 1) || ((a == 1) && (b == x)))
					ft_putchar('A');
				else if (((a == y) && (b == x)) || ((a == y) && (b == 1)))
					ft_putchar('C');
				else if ((a == 1 && b < x) || (a < y && b == 1)
						|| (a == y && b < x) || (a < y && b == x))
					ft_putchar('B');
				else if (a != y && b != x)
					ft_putchar(' ');
			}
			ft_putchar('\n');
			a++;
		}
	}
}
