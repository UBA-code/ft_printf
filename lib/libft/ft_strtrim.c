#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  char *finalStr;
  int i;
  int j;

  j = -1;
  i = -1;
  finalStr = malloc(sizeof(char) * ft_strlen((char *) s1));
  if (s1[0] == *set)
    i = 0;
  while (s1[++i])
    finalStr[++j] = s1[i];
  if (finalStr[j] == *set)
    finalStr[j] = '\0';
  return (finalStr);
}