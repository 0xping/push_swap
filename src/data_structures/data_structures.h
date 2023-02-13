/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_structures.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-lfd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:24:37 by aait-lfd          #+#    #+#             */
/*   Updated: 2023/02/13 10:01:32 by aait-lfd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_STRUCTURES_H
# define DATA_STRUCTURES_H

# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <sys/types.h>
# include <unistd.h>
# include <wchar.h>

/*------------------------------------------------------------------ */
/*-------------------------- LINKED LIST  -------------------------- */
/*------------------------------------------------------------------ */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
int					ft_lstsize(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

/*------------------------------------------------------------------ */
/*----------------------------- STACK ------------------------------ */
/*------------------------------------------------------------------ */
typedef struct s_stack
{
	void			*content;
	struct s_stack	*next;
}					t_stack;

int					ft_stack_isempty(t_stack *stack);
void				ft_stack_push(t_stack **head, void *content);
void				ft_stack_pop(t_stack **head, void (*del)(void *));
t_stack				*ft_stack_new(void *content);
int					ft_stack_size(t_stack *stack);
void				*ft_stack_peek(t_stack *stack);
void				ft_stack_iter(t_stack *stack, void (*f)(void *));

#endif
