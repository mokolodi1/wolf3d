#include "wolf3d.h"

void				set_wall_directions(t_camera *camera)
{
	if (camera->direction < M_PI_4)
	{
		camera->horizontal_wall_direction = 1;
		camera->vertical_wall_direction = 1;
	}
	else if (camera->direction < M_PI_2)
	{
		camera->horizontal_wall_direction = 1;
		camera->vertical_wall_direction = -1;
	}
	else if (camera->direction < M_PI_4 + M_PI_2)
	{
		camera->horizontal_wall_direction = -1;
		camera->vertical_wall_direction = -1;
	}
	else
	{
		camera->horizontal_wall_direction = -1;
		camera->vertical_wall_direction = 1;
	}
}