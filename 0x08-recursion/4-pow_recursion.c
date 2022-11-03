/**
* _pow_recursion - compute power recursively
* @x: base
* @y: index
*
* Return: x to power  y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	/*end-if*/
}

