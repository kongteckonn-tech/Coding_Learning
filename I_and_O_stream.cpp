#include<iostream>
#include<string>
using namespace std;

/*
					   ios
					 /	   \
					/		\
				istream		ostream
				/	\		/	\
		ifstream	iostream	ofstream
						|
					 fstream
*/

/* stream class */
/* cin get input from keyboard, cout output to terminal */
;
	//int main()
	//{
	//	char name[25] = "";
	//	cin >> name;
	//	cout << name << " is handsome." << endl;
	//	return 0;
	//}

/* commen function in cin */

/* cin.get() and cin.ignore() */
;
//int main()
//{
//	//char tmp = cin.get();
//	//cout << tmp << endl;
//	//cin.ignore(2);
//	//cout << tmp << endl;
//	//cin.get(tmp);
//	//cout << tmp << endl;
//
//	char name[20] = "";
//	cin.get(name, 20, '\\');
//	cout << name << endl;
//	return 0;
//}

/* cin.getline() */

// same as cin.get() but it will ignore the delimiter 
// and the delimiter will not be stored in the array

/* cout */

// cout.setf(ios::scientific)
// cout.width()
// cout.fill()

// int main()
// {
//     cout.setf(ios::scientific); // scientific to output float value
//     cout.width(20);
//     cout << 1.265 << endl;
//     cout.fill('*');
//     return 0;
// }

// hex dec oct

// int main()
// {
//     cout.setf(ios::showbase | ios::uppercase);
//     cout << hex <<  520 << endl;
//     cout << oct <<  520 << endl;
//     cout << dec <<  520 << endl;
//     return 0;
// }

/* #include<sstream> */

// #include<sstream>
// int main()
// {
//     int num = 12345;
//     char str[25];
//     stringstream stream;
//     stream << num << '\0';
//     cout << str << endl;
//     return 0;
// }

/* File Class */

// #include<fstream>
// void Acsii()
// {
//     ifstream input("./in.txt");
//     // determine whather open or not 
//     if(!input.is_open())
//     {
//         cerr << "Fail to open" << endl;
//     }
//     else cout << "Sucessful" << endl;
//     input.close();
// }
// int main()
// {
//     Acsii();
//     return 0;
// }
