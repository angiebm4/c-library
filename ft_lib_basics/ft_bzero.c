/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angela <angela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:54:29 by abarrio-          #+#    #+#             */
/*   Updated: 2023/12/20 16:20:54 by angela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *str, size_t n)
{
	char	*dest;
	size_t	i;

	dest = (char *)str;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}
