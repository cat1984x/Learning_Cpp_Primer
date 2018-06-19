#include <iostream>
#include <string>
#include <deque>
#include <stack>
#include <stdexcept>

using namespace std;

//very difficult,need to review

enum obj_type {LP, RP, ADD, SUB, VAL};

struct obj
{
	obj(obj_type type, double val = 0)
	{
		t = type;
		v = val;
	}
	obj_type t;
	double v;
};

inline void skipws(string &exp, size_t &p)
{
	p = exp.find_first_not_of(" ", p);
}

inline void new_val(stack<obj> &so, double v)
{
	if(so.empty() || so.top().t == LP)
	{
		so.push(obj(VAL, v));
		cout << "push " << v << endl;
	}else if(so.top().t == ADD || so.top().t == SUB)
	{
		obj_type type = so.top().t;
		so.pop();
		if(type == ADD)
			cout << "pop +" <<endl;
		else
			cout << "pop -" << endl;
		cout << "pop " << so.top().v << endl;

		if(type == ADD)
			v += so.top().v;
		else 
			v = so.top().v - v;
		so.pop();
		so.push(obj(VAL, v));
		cout << "push " << v << endl;
	}else
	throw invalid_argument("miss operator");
}


int main()
{	
	string exp;
	cout << "Please input expression: " << endl;
	while(getline(cin, exp))
	{
		stack<obj> so;
		size_t p = 0, q;
		double v;
		while(p < exp.size())
		{
			skipws(exp, p);
			if(exp[p] == '(')
			{
				so.push(obj(LP));
				++p;
				cout << "push LP" << endl; 
			}else if(exp[p] == '+' || exp[p] == '-')
			{
			//new operator
				if(so.empty() || so.top().t != VAL)
					throw invalid_argument("miss value");
				if(exp[p] == '+')
					so.push(obj(ADD));
				else
					so.push(obj(SUB));
				++p;
				cout << "push " << exp[p - 1] << endl;
			}else if(exp[p] == ')')
			{
				++p;
				if(so.empty())
					throw invalid_argument("miss match right parenthesis");
				if(so.top().t == LP)
					throw invalid_argument("empty parenthesis");
				if(so.top().t == VAL)
				{
					v = so.top().v;
					so.pop();
					cout << "pop " << v << endl;

					if(so.empty() || so.top().t != LP)
						throw invalid_argument("miss match right parenthesis");

					so.pop();
					cout << "pop LP" << endl;
					new_val(so, v);
				}else
				throw invalid_argument("miss value");
			}else
			{
				v = stod(exp.substr(p), &q);
				p += q;
				new_val(so, v);
			}
		}

		if(so.size() != 1 || so.top().t != VAL)
			throw invalid_argument("illegal expression");

		cout << so.top().v << endl;
	}

	return 0;
}
