#include <iostream>
#include <unordered_map>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ifstream in("11_38_1_data.txt");
	if(!in)
	{
		cout << "can't open file";
		return -1;
	}

	unordered_map<string, size_t> word_count;
	string word;
	while(in >> word)
		++word_count[word];

	for(const auto &w : word_count)
		cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? " times " : " time") << endl;

	cout << "bucket_count: " << word_count.bucket_count() << endl;
	cout << "max_bucket_count: " << word_count.max_bucket_count() << endl;
	int n = word_count.bucket_count();
	for(int i = 0; i != n ; ++i)
		cout << "bucket_size(" << i << "): " << word_count.bucket_size(i) << endl;
	cout << "bucket(beautiful): " << word_count.bucket("beautiful") << endl;
	cout << "bucket(world): " << word_count.bucket("world") << endl;

	return 0;
}