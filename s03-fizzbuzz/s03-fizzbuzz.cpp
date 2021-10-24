#include <iostream>
#include <string>

using std::logic_error;
using std::cout;
using std::cerr;
using std::endl;
using std::stoi;

auto main(int argc, const char* argv[]) -> int
{
	try
	{
		if (argc <= 1)
		{
			throw logic_error{ "Nie podano argumentu" };
		}

		if (argc > 2)
		{
			throw logic_error{ "Podano za duzo argumentow" };
		}

		int N = stoi(argv[1]);

		if (N < 1)
		{
			throw logic_error{ "Podana liczba musi byc wieksza od 0" };
		}

		for (int i = 1; i <= N; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				cout << i << " FizzBuzz" << endl;
			}
			else if (i % 3 == 0)
			{
				cout << i << " Fizz" << endl;
			}
			else if (i % 5 == 0)
			{
				cout << i << " Buzz" << endl;
			}
			else {
				cout << i << endl;
			}
		}

		return 0;
	}
	catch (logic_error ex)
	{
		cerr << ex.what() << endl;
		return 1;
	}
}