/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 12:33:50 by akalombo          #+#    #+#             */
/*   Updated: 2019/03/29 09:42:14 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int             ft_strlen(char *str)
{
    int intCounter = 0;

    while (str[intCounter] != 0)
        intCounter++;

    return (intCounter);
}
