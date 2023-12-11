/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-ali <abin-ali@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:23:11 by abin-ali          #+#    #+#             */
/*   Updated: 2023/12/11 00:28:32 by abin-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, int n)
{
	unsigned char *s1_1;
	unsigned char *s2_1;

	s1_1 = (unsigned char *)s1;
	s2_1 = (unsigned char *)s2;
	while (n)
	{
		if (*s1_1 != *s2_1)
		{
			return (*s1_1 - *s2_1);
		}
		s1_1++;
		s2_1++;
		n--;
	}
	return (0);
}