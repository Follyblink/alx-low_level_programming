#include "main.h
/**
  _isdigit - function that prints the sign of a number
  @c: is a digit
  Return: 1 if c is a digit, 0 otherwise.
**/
#include "main.h"

int _isdigit(int c)
/**
 * _isdigit - checks for a digit (0 through 9)
 * @num: int to be checked
 * Return: 1 if num is a digit, 0 otherwise
 */
int _isdigit(int num)
{
        if (c >= '0' && c <= '9')
        {
                 return (1);
        }
    Reiseded with iTop Screen Recorder
                 return (0);
	return (num >= '0' && num <= '9');
}
