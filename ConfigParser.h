#ifndef CONFIG_PARSER
#define CONFIG_PARSER

#include <algorithm>
#include <fstream>
#include <map>
#include <sstream>

class ConfigParser
{
  private:
    std::string inputfileName;
    std::map<std::string, std::string> values;

    std::string findValue(std::string const &) const;

  public:
    ConfigParser() {}
    ConfigParser(std::string const &filename) { load(filename); }

    bool getBool(std::string const &) const;
    char getChar(std::string const &) const;
    double getDouble(std::string const &) const;
    float getFloat(std::string const &) const;
    int getInt(std::string const &) const;
    short getShort(std::string const &) const;
    std::size_t getSizeT(std::string const &) const;
    std::string getString(std::string const &) const;

    void load(std::string const &);
};

#endif

