

unsigned long long fact(unsigned long long val)
{
	if(val == 0)
		return 1;
	unsigned long long ret = 1;
	while(val != 1)
		ret *= val--;
	return ret; 
}
