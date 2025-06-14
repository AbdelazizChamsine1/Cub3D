/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achamsin <achamsin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 11:56:06 by achamsin          #+#    #+#             */
/*   Updated: 2024/06/19 14:38:05 by achamsin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		|| ((c >= 48) && (c <= 57)))
		return (1);
	return (0);
}

// #include <stdio.h>

// int main ()
// {
// 	printf( "%d" , ft_isalnum('k'));
// 	printf( "%d" , ft_isalnum('d'));
// 	printf( "%d" , ft_isalnum('_'));
// 	return (0);
// }
