#include "../../std_lib_facilities.h"
#include "./Drill.h"

// function definition
void drill()
{
	string first_name, friend_name;
	char friend_sex;
	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	cout << "Enter your best friend's name: ";
	cin >> friend_name;
	cout << "Enter their sex (m or f): ";
	cin >> friend_sex;

	// letter
	string line1 = "Dear " + first_name + ",\n";
	string line2 = "How are you doing? I'm fine\n";
	string line3 = "I was scammed by rng a lot today, imagine bouncing the hull of an Emill II with a Kran\n";

	string call_friend2 = "???";
	if (friend_sex == 'm' || friend_sex == 'M')
	{
		call_friend2 = "if you see " + friend_name + " please ask him to call me";
	}
	else if (friend_sex == 'f' || friend_sex == 'F')
	{
		call_friend2 = "if you see " + friend_name + " please ask her to call me";

	}

	cout << line1 << line2 << line3 << call_friend2;
}

// linker warning: Drill.obj LNK4042: object specified more than once; extras ignored
// renaming .cpp file to .h can cause this -> remove .h file from dir and add it again

// C6236