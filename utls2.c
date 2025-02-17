#include  "fract_ol.h"
void destroy(void *mlx , void *mlx_win, void *fractal_name)
{
    mlx_destroy_window(mlx,mlx_win);
    mlx_destroy_display(mlx);
    free(fractal_name);
    free(mlx);
    mlx = NULL;
}
int pre_mlx(char *fractal_name)
{
    windo_info data;
	data.mlx = mlx_init();
    fractal_name = ft_strjoin("fractol:  ",fractal_name);
    if(!data.mlx)
        return(1);
    else if (!fractal_name)
        return(free(data.mlx),1);
    data.mlx_win = mlx_new_window(data.mlx, WIDTH, HEIGHT, fractal_name);
    if(!data.mlx_win)
        return (free(data.mlx),free(fractal_name),1);
    //distroy part
    //idk if i should work with it here but ;)    
    mlx_loop(data.mlx);
    
    destroy(data.mlx,data.mlx_win,fractal_name);
    data.mlx = NULL;
    return(0);
}
