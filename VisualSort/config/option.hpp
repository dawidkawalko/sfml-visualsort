#ifndef OPTION_HPP
#define OPTION_HPP

#include <string>

class Option
{
public:
	Option() : Option("") {}
	explicit Option(const std::string& value) : m_value(value) {}

	operator int() const;

private:
	std::string m_value;
};

#endif // OPTION_HPP