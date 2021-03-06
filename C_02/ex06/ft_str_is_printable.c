/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-marc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:46:23 by edi-marc          #+#    #+#             */
/*   Updated: 2020/12/08 08:36:00 by edi-marc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int check;
	int i;

	check = 1;
	i = 0;
	while (str[i] != '\0' && check == 1)
	{
		if (!(str[i] > 31 && str[i] < 127))
			check = 0;
		i++;
	}
	return (check);
}
