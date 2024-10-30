
/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
int l;
for (l = 0; l < n && src[l] != '\0'; l++)
{
dest[l] = src[l];
}
while (l < n)
{
dest[l] = '\0';
l++;
}
return (dest);
}
