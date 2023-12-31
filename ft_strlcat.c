#include <stdlib.h> 
size_t	ft_strlen(const char *s)
{
	size_t	leng;

	leng = 0;
	while (s[leng])
		leng++;
	return (leng);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size <= ft_strlen(dst))
		return (ft_strlen(src) + size);
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}