# Basic Knowledge

Unit 
1. 8 bit = 1 byte
2. 1024 byte = 1 kb
3. 1024 kb = 1 mb
4. 1024 mb = 1 gb
5. 1024 gb = 1 tb
6. 1024 tb = 1 pb
----------------------------------------------------------------------------------------------------------------------------------------
Data Type 
1. Build-in type
	char
	int
	short
	long
	long long
	flout 
	double
2. User-defined type
	struct
	enum
	union
----------------------------------------------------------------------------------------------------------------------------------------
Variables 
1. Local Variables 
  - Inside {}
2. Global Variables
  - Outside {}
When the local variable and global variable have the same name, the local variables takes precedence
----------------------------------------------------------------------------------------------------------------------------------------
Scope 作用域
1. Local Variables 
  - end after }
2. Global Variables
  - end when project end
----------------------------------------------------------------------------------------------------------------------------------------
Constant
1. literally constant
  - 3.1415926
  - "Hello World"
  - 50
2. const variables
  - const int a = 50;
  - a cannot change when project start 
3. Macro constant #define
  - #define M 100
  - M cannot change when project start 
4. enum constant 
  enum color 
  {
    RED,
    YELLOW,
    BLUE,
  };
----------------------------------------------------------------------------------------------------------------------------------------
Character
1. size_t strlen ( const char * str ); calculate the number of charaters 
2. standard ACSII 
----------------------------------------------------------------------------------------------------------------------------------------
Commend 
1. // single line 
2. /**/ multiple line
----------------------------------------------------------------------------------------------------------------------------------------
Statement
1. Selection statement
 - if
 - if else
 - switch 
2. Iteration statement 
 - while
 - for 
 - do while
3. Jump statement
 - continue
 - break
 - return 
 - goto
----------------------------------------------------------------------------------------------------------------------------------------
Function
- function_type function_name ( parameters ) { process }
- exp:
- int add (int x, int y) { return x + y; }
----------------------------------------------------------------------------------------------------------------------------------------
Array
- store the datas that have same type
- arrry_type array_name[ the_number_of_ elements ] = { }
- exp:
- int num[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }
----------------------------------------------------------------------------------------------------------------------------------------
Operator
1. Arithmetic operator
 - ( + - * / % )
2. Shift operator 移位操作符
 - >> <<
3. Bitwise operator 位操作符
 - | & ^
4. Assignment operator 赋值
 - = += -= *= /= %=
 - ^= |= &= >>= <<=
5. Relational operator
 - == < > <= >= !=
6. Logic operator
 - || &&
7. Conditional operator
 - exp1 ? exp2 : exp3
 - if exp1 true then conduct exp2  
 - if exp1 false then conduct exp3
---------
Pointer
Address operator 
 - &
Pointer operator 
 - *
Pointer size
 - Pointers are 4 bytes on a 32-bit platform and 8 bytes on a 64-bit platform.
--------
