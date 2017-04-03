/*
** liblkl.h for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 13:30:17 2017 Fantin Bibas
** Last update Mon Apr  3 13:31:58 2017 Fantin Bibas
*/

#ifndef	LIBLKL_H_
#  define LIBLKL_H_

typedef struct		s_lklist
{
  void			*elem;
  struct s_lklist	*next;
  struct s_lklist	*prev;
}			t_lklist;

#endif /* !LIBLKL_H_ */
