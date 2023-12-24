/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:50:54 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/20 18:36:33 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	while (*s)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			ret = (char *)s;
		s++;
	}
	if (*(unsigned char *)s == (unsigned char)c)
		ret = (char *)s;
	return (ret);
}
