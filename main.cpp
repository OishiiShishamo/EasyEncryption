#include "main.hpp"

#include <fstream>
#include <iostream>
#include <random>
#include <string>

//TODO: UTF-8 support.

namespace easy_encryption
{
	std::string
	XorEncryption(std::string& input, std::string& key)
	{
		if (input == "")
			return "No input.";
		if (key == "")
			return input;
		int n = 0;
		std::string out = "";
		for (int i = 0; i < input.size(); i++)
		{
			if (n >= key.size())
				n = 0;
			out += input.at(i) ^ key.at(n);
		}
		return out;
	}
}

int main()
{
	std::string in = "", key = "", out = "";
	std::cout << "Hello!!!!" << std::endl;

	std::cout << "Please text!!!!" << std::endl
			  << "Plain text or Encrypted text> ";
	std::getline(std::cin, in);
	std::cout << "Please key!!!!" << std::endl
			  << "Encryption key> ";
	std::cin >> key;

	std::ofstream file("./output.txt", std::ios::binary);
	out = easy_encryption::XorEncryption(in, key);
	std::cout << "Encrypted or Decrypted: " << out << std::endl;
	file << out << std::endl;
	return 0;
}