/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-ali <abin-ali@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:36:08 by abin-ali          #+#    #+#             */
/*   Updated: 2023/12/10 16:47:28 by abin-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_memset(void *b, int c, int len)
{
	unsigned char *ptr;

	ptr = (unsigned char *)b;
	while (len)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
}