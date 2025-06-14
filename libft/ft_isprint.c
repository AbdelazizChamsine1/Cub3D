/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:57:32 by achamsin          #+#    #+#             */
/*   Updated: 2025/06/09 19:45:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_isprint(int c)
// {
// 	if (c >= 32 && c <= 126)
// 		return (1);
// 	return (0);
// }

int	ft_isprint(int c)
{
	if (c >= 33 && c < 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int main ()
// {
// 	printf( "%d" , ft_isprint('k'));
// 	return (0);
// }
