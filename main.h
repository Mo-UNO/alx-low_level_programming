#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b,unsigned iint n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *S, char *s, char c);
unsigned int _strspn(char *, char *accept);
char *_strbrk(char *s, char *accept);
char *_strstr(char *haysatck, char *needle);
void print_chessboard(char(*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif /* MAIN_H */
