/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-ali <abin-ali@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 19:09:08 by abin-ali          #+#    #+#             */
/*   Updated: 2023/12/10 19:37:20 by abin-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, int n)
{
	unsigned char *s1;
	unsigned char c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n)
	{
		if (*s1 == c1)
		{
			return (s1);
		}
		s1++;
		n--;
	}
	return (0);
}