#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <boost/algorithm/string.hpp>
 
template <class Container>
void split(const std::string& str, Container& cont,
              const std::string& delims = " ")
{
    boost::split(cont, str, boost::is_any_of(delims));
}
 
int main()
{
    std::string str = "The quick brown fox jumps over the lazy dog";

    std::vector<std::string> words;
    split(str, words);
    std::copy(words.begin(), words.end(),
         std::ostream_iterator<std::string>(std::cout, "\n"));
}