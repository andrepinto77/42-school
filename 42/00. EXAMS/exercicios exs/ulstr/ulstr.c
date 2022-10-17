/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:57:53 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/07 14:05:48 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **av)
{
	if (argc == 2)
	{
		while (*av[1])
		{
			if (*av[1] >= 'a' && *av[1] <= 'z')
				*av[1] -= 32;
			else if(*av[1] >= 'A' && *av[1] <= 'Z')
				*av[1] += 32;
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
