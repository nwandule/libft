/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 15:50:54 by akalombo          #+#    #+#             */
/*   Updated: 2019/03/30 23:09:29 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strcpy(char *s1, char *s2)
{
    int intCount = 0;
    while (s1[intCount] != '\0')
    {
        s2[intCount] = s1[intCount];
        intCount++;
    }
     s2[intCount] = '\0';
    
    return (s2);
}
