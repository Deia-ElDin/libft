/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_36-40.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 02:21:32 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 05:43:18 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_lstadd_front(void)
{
	char	*arr[] = {"42", "AbuDhabi", "!"};
	int		len = sizeof(arr) / sizeof(arr[0]);
	t_list	*lst = ut_create_list('s', NULL, arr, len);

	ut_fn_name("ft_lstadd_front",
		"void ft_lstadd_front(t_list **lst, t_list *new)");
	{
		printf("Original List:\n");
		ut_print_list(lst, 's');
		printf("List len = %d\n", ft_lstsize(lst));
	}
	{
		printf("\nCreating a new node with a content = \"C language\" and adding it to the front of the list.\n");
		t_list	*new_node = ut_create_node('s', "C language");
		ft_lstadd_front(&lst, new_node);
	}
	{
		printf("\nUpdated List:\n");
		ut_print_list(lst, 's');
		printf("List len = %d\n", ft_lstsize(lst));
	}
	{
		printf("\nFreeing all the nodes:\n");
		ft_lstclear(&lst, free);
		printf("All nodes are freed.\n");
		printf("List len = %d\n", ft_lstsize(lst));
	}
}

void	test_ft_lstsize(void)
{
	int		arr[] = {1, 2, 3, 4, 5};
	int		len = sizeof(arr) / sizeof(arr[0]);
	t_list	*lst = ut_create_list('i', (void *)arr, NULL, len);

	ut_fn_name("ft_lstsize", "int ft_lstsize(t_list *lst)");
	printf("list size = %d\n", ft_lstsize(lst));
	{
		printf("\nFreeing all the nodes:\n");
		ft_lstclear(&lst, free);
		printf("All nodes are freed.\n");
		printf("List len = %d\n", ft_lstsize(lst));
	}
}

void	test_ft_lstlast(void)
{
	char	arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int		len = sizeof(arr) / sizeof(arr[0]);

	ut_fn_name("ft_lstlast", "t_list *ft_lstlast(t_list *lst)");
	t_list	*lst = ut_create_list('c', (void *)arr, NULL, len);
	{
		printf("Original List:\n");
		ut_print_list(lst, 'c');
		printf("List len = %d\n", ft_lstsize(lst));
	}
	printf("\nlast node content = %c\n", *(char *)ft_lstlast(lst)->content);
	{
		printf("\nFreeing all the nodes:\n");
		ft_lstclear(&lst, free);
		printf("All nodes are freed.\n");
		printf("List len = %d\n", ft_lstsize(lst));
	}
}

void	test_ft_lstadd_back(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	len = sizeof(arr) / sizeof(arr[0]);
	t_list	*lst = ut_create_list('i', (void *)arr, NULL, len);

	ut_fn_name("ft_lstadd_back", "void ft_lstadd_back(t_list **lst, t_list *new)");
	{
		printf("Original List:\n");
		ut_print_list(lst, 'i');
		printf("List len = %d\n", ft_lstsize(lst));
	}
	{
		int	content = 6;
		printf("\nCreating a new node with a content = %d and adding it to the end of the list.\n", content);
		t_list	*new_node = ut_create_node('i', &content);
		ft_lstadd_back(&lst, new_node);
	}
	{
		printf("\nUpdated List:\n");
		ut_print_list(lst, 'i');
		printf("List len = %d\n", ft_lstsize(lst));
	}
	{
		printf("\nFreeing all the nodes:\n");
		ft_lstclear(&lst, free);
		printf("All nodes are freed.\n");
		printf("List len = %d\n", ft_lstsize(lst));
	}
}

void	test_ft_lstdelone(void)
{
	char	arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int		len = sizeof(arr) / sizeof(arr[0]);
	t_list	*lst = ut_create_list('c', (void *)arr, NULL, len);
	t_list	*current = lst;
	t_list	*previous = NULL;
	int		i = 1;

	ut_fn_name("ft_lstdelone", "void ft_lstdelone(t_list *lst, void (*del)(void *))");
	{
		printf("Original List:\n");
		ut_print_list(lst, 'c');
		printf("List len = %d\n", ft_lstsize(lst));
	}
	while (i <= len && current)
	{
		previous = current;
		current = current->next;
		lst = current;
		printf("\nDeleting node%d ...\n", i);
		ft_lstdelone(previous, free);
		if (i < len)
			ut_print_list(lst, 'c');
		else
			printf("\nAll nodes have been deleted.\n");
		i++;
	}
}
