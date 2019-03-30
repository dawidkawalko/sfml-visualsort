#ifndef OPTION_HPP
#define OPTION_HPP

#include <string>

class Option
{
public:
	/**
	* Default constructor
	*/
	Option() : Option("") {}

	/**
	* Constructor, sets the value of this option
	*
	* @param value Option value
	*/
	explicit Option(const std::string& value) : m_value(value) {}

	/**
	* Returns the value as int
	*/
	operator int() const;

private:
	std::string m_value;
};

#endif // OPTION_HPP