/*
** lklSortFuncs.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Tue Apr  4 15:34:54 2017 Fantin Bibas
** Last update Tue Apr  4 15:53:16 2017 Fantin Bibas
*/

#include <string.h>

int	lklStrCmp(void *a, void *b)
{
  return (strcmp((char *)a, (char *)b));
}

int	lklIntCmp(void *a, void *b)
{
  int	ia;
  int	ib;

  ia = *((int *)a);
  ib = *((int *)b);
  return (ia - ib);
}

int	lklFloatCmp(void *a, void *b)
{
  float	ia;
  float	ib;

  ia = *((float *)a);
  ib = *((float *)b);
  return (ia - ib);
}
