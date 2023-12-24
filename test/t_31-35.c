/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_31-35.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dehamad <dehamad@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 12:55:57 by dehamad           #+#    #+#             */
/*   Updated: 2023/12/22 05:34:43 by dehamad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_ft_putchar_fd(void)
{
	ut_fn_name("ft_putchar_fd", "void ft_putchar_fd(char c, int fd)");
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
}

void	test_ft_putstr_fd(void)
{
	char	*s1 = "123";
	char	*s2 = "abcdef";
	char	*s3 = "\0";

	ut_fn_name("ft_putstr_fd", "void ft_putstr_fd(char *s, int fd)");
	ft_putstr_fd(s1, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(s2, 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(s3, 1);
}

void	test_ft_putendl_fd(void)
{
	char	*s1 = "123";
	char	*s2 = "abcdef";
	char	*s3 = "\0";

	ut_fn_name("ft_putendl_fd", "void ft_putendl_fd(char *s, int fd)");
	ft_putendl_fd(s1, 1);
	ft_putendl_fd(s2, 1);
	ft_putendl_fd(s3, 1);
}

void	test_ft_putnbr_fd(void)
{
	ut_fn_name("ft_putnbr_fd", "void ft_putnbr_fd(int n, int fd)");
	ft_putnbr_fd(12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-12345, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(2147483647, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 1);
	ft_putchar_fd('\n', 1);
}

void	test_ft_lstnew(void)
{
	int		int_content = 2147483647;
	char	char_content = 'a';
	char	*str_content = "42 AbuDhabi !";
	t_list	*node1 = ut_create_node('i', &int_content);
	t_list	*node2 = ut_create_node('c', &char_content);
	t_list	*node3 = ut_create_node('s', str_content);

	ut_fn_name("ft_lstnew", "t_list *ft_lstnew(void *content)");
	if (node1)
		printf("Node 1 content: %d\n", *(int *)node1->content);
	if (node2)
		printf("Node 2 content: %c\n", *(char *)node2->content);
	if (node3)
		printf("Node 3 content: %s\n", (char *)node3->content);
	printf("\nFreeing all the nodes:\n");
	ft_lstdelone(node1, free);
	ft_lstdelone(node2, free);
	ft_lstdelone(node3, free);
	printf("All nodes are freed.\n");
}
