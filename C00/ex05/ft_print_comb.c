/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 22:47:27 by rmanuel           #+#    #+#             */
/*   Updated: 2020/11/28 15:58:05 by rmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char f;
	char s;
	char t;

	f = '0';
	while (f <= '7')
	{
		s = f + 1;
		while (s <= '8')
		{
			t = s + 1;
			while (t <= '9')
			{
				write(1, &f, 1);
				write(1, &s, 1);
				write(1, &t, 1);
				if (f == '7' && s == '8' && t == '9')
					break ;
				write(1, ", ", 2);
				t++;
			}
			s++;
		}
		f++;
	}
}