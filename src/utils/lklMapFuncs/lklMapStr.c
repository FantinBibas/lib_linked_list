/*
** lklMapStr.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Tue Apr  4 17:02:46 2017 Fantin Bibas
** Last update Tue Apr  4 17:47:17 2017 Fantin Bibas
*/

#include <string.h>
#include <stdlib.h>

void	*lklUpper(void *a, int fr)
{
  char	*str;
  int	i;

  str = strdup((char *)a);
  i = -1;
  while (str[++i] != '\0')
    if (str[i] >= 97 && str[i] <= 122)
      str[i] -= 32;
  if (fr != 0)
    free(a);
  return (str);
}

void	*lklLower(void *a, int fr)
{
  char	*str;
  int	i;

  str = strdup((char *)a);
  i = -1;
  while (str[++i] != '\0')
    if (str[i] >= 65 && str[i] <= 90)
      str[i] += 32;
  if (fr != 0)
    free(a);
  return (str);
}
