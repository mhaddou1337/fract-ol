/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fract_ol.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 08:36:50 by mhaddou           #+#    #+#             */
/*   Updated: 2025/02/17 11:42:19 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACT_OL_H
#define FRACT_OL_H

#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include "minilibx-linux/mlx.h"
#include <stdlib.h>


#ifndef WIDTH
#define WIDTH 800
#endif

#ifndef HEIGHT
#define HEIGHT 800
#endif
size_t	ft_strlen(const char *s);
void	ft_putstr_fd(char *s, int fd);
int	ft_strcmp(const char *s1, const char *s2);
// fractal functions
int ft_julia(char *par1 , char *par2);
int ft_burningship(void);
int ft_mandelbrot(void);
int ft_atoi(const char *nptr);
int pre_mlx(char *fractal_name);
char	*ft_strjoin(char *s1, char *s2);
// fractal functions


typedef struct windo_info
{
    void *mlx;
    void *mlx_win;
} windo_info;

#endif