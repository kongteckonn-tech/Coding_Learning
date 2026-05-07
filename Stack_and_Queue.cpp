/* Stack_and_Queue */

/* Stack */
#include<stack>

int main()
{
	stack<int> st;
	for (int i = 0; i < 10; i++)
		st.push(i);
	while (!st.empty())
	{
		cout << st.top() << ' ';
		st.pop();
	}
	cout << endl << st.size() << endl;
	return 0;
}

/* emplace or push */

// emplace 可以直接 move construct 