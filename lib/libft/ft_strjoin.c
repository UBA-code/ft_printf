#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *finalStr;
  int i;
  int j;

  i = -1;
  j = -1;
  finalStr = malloc(sizeof(char) * (ft_strlen((char *) s1) + ft_strlen((char *) s2)) + 1);
  if (finalStr == NULL)
    return (NULL);
  while (s1[++i])
    finalStr[++j] = s1[i];
  i = -1;
  while (s2[++i])
    finalStr[++j] = s2[i];
  finalStr[++j] = '\0';
  return (finalStr);
}