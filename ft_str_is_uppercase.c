/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 14:24:34 by jgehin            #+#    #+#             */
/*   Updated: 2018/11/19 14:29:18 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int ct;

	ct = 0;
	while (str[ct] != '\0')
	{
		if (str[0] == '\0')
			return (1);
		if (str[ct] < 65 || str[ct] > 90)
			return (0);
		ct++;
	}
	return (1);
}
