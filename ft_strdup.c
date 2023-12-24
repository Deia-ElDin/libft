/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:45:33 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 10:26:20 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	slen;

	slen = ft_strlen(s1) + 1;
	dup = malloc(sizeof(char) * slen);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, slen);
	return (dup);
}
