/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_41-43.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 05:31:48 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/25 01:15:35 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_lstclear(void)
{
	int		arr[] = {0, 1, 2, 3, 4, 5};
	int		len = sizeof(arr) / sizeof(arr[0]);
	t_list	*lst = ut_create_list('i', (void *)arr, NULL, len);

	ut_fn_name("ft_lstclear", "void ft_lstclear(t_list **lst, void (*del)(void *))");
	{
		printf("Original List:\n");
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

void	test_ft_lstiter(void)
{
	char	arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'G', 'H', '1'};
	int		len = sizeof(arr) / sizeof(arr[0]);
	t_list	*lst = ut_create_list('c', (void *)arr, NULL, len);

	ut_fn_name("ft_lstiter", "void ft_lstiter(t_list *lst, void (*f)(void *))");
	{
		printf("Original List:\n");
		ut_print_list(lst, 'c');
		printf("List len = %d\n\n", ft_lstsize(lst));
	}
	{
		printf("Iterating over the list & applying ft_toupper ...\n");
		ft_lstiter(lst, &uts_ft_lstiter);
		ft_putstr_fd("\n", 1);
	}
	{
		printf("\nFreeing all the nodes:\n");
		ft_lstclear(&lst, free);
		printf("All nodes are freed.\n");
		printf("List len = %d\n", ft_lstsize(lst));
	}
}

void	test_ft_lstmap(void)
{
	int		arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int		len = sizeof(arr) / sizeof(arr[0]);
	t_list *lst = ut_create_list('i', (void *)arr, NULL, len);
	t_list *fuzzbuzz_lst = NULL;

	ut_fn_name("ft_lstmap",
	"t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))");
	{
		printf("\nOriginal list: \n");
		ut_print_list(lst, 'i');
	}
	{
		printf("\nCreating the fuzzbuzz list: \n");
		fuzzbuzz_lst = ft_lstmap(lst, uts_ft_lstmap, free);
	}
	{
		printf("\nFuzzbuzz list: \n");
		ut_print_list(fuzzbuzz_lst, 's');
	}
	{
		printf("\nDeleting the original list ...\n");
		ft_lstclear(&lst, free);
		printf("Deleting the fuzzbuzz list ...\n");
		ft_lstclear(&fuzzbuzz_lst, free);
	}
	{
		printf("\nOriginal list len = %d", ft_lstsize(lst));
		printf("\nFuzzbuzz list len = %d", ft_lstsize(fuzzbuzz_lst));
	}
	ft_putchar_fd('\n', 1);
}
