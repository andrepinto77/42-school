/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaltaza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:25:17 by abaltaza          #+#    #+#             */
/*   Updated: 2022/10/13 12:27:08 by abaltaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;

	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}

	s1[i] = '\0';
	return s1;
}
