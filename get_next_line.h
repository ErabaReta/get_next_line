/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eouhrich <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:01:59 by eouhrich          #+#    #+#             */
/*   Updated: 2023/11/26 18:02:01 by eouhrich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
//==============================
char	*deviser(char **big_string);
int		reader(char **buffer, ssize_t *readed, char **big_string, int fd);
int		rester(char **big_string, char **rest);
int		return_handler(char **big_string, char **rest, char **buffer, int fd);
char	*get_next_line(int fd);
//==============================
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *s, char mode);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);
#endif
