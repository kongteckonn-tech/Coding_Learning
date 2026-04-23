#include<iostream>
#include<regex>
using namespace std;

/* Regular expression (regex) 指定字符串规则*/

// . [] - ^ ? + {N} * 
//void test()
//{
//	// .
//	string name = "K";
//	regex re(".");
//	cout << regex_match(name, re) << endl;// . match any char
//	// []
//	string name1 = ".k";
//	regex re1("[.]k"); // [.] only can match character .
//	cout << regex_match(name1, re1) << endl;// [...] match character inside []
//	string name2 = "aK";
//	regex re2("[abc]K");
//	cout << regex_match(name2, re2) << endl;// can match aK, bK, cK
//	// -
//	string name3 = "9K";
//	regex re3("[0-9]K");
//	cout << regex_match(name3, re3) << endl;// - means until 
//	// ^
//	string name4 = "9K";
//	regex re4("[^0-9]K"); // 除了 0-9
//	cout << regex_match(name4, re4) << endl;// ^ means except
//	// ?
//	string name5 = "K";
//	regex re5("[0-9]?K"); // 0-9 can appear or disappear
//	cout << regex_match(name5, re5) << endl;// ? 可以有也可以没有
//	// +
//	string name6 = "950K";
//	regex re6("[0-9]+K"); // 0-9 can appear many times
//	cout << regex_match(name6, re6) << endl;// + appear many times 
//	// {N}
//	string name7 = "+601110522039"; // format + (60) 1110522039
//	regex re7("[+][0-9]{2}1[0-9]{9}"); // {N} determine how many characters appear 
//	cout << regex_match(name7, re7) << endl;// {N}
//	// {N,}
//	string name8 = "0123456789"; 
//	regex re8("[0-9]{9,}"); // {N,} at least N times
//	cout << regex_match(name8, re8) << endl;// {N,} >= N match
//	// {N,M}
//	string name9 = "0123456789"; 
//	regex re9("[0-9]{1,10}"); // {N,M} at least N times, at most M times 
//	cout << regex_match(name9, re9) << endl;// {N,} N <= x <= M match
//	// *
//	string name10 = "00000"; 
//	regex re10("0*"); // 
//	cout << regex_match(name10, re10) << endl;// * 前面的有吗， 没有就不 match，有或多个都算有
//}
//int main()
//{
//	test();
//	return 0;
//}

// special character 

// \\ () |

//void test()
//{
//	// \\ 
//	string str = "[]";
//	regex re("\\[\\]");
//	cout << regex_match(str, re) << endl; // \\ change the meaning of character 
//	// ()
//	string str1 = "192.168.0.1";
//	regex re1("[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}"); // too long and some are same
//	regex re_1("([0-9]{1,3}\\.){3}[0-9]{1,3}"); // () avoid too many similiar 
//	cout << regex_match(str1, re_1) << endl; // () avoid too many similiar
//	// |
//	string str2 = "make love";
//	string str_2 = "maye love";
//	string str__2 = "maaa love";
//	regex re2("ma(ye|ke).{0,}"); // | or 
//	cout << regex_match(str__2, re2) << endl; // | means OR
//}
//int main()
//{
//	test();
//	return 0;
//}

/* Regular search */

// ^ outside[]

//void test()
//{
//	// ^ outside[]
//	string str = "Kong I love Kong";
//	regex re("Kong");
//	regex re_("^Kong");
//	cout << regex_search(str, re) << endl;
//	cout << regex_search(str, re_) << endl; // add ^ in front means first str need Kong
//	// $ 
//	string str1 = "Kong I love";
//	regex re1("Kong");
//	regex re_1("$Kong");
//	cout << regex_search(str, re1) << endl;
//	cout << regex_search(str, re_1) << endl; // add & in front means last str need Kong
//}
//int main()
//{
//	test();
//	return 0;
//}

// \\b \\B

//void test()
//{
//	// \\b_ find str or char start with _
//	smatch sm; // string 
//	cmatch cm; // const char*
//	string str = "kong teck onn";
//	regex re("\\bt[a-z]*[^ ]"); // 找到 t 开头的直到 space 结束
//	cout << regex_search(str, sm, re) << endl;
//	cout << sm[0] << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

/* regular replace */

// replace char or str
//void test()
//{
//	// \\d digital 
//	string address = "teckonn040511@gmail.com";
//	regex re("\\d{6}");
//	cout << regex_replace(address, re, "030531") << endl;
//}
//int main()
//{
//	test();
//	return 0;
//}

/*
\\d [0-9]			数字
\\D [^0-9]			非数字
\\w [a-zA-Z0-9]		数字，字母,下划线
\\W [^a-zA-Z0-9]	非数字，字母，下划线
\\s [\r\t\n\f]		空白char
//S [^\r\t\n\f]		非空白char
*/

/* 
excersice: email 
1. input email determine format correct or not 
2. if no try again 
*/

//int main()
//{
//	bool input = true;
//	do
//	{
//		string address;
//		cout << "Your Emial: ";
//		getline(cin, address);
//		regex email_check("[a-z][a-z|0-9]{0,}@gmail\\.com");
//		if (regex_match(address, email_check))
//			break;
//		else
//		{
//			cout << "Format error, try again" << endl;
//			input = false;
//		}
//	}while (!input);
//	cout << "Your email are recorded." << endl;
//	return 0;
//}

/*
excersice2: phone number
1. input phone number determine format correct or not
2. if no try again
*/

//enum COUNTRY_CODE
//{
//	MY = 1,
//	SIN,
//	CN,
//};
//bool Input_And_Check(string phone)
//{
//	regex check("[01](\\d(-)?){2}\\d{7,8}");
//	return regex_match(phone, check);
//}
//int main()
//{
//	int input;
//	do
//	{
//		cout << "-Where are u from-" << endl;
//		cout << "   1. Malaysia" << endl;
//		cout << "   2. Singapore" << endl;
//		cout << "   3. China" << endl;
//		cin >> input;
//		if (input < 1 || input > 3)
//			cout << "Error input try again" << endl;
//	} while (input < 1 || input > 3);
//	string phone;
//	do
//	{
//		cout << "Your phone number: ";
//		cin >> phone;
//		if (Input_And_Check(phone))
//			break;
//		else cout << "Try again" << endl;
//	}while (true);
//	string output;
//	if (input == MY)
//	{
//		output = "+60 ";
//	}
//	else if (input == SIN)
//	{
//		output = "+65 ";
//	}
//	else if (input == CN)
//	{
//		output = "+86 ";
//	}
//	if (phone.front() == '0')
//	{
//		phone = phone.substr(1);
//	}
//	cout << output;
//	for (int i = 0; i < phone.length(); i++)
//	{
//		if (phone[i] == '-')
//			continue;
//		cout << phone[i];
//	}
//	cout << " is your phone number and recorded." << endl;
//	return 0;
//}
