#include "libft/libft.h"#include "libft/get_next_line.h"#include <limits.h>#include <stdio.h> //delete plstypedef struct s_info{	char 	**map;	int 	room;	int 	ants;	int		s_e[2];	char	**file;	int		size;} 				t_info;typedef struct		s_room{	char			*name;	int				coord[3];	struct s_room	*next;}					t_room;typedef struct 		s_pointer{	t_room 	*room;	t_info 	*info;	char	*line;}					t_pointer;void validation(t_info *info, t_pointer *pPointer);void 			print_error(char *string, t_pointer *p);void init_info(t_info *info, t_pointer *pPointer);void number_of_ants(t_info *info, t_pointer *pPointer);void realloc_2d_array(t_info *info, char *line);void handle_rooms(t_room *rooms, t_info *pInfo, t_pointer *p);void handle_path(t_room *room, t_pointer *p, char *s);void find_paths(t_info *info, t_pointer *p);