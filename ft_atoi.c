/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:42:08 by jgehin            #+#    #+#             */
/*   Updated: 2018/11/15 17:27:08 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	nb = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == '+'
			|| str[i] == '-' || str[i] == ' ')
	{
		if ((str[i] == '+' || str[i] == '-') &&
				(str[i + 1] == '+' || str[i + 1] == '-' || str[i + 1] == ' ' ||
				(str[i + 1] <= 13 && str[i + 1] >= 9) || str[i] == '0'))
			return (0);
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10) + (str[i++] - 48);
	return (nb * neg);
}
