/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 15:13:18 by rfork             #+#    #+#             */
/*   Updated: 2020/01/13 20:23:37 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	dda(t_mlx *data)
{
	t_point *p1;
	t_point *p2;

	p1 = (t_point *)malloc(sizeof(t_point));
	p2 = (t_point *)malloc(sizeof(t_point));

	p1->x = 0;
	p1->y = 0;
	p2->x = 320;
	p2->y = 240;

	double dx = p2->x - p1->x;
	double dy = p2->y - p1->y;

	double steps = fabs(dx) > fabs(dy) ? dx : dy;

	double Xinc = dx / steps;
	double Yinc = dy / steps;

	double X = p1->x;
	double Y = p1->y;
	for (int i = 0; i <= steps; i++)
	{
		mlx_pixel_put(data->mlx_ptr, data->win_ptr, (int)round(X), (int)(Y), 16711680);
		X += Xinc;
		Y += Yinc;
	}
}

# ifdef __APPLE__
int		deal_key(int key, t_mlx *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	char str[] = "Pressed key is ";
	char * temp;
	mlx_string_put(data->mlx_ptr, data->win_ptr, 320, 240, 16711680,  temp = ft_strjoin(str,ft_itoa(key)));
	ft_strdel(&temp);
	if (key == 53)
		exit(0);
	dda(data);
	return (0);
}
#endif
#ifdef __linux__
int		deal_key(int key, t_mlx *data)
{
	mlx_clear_window(data->mlx_ptr, data->win_ptr);
	char str[] = "Pressed key is ";
	char * temp;
	mlx_string_put(data->mlx_ptr, data->win_ptr, 320, 240, 16711680, temp = ft_strjoin(str,ft_itoa(key)));
	ft_strdel(&temp);
	if (key == 65307)
		exit(0);
	dda(data);
	return (0);
}
#endif
void	suicide(char *error_text)
{
	ft_putstr(error_text);
	exit(0);
}


int		main(void)
{
	t_mlx *data;

	data = start();
	mlx_key_hook(data->win_ptr, deal_key, data);
	dda(data);

	mlx_loop(data->mlx_ptr);
	return (0);
}

//int main(void)//int argc, char **argv)
//{
////	arr = read(argc, argv, 0, 0);
//	grafon();
//	return(0);
//}
