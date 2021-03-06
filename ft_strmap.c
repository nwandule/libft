/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 10:11:04 by akalombo          #+#    #+#             */
/*   Updated: 2019/04/20 18:16:35 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *           ft_strmap(char const *s, char (*f)(char))
{
    unsigned int count;
    char* fresh;

    fresh = ft_strnew(ft_strlen(s));
    if(fresh == NULL)
        return (NULL);
    else
    {
        while (s[count] != '\0')
        {
            fresh[count] = f(s[count]);
            count++;
        }
    }
    return (fresh);
}
