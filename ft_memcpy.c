/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:34:15 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/20 14:42:14 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cpy;

	if (!dst && !src)
		return (NULL);
	cpy = n;
	while (n--)
		*(char *)dst++ = *(char *)src++;
	return (dst - cpy);
}
