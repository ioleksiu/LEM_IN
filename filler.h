/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ioleksiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/28 17:29:06 by ioleksiu          #+#    #+#             */
/*   Updated: 2017/06/28 17:29:07 by ioleksiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# define BUFF_SIZE 1
# include <stdlib.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdio.h>
#include <unistd.h>

typedef struct		s_get
{
    char			*rest;
    int				fd;
    struct s_get	*next;
}					t_get;

int					get_next_line(const int fd, char **line);
//GNL
void				ft_bzero(void *s, size_t n);
char				*ft_strchr(const char *s, int c);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strncpy(char *dest, const char *sorc, size_t len);
char				*ft_strnew(size_t size);
char				*ft_strcat(char *s1, const char *s2);
size_t				ft_strlen(const char *s);
#endif