/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbettini <jbettini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:47:04 by jbettini          #+#    #+#             */
/*   Updated: 2021/12/15 18:49:28 by jbettini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_split(char **tab)
{
    int i = -1;
    while(tab[++i])
        printf("SPLIT %s\n", tab[i]);
}

void    print_nb_lst(t_list *lst)
{
    int i = 0;
    while(lst)
    {
        printf("%d\n",ft_atoi(lst->content));
        lst = lst->next;
        i++;
    }
}