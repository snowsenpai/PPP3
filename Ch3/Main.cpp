#include "../../std_lib_facilities.h"
#include "./Drill.h"

int main()
{
	// input, variables and types
	/*cout << "Enter your first name and age: ";
	string first_name = "???";
	int age = 0;
	cin >> first_name;
	cin >> age;
	double age_in_months = age * 12;
	cout << "Name " << first_name << " nice to meet you \n";
	cout << "You are " << age_in_months << " months old \n";*/
	
	// operations and operands
	/*cout << "Please enter a positive Integer value(n): ";
	int n = 0;
	int m = 2;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\nm ==" << m
		<< "\nn/m * m + n % m == " << n / m * m + n % m
		<< "\n";*/
	/*cout << "Enter your first and last name\n";
	string first;
	string last;
	cin >> first >> last;
	if (first == last) cout << "that's the same name twice\n";
	if (first < last)
		cout << first << " is alphabetically before " << last << "\n";
	if (first > last)
		cout << first << " is alphabetically after " << last << "\n";
	string name = first + ' ' + last;
	cout << "Hello, " << name << "\n";*/

	// assignments and initialization
	// initialization: give a variable it's initial value
	//int x = 5;
	//assignment: give a variable a new value
	//x = 9;
	//detect repeated words
	//int number_of_words = 0;
	//int repeated_words = 0;
	//string previous = " ";
	//string current;
	//while (cin >> current) {
	//	++number_of_words;
	//	if (current == previous) {
	//		++repeated_words;
	//		cout << "Repeated word: " << current << "\n";
	//	}
	//	previous = current;
	//} // terminate program by giving an end of input character "ctrl + z" on windows, "ctrl + d" on a Linux or Unix machine
	//cout << "Total number of words: " << number_of_words << "\n" << "Total number of repeated words : " << repeated_words << "\n";

	/// names

	/// Types and Objects

	/// Type Safety
	// safe conversion
	// bool -> char
	// bool -> int
	// bool -> double
	// char -> int
	// char -> double
	// int -> double

	//char c = 'x';
	//int i1 = c;
	//int i2 = 'x';
	//char c2 = i1;
	//cout << c << ' ' << i1 << ' ' << c2 << '\n';
	
	//unsafe conversion, values will be truncated!
	// double -> int
	// double -> char
	// double -> bool
	// int -> char
	// int -> bool
	// char -> bool

	//int a = 20000;
	//char b = a; // a will ba narrowed into b
	//int e = b;
	//if (a != b)
	//	cout << "oops " << a << " != " << e << "\n";
	//else
	//	cout << "wow! we have large characters\n";

	double d = 0;
	/*while (cin >> d)
	{
		int i = d;
		char c = i;
		int i2 = c;
		cout << "d==" << d
			<< " i==" << i
			<< " i2==" << i2
			<< " char(" << c << ")\n";
	}*/
	double x = 2.7;
	// ..code
	int y = x; // y = 2 and .7 is lost

	// form C++11
	// "{} list notation" does not allow narrowing unlike "= notation"
	//double f{ 2.7 };
	//int g{ f }; // err

	//int h{ 1000 };
	//char v{ 2000 }; // err

	// {} list-based notation is referred to as universal and uniform notation


	/// Drill
	drill();
}