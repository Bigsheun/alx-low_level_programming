/**
* clear_bit - sets bit at index to 0
* @n: source number
* @index: bit index
*
* Return: 1 =sucess -1 = fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int mask = 1;

	for (mask = 1; mask; count++)
		mask <<= 1;
	/*end-for*/

	if (index > count)
		return (-1);

	mask = 1;
	mask <<= (index);
	mask = ~mask;

	n[0] = n[0] & mask;

	return (1);
}

