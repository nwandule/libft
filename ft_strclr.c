/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalombo <akalombo@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 10:32:11 by akalombo          #+#    #+#             */
/*   Updated: 2019/04/16 00:05:36 by akalombo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void            ft_strclr(char *s)
{
    ft_memset (s, '\0', (sizeof(char) * ft_strlen(s) + 1));
}
