int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int count = 0;
	unsigned long int mask = 1;

	for (mask = 1; mask; count++)
		mask <<= 1;
	/*end-for*/

	if(index > count)
		return (-1);

	mask = 1;
	mask <<= (index);
	mask = ~mask;

	n[0] = n[0] & mask;

	return (1);
}

