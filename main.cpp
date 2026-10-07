#include <algorithm>
#include "sort.h"
#include <iostream>

using namespace std;
using namespace sorting;

int main()
{
	cout << "Sort Program\n\n";

	//Integer sort
	vector<int> nums { 2,6,3,4,8,11,12,45,5,34,32,24,21,23,25,28,13,14,17,18,1,0};

	cout << "Original Numbers:  ";
	displayVector(nums); // use dynamic displayVector function

	//Ascending
	sort(nums.begin(), nums.end());
	cout << "Sorted Ascending:  ";
	displayVector(nums);

	//Descending using function
	sort(nums.begin(), nums.end(), sortDesc);
	cout << "Sorted Descending: ";
	displayVector(nums);

	cout << endl;

	//string sort
	//vector<string> words {"This","Sentence","Is","Not","Sorted","Or","Is","It"};
	vector<string> words {"This","Is","Not","A","Song","It's","A","Sandwich","What","Would","Make","You","Think","Otherwise"};
	cout << "Original Words:            ";
	displayVector(words);

	//Alphabetical Asc
	sort(words.begin(), words.end());
	cout << "Alphabetical Sort:         ";
	displayVector(words);

	//By length using functor Asc
	sort(words.begin(),words.end(), SortByLength());
	cout << "Sort by Length:            ";
	displayVector(words);

	//reverse alphabet using lambda
	sort(words.begin(), words.end(), [](const string& a, const string& b)
		{
			return a > b;
		});
	cout << "Reverse Alphabetical Sort: ";
	displayVector(words);
	cout << endl;

	//stable sort
	vector<pair<string, double> > fruits {
		{"apple", 1.99}, {"banana", 0.50}, {"pear", 1.00}, {"kiwi", 2.50}, {"apple", 2.99}
	};
	cout << "Original Fruit order: ";
	for(auto& f : fruits) cout << "(" << f.first << "," << f.second << ") ";
	cout << endl;

	//sort by price
	sort(fruits.begin(), fruits.end(), [](auto& a, auto& b) {return a.second < b.second; });

	//stable sort
	cout << "Sorted By Price:      ";
	for(auto& f : fruits) cout << "(" << f.first << "," << f.second << ") ";
	cout << "\n\n";
	return 0;
}
