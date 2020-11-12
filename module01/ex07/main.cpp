#include <iostream>
#include <fstream>
#include <string>

#define ERR_NUM_ARGS "Usage: ./replace [filename] [string1] [string2]"
#define ERR_EMPTY_STRING "Args string1 and string2 must not be empty"
#define ERR_OPEN_IN "Error while opening file for reading"
#define ERR_OPEN_OUT "Error while opening file for writing"

int	print_error(std::string error_message) {
	std::cerr << error_message << std::endl;
	return (1);
}

int	replace(const std::string &to_find, const std::string &to_replace,
			std::ifstream &ifile, std::ofstream &ofile) {
	std::string buf;
	while (getline(ifile, buf)) {
		int pos;
		while ((pos = buf.find(to_find)) >= 0) {
			buf.replace(pos, to_find.length(), to_replace);
		}
		ofile << buf << std::endl;
	}
	return (0);
}

int	main(int ac, char **av) {
	if (ac != 4)
		return (print_error(ERR_NUM_ARGS));	
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty())
		return (print_error(ERR_EMPTY_STRING));
	std::string filename = av[1];
	std::ifstream ifile(filename);
	if (!ifile.is_open())
		return (print_error(ERR_OPEN_IN));
	std::ofstream ofile(filename + ".replace", std::ios::out | std::ios::trunc);
	if (!ofile.is_open())
		return (print_error(ERR_OPEN_OUT));
	int i = replace(s1, s2, ifile, ofile);
	ifile.close();
	ofile.close();
	return (i);
}
