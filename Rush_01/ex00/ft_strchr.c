/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vismaily <nenie_iri@mail.ru>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:24:09 by vismaily          #+#    #+#             */
/*   Updated: 2022/10/10 13:57:35 by vismaily         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush00.h"

char	*ft_strchr(const char *str, int c)
{
	char	*new_s;

	new_s = (char *)str;
	while (*new_s != '\0')
	{
		if (*new_s == c)
			return (new_s);
		++new_s;
	}
	if (c == '\0' && *new_s == '\0')
		return (new_s);
	return (0);
}
