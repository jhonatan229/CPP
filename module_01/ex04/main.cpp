#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string ft_replace(std::string str, std::string n1, std::string n2){
	
	std::size_t found;
	std::string new_str;

	found = str.find(n1, 0);
	while (found != std::string::npos)
	{
		new_str.clear();
		new_str = str.substr(0, found) + n2 + str.substr(found + n1.length(), str.size());
		str.clear();
		str = new_str;
		found = str.find(n1, ++found);
	}
	return new_str;
}

void writeAndReplace(std::fstream *fread, std::fstream *fwrite, std::string n1, std::string n2){
	std::string line, new_line;
	std::stringstream buffer;

	buffer << fread->rdbuf();
	line = buffer.str();
	new_line = ft_replace(line, n1, n2);
	if (new_line.empty())
		*fwrite << line;
	else
		*fwrite << new_line;
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "error\n";
		return (1);
	}
	std::fstream fr, fw;
	std::string new_file, file, n1, n2;
	file = argv[1];
	new_file = file.append(".replace");
	n1 = argv[2];
	n2 = argv[3];
	fr.open(argv[1]);
	if (!fr){
		std::cout << "Error open the file!\n";
		return (1);
	}
	fw.open(new_file.c_str(), std::fstream::out);
	writeAndReplace(&fr, &fw, n1, n2);
	fr.close();
	fw.close();
	return 0;
}