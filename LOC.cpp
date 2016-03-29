// Jaron Patena
// Compile: c++ -o LOC LOC.cpp
// Execute: ./LOC < filename
#include <iostream>
#include <string>

using namespace std;

class Counter
{
	private:
		int numlines; // number of lines
		string line; // input string
	public:
		void linesofcode();
};

void Counter::linesofcode() // counts LOC
{
	numlines = 0;
	while (cin.good())
	{
		getline(cin, line);
// if comment found or empty line skip to next iteration
		if(line.find("//") == 0 || line.empty() == 1) continue;
		numlines += 1;
	}	
	cout << "Total LOC: " << numlines << endl;
}

int main()
{ 
	Counter count;
	count.linesofcode();
	return 0;
}
