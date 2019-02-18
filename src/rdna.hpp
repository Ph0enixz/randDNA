#include <iostream>
#include <random>
#include <string>

using namespace std;

   string randDNA(int seed, string bases, int n)
{
	string DNA;
	mt19937 eng(seed); 
	uniform_int_distribution<int> un(0,bases.size()-1);
	
	for(int i=0; i < n ; i++)
		{
			DNA+= bases[un(eng)];
		}
		return DNA;
	
}
 
