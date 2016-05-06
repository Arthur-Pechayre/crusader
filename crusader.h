#ifndef		__CRUSADER_H__

/*** INCLUDES ***/

#include	<unistd.h>
#include 	<fcntl.h>
#include	<stdlib.h>
#include 	<stdio.h>

/*** DEFINES ***/

#define 	__CRUSADER_H__
#define 	SIZE_MAX_ARRAY 8192

/*** STRUCTURES ***/

typedef struct 			s_coord
{
	int					x;
	int					y;
}			   			t_coord;

typedef struct 			s_grid
{
	char 				**tab;
	int 				l;
}						t_grid;

typedef struct 			s_location
{
	t_coord				start;
	t_coord				end;
	struct s_location	*next;
}						t_location;

typedef struct 			s_locations_list
{
	t_location 			*first;
}						t_locations_list;

typedef struct 			s_word_tf
{
	char 				*str;
	t_locations_list 	*locations_list;
	struct s_word_tf 	*next;
}			   			t_word_tf;

typedef struct 			s_words_list
{
	t_word_tf			*first;
}						t_words_list;

typedef struct 			s_data
{
	t_words_list 		*words_list;
	t_grid 				*grid;
} 						t_data;

typedef enum 			e_boolean
{
	TRUE, FALSE
} 						bool;

typedef struct 			s_checkers_menu
{
	char 				index;
	bool				(*function)(t_grid *, t_coord, t_word_tf *, int);
}						t_checkers_menu;

/*** PROTOTYPES ***/

/*--- init ---*/

t_data 					*init(char **, t_data *);
bool					check_args(int);
bool					openables(char **);
char 					*get_string_from_file(int);

/*--- solve ---*/

int 					solve(t_data *);

/*--- lists managers ---*/

t_locations_list*   	init_locations_list();
t_words_list*     		init_words_list();
int    					stack_words_list(t_words_list *, char *);
int    					stack_location(t_locations_list *, t_coord);

/*--- checkers_directionals ---*/

bool 					check_next_u(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_d(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_l(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_r(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_ul(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_ur(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_dl(t_grid *, t_coord, t_word_tf *, int);
bool 					check_next_dr(t_grid *, t_coord, t_word_tf *, int);

/*--- my_functions ---*/

void    				my_putchar(char);
void    				my_putstr(char *);
void    				my_put_nbr(int);
char 					**my_explode(char *, char);
int 					my_count_words(char *, char);
int						my_open(char *);

/*--- display functions ---*/

void					display_soluce(t_data *data);
void					display_info(t_word_tf *info);

void					freedata_word(t_word_tf *data);
void					freedata_grid(t_grid *data);

#endif