#pragma once
#ifndef PAYE_SORT_H
#define PAYE_SORT_H

#include <string>
#include <vector>
#include <iostream>

namespace sorting
{
	struct SortByLength
	{
		bool operator()(const std::string& a ,const std::string& b) const;
	};

	bool sortDesc(int a, int b);

	template <typename T>
	void displayVector(const std::vector<T>& vec)
	{
		for (const T& element : vec)
		{
			std::cout << element << " ";
		}
		std::cout << std::endl;
	}
}

#endif
