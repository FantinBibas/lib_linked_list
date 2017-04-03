/*
** lklDestroy.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 21:44:36 2017 Fantin Bibas
** Last update Mon Apr  3 21:53:11 2017 Fantin Bibas
*/

#include <stdlib.h>
#include "liblkl.h"

void		lklDestroy(t_lklist *list)
{
  t_lklelem	*elem;

  if (list == NULL)
    return ;
  while (list->list != NULL)
    {
      elem = list->list->next;
      free(list->list);
      list->list = elem;
    }
  free(list);
}
