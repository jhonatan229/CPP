#include <iostream>
#include <fstream>
#include <string>

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
		found = str.find(n1, 0);
	}
	return new_str;
}

void writeAndReplace(std::fstream *fread, std::fstream *fwrite, std::string n1, std::string n2){
	std::string line, new_line;
	
	std::getline (*fread,line);
	while (line.empty() != true){
		std::cout << line << std::endl;
		new_line = ft_replace(line, n1, n2);
		if (new_line.empty())
			*fwrite << line;
		else
			*fwrite << new_line;
		line.clear();
		std::getline (*fread,line);
		if (line.empty() != true)
			*fwrite << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "error";
		return (1);
	}
	std::fstream fr, fw;
	std::string new_file, file, n1, n2;
	file = argv[1];
	new_file = file.append(".replace");
	n1 = argv[2];
	n2 = argv[3];
	fr.open(argv[1]);
	fw.open(new_file, std::fstream::out);
	if (!fr){
		std::cout << "Error open the file!";
		return (1);
	}
	writeAndReplace(&fr, &fw, n1, n2);
	fr.close();
	fw.close();
	return 0;
}