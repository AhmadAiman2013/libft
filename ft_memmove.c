/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-ali <abin-ali@student.42.kl>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:31:06 by abin-ali          #+#    #+#             */
/*   Updated: 2023/12/10 17:41:56 by abin-ali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, int n);

void	*ft_memmove(void *dst, const void *src, int len)
{
	unsigned char *ptr_dst;
	unsigned char *ptr_src;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	if (ptr_dst < ptr_src)
	{
		ft_memcpy(ptr_dst, ptr_src, len);
	}
	else
	{
		ptr_dst += len - 1;
		ptr_src += len - 1;
		while (len)
		{
			*ptr_dst = *ptr_src;
			ptr_dst--;
			ptr_src--;
			len--;
		}
	}
}