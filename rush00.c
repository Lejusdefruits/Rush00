/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubrouss <jubrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:38:20 by lejusdefrui       #+#    #+#             */
/*   Updated: 2025/07/12 18:47:45 by jubrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_str(char *str, int diff)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	if (diff != 0)
		write(1, &(char){'\n'}, 1);
}
// }
int is_corner(int colonne, int ligne, int x, int y)
{
	if (colonne == 1 && ligne == 1)
		return (1);
	if (colonne == 1 && ligne == x)
		return (1);
	if (colonne == y && ligne == 1)
		return (1);
	if (colonne == y && ligne == x)
		return (1);
	return (0);
}

int is_wich_border(int colonne, int ligne, int x, int y)
{
	if (ligne == 1 || ligne == x)
		return (1);
	if (colonne == 1 || colonne == y)
		return (2);
	return (0);
}

void	reset_line(int x, char *ptr)
{
	int	i;

	i = 0;
	while (i < x)
	{
		ptr[i] = ' ';
		i++;
	}
}


void rush(int x, int y)
{
	int	ligne;
	int	colonne;
	char	current_line[x];
	char *ptr;

	colonne = 1;
	ptr = current_line;
	while (colonne <= y)
	{
		ligne = 1;
		reset_line(x, ptr);
		while (ligne <= x)
		{
			if (is_wich_border(colonne, ligne, x, y) == 2)
				current_line[ligne - 1] = '-';
			if (is_wich_border(colonne, ligne, x, y) == 1)
				current_line[ligne - 1] = '|';
			if (is_corner(colonne, ligne, x, y))
				current_line[ligne - 1] = 'o';
			ligne++;
		}
		ft_print_str(current_line, colonne - y);
		colonne++;
	}
}

int main(void)
{
	rush(5, 1);
	return (0);
}
