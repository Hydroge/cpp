int gcd(int a, int b) {
	return !b ? a : gcd(b, a % b);
}

/*
Example:
 (89,55)
=(55,34)
=(34,21)
=(21,13)
=(13,8)
=(8,5)
=(5,3)
=(3,2)
=(2,1)
=(1,0)
return 1;
*/
