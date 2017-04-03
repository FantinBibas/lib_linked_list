/*
** liblkl.h for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
** 
** Made by Fantin Bibas
** Login   <fantin.bibas@epitech.eu@epitech.net>
** 
** Started on  Mon Apr  3 13:30:17 2017 Fantin Bibas
** Last update Mon Apr  3 18:14:00 2017 Fantin Bibas
*/

#ifndef	LIBLKL_H_
#  define LIBLKL_H_

typedef struct	s_lklist t_lklist;
typedef struct	s_lklelem t_lklelem;

typedef t_lklist	*(*t_lklFuncMod)(void *, t_lklist *);
typedef void		*(*t_lklFuncElem)(int, t_lklist *);
typedef t_lklist	*(*t_lklFunc)(t_lklist *);

struct		s_lklelem
{
  void		*elem;
  t_lklelem	*next;
  t_lklelem	*prev;
};

struct		s_lklist
{
  t_lklelem	*list;
  t_lklFuncMod	append;
  t_lklFuncElem	get;
};

void		*lklElem(int, t_lklist *);
t_lklist	*lklCreate();
t_lklelem	*lklLast(t_lklist *);
t_lklist	*lklAppend(void *, t_lklist *);

#endif /* !LIBLKL_H_ */
