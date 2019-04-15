/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 12:12:00 by akalombo          #+#    #+#             */
/*   Updated: 2019/04/15 04:19:07 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                    *ft_memalloc(size_t size)
{
    void *alocated;
    alocated = (void *)malloc(size);
    if (alocated == NULL)
        return (NULL);
    else
        ft_memset(alocated, 0, size);
}
