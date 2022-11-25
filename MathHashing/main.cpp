

#include <iostream>
#include <fstream>
#include <vector>


using namespace std;


long long FUNCTION1(long long m)
{
	long long p = 999999937;
	long long a = 89;
	long long b = 9;

	

	long double z = ((m/89.0) - floor(m/89.0)) * m % 44;

	return z;
}

long long FUNCTION2(double m)
{
	
	
	return 0;



}

int main() 
{
	
	vector<int> matricule;
	vector<int> hashing;

	
	ifstream file ("matricules.txt");
	while (!file.eof()) 
	{
		string result;
		file >> result;

		if (result != "") 
		{
			matricule.push_back(atoi(result.c_str()));
		}
		
	}


	for (int i = 0; i < matricule.size(); i++) 
	{
		
		hashing.push_back(FUNCTION1(matricule[i]));
	}


	for (int i = 0; i < hashing.size(); i++) 
	{
		cout << matricule[i] << " ------------- " << hashing[i] << endl;;
	}



	return 0;
}






