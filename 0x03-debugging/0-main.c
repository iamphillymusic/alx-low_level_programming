int main(void)
{
	char var[] = "_putchar";
	int ii;
	/*length of the array var*/
	int lenVar = sizeof(var) / sizeof(var[0]);

	for (ii = 0; ii < lenVar - 1; ii++)
	{
		_putchar(var[ii]);
	}
		_putchar('\n');

	return (0);
}
