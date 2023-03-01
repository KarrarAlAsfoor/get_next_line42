/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Karrar <kahamza@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 23:16:03 by Karrar            #+#    #+#             */
/*   Updated: 2023/03/01 23:06:42 by Karrar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_strchr(const char *str, int c);
char	*ft_substr(char const *str, unsigned int start, size_t len);
#endif