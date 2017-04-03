/*
** main.c for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 13:28:26 2017 Fantin Bibas
** Last update Mon Apr  3 13:47:02 2017 Fantin Bibas
*/

t_lklist	lklInsert(void *elem, t_lklist *list)
{
  t_lklist	*new;

  if ((new = malloc(sizeof(t_lklist))) == NULL)
    return (NULL);
  new->elem = elem;
  new->prev = (list != NULL ? list->prev : NULL);
  new->next = (list != NULL ? list : NULL);
  if (list != NULL)
    list->prev = new;
  if (new->prev != NULL)
    new->prev->next = new;
  return (new);
}
