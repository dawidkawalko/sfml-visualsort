#ifndef CONFIG_HPP
#define CONFIG_HPP

#include "option.hpp"
#include <string>
#include <fstream>
#include <map>

class Config
{
public:
	/**
	* Default constructor
	*/
	Config() : m_path("") {}

	/**
	* Destructor
	*/
	~Config();
	
	/**
	* Sets the path of the config file
	*
	* @param path Relative path to the file
	*/
	void setPath(const std::string& path);

	/**
	* Parses the config file, creates appropriate options
	*/
	void parse();

	/**
	* Returns an option for a given key
	*
	* @param key Option key (left side of the '=' sign in the config file)
	*/
	Option get(const std::string& key) const;

private:
	std::string m_path;
	std::ifstream m_stream;
	std::map<std::string, Option> m_options;

	void openStream();
};

#endif // CONFIG_HPP