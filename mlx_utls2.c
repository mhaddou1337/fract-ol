#include  "fract_ol.h"

int pre_mlx(char *fractal_name)
{
    void	*mlx;
	void	*mlx_win;
	mlx = mlx_init();
    fractal_name = ft_strjoin("fractol:  ",fractal_name);
    if(!mlx)
        return(1);
    else if (!fractal_name)
        return(free(mlx),1);
    mlx_win = mlx_new_window(mlx, WIDTH, HEIGHT, fractal_name);
    if(!mlx_win)
        return (free(mlx),1);
    mlx_loop(mlx);
    free(mlx_win);
    return(0);
}
