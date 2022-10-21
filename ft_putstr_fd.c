/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalami <aalami@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:01:23 by aalami            #+#    #+#             */
/*   Updated: 2022/10/18 16:39:47 by aalami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    if(!s)
        return;
    while(*s)
    {
        ft_putchar_fd(*s,fd);
        s++;
    }
}