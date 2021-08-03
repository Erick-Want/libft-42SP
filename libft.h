#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>

int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strrchr(const char *s, int c);
size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
int ft_isprint(int c);
int ft_isdigit(int c);
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
void ft_bzero(void *s, size_t n);
int ft_atoi(const char *nptr);
void *ft_memset(void *s, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);


#endif
