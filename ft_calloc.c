/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:54:23 by abin-ali          #+#    #+#             */
/*   Updated: 2023/12/11 11:15:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(int count, int size)
{
	void *ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (count * size > 0)
	{
		((char *)ptr)[count * size - 1] = 0;
		count--;
	}
	return (ptr);
}
