#include <stdio.h>
#include <string.h>

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end);
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
return (is_palindrome_helper(s, 0, length - 1));
}
/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end) /* Base case: All characters checked */
{
return (1); /* String is a palindrome */
}
if (s[start] != s[end])
/* Check characters at positions start and end */
{
return (0); /* String is not a palindrome */
}
return (is_palindrome_helper(s, start + 1, end - 1));
/* Check next characters */
}
