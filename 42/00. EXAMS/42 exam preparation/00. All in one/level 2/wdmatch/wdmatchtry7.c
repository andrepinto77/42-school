/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:04:54 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/12 01:14:38 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_inter(char *s1, char *s2)
{
	int i;
	int len; 
	
	len = 0;
	i = 0;
	while(s1[len])
		len++;
	while(*s2 && i < len)
		(*s2++ == s1[i]) ? i++ : 0;
	if ( i == len)
		write(1, s1, len);
}

int main( int ac, char **av)
{
	if (ac ==3)
	{
		ft_inter(av[1], av[2]);
	}
	write(1, "\n", 1);
	return(0);
}
