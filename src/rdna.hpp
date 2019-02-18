#include <iostream>
#include <random>
#include <string>

using namespace std;
string randDNA(int seed, string bases, int n)
{
	string DNA;
	mt19937 eng(seed); 
	uniform_int_distribution<int> unifrm(0,bases.size()-1);
	
	for(int n=0; n < 20 ; n++)
		{
			DNA+= bases[unifrm(eng)];
		}
		return DNA;
	
}
