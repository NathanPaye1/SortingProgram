#include "sort.h"


namespace sorting{

        bool SortByLength::operator()(const std::string& a ,const std::string& b) const
        {
		return a.size() < b.size();
        }

        bool sortDesc(int a, int b)
        {
		return a > b;
        }
}
