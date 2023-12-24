/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:01:25 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 05:51:28 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_list	*ut_create_node(char type, void *content)
{
	t_list	*new_node;
	void	*res;

	if (type == 'i')
	{
		res = malloc(sizeof(int));
		*(int *)res = *(int *)content;
	}
	else if (type == 'c')
	{
		res = malloc(sizeof(char));
		*(char *)res = *(char *)content;
	}
	else if (type == 's')
		res = ft_strdup((char *)content);
	else
		return (NULL);
	new_node = ft_lstnew(res);
	if (!new_node)
	{
		free(res);
		return (NULL);
	}
	return (new_node);
}

t_list	*ut_create_list(char type, void *arr, char **str, int len)
{
	t_list	*lst;
	t_list	*new_node;
	void	*content;
	int		i;

	lst = NULL;
	i = 0;
	while (i < len)
	{
		if (arr && type == 'i')
			content = &((int *)arr)[i];
		else if (arr && type == 'c')
			content = &((char *)arr)[i];
		else if (str && type == 's')
			content = str[i];
		if (!content)
			return (NULL);
		new_node = ut_create_node(type, content);
		if (!new_node)
			return (NULL);
		ft_lstadd_back(&lst, new_node);
		i++;
	}
	return (lst);
}

void	ut_print_list(t_list *lst, char type)
{
	if (type == 'i' || type == 'c' || type == 's')
	{
		while (lst)
		{
			if (type == 'i')
				printf("%d", *(int *)lst->content);
			else if (type == 'c')
				printf("%c", *(char *)lst->content);
			else if (type == 's')
				printf("%s", (char *)lst->content);
			lst = lst->next;
			if (lst)
				printf(" -> ");
		}
		printf("\n\n");
	}
	else
		ft_putstr_fd("Error: Invalid type, can't print the list ...", 2);
}
