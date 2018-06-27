#include <iostream>
#include <vector>
#include <memory>
#include <string>

using namespace std;

struct destination
{
	string name;
};

struct connection
{
	string name;
};

connection connect(destination *d)
{
	cout << "connecting to " << d->name << endl;
	return connection {"connection to " + d->name};
}

void disconnect(connection c)
{
	cout << "disconnecting " << c.name << endl;
}

void end_connection(connection *c)
{
	disconnect(*c);
}

void f(destination &d)
{
	connection c = connect(&d);
	shared_ptr<connection> p(&c, end_connection);
	cout << "google something..." << endl;
}

int main()
{
	destination d{"google"};
	f(d);

	return 0;
}