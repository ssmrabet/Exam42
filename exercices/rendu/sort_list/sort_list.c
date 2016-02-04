/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 20:02:03 by smrabet           #+#    #+#             */
/*   Updated: 2016/01/07 20:44:22 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;
	int	data_tmp;

	swap = 1;
	if (lst == 0)
		return (lst);
	while (swap)
	{
		swap = 0;
		tmp = lst;
		while (tmp->next)
		{
			if (cmp(tmp->data, tmp->next->data) == 0)
			{
				data_tmp = tmp->data;
				tmp->data = tmp->next->data;
				tmp->next->data = data_tmp;
				swap = 1;
			}
			tmp = tmp->next;
		}
	}
	return (tmp);
}
