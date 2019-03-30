#include "config.hpp"

Config::~Config()
{
	if (m_stream.is_open())
	{
		m_stream.close();
	}
}

void Config::setPath(const std::string& path)
{
	m_path = path;
}

void Config::parse()
{
	openStream();
	m_options.clear();
	
	std::string line("");
	while (std::getline(m_stream, line))
	{
		size_t pos = line.find("=");
		std::string key = line.substr(0, pos);
		std::string value = line.substr(pos + 1);

		if (key.empty() || value.empty()) // skip empty keys/values
		{
			continue;
		}

		m_options[key] = Option(value);
	}
}

Option Config::get(const std::string& key) const
{
	if (m_options.find(key) == std::end(m_options))
	{
		throw std::exception("No option with that key");
	}

	return m_options.at(key);
}

void Config::openStream()
{
	if (!m_stream.is_open())
	{
		m_stream.open(m_path.c_str());
		if (!m_stream.good())
		{
			throw std::exception("File does not exist");
		}
	}
}