/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 08:33:13 by rlins             #+#    #+#             */
/*   Updated: 2023/05/10 07:19:58 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Replace.hpp>

void	msgUsage(void);
void	msgOpenFile(void);
void	msgOutput(void);

int main(int argc, char **argv) {
	// Initialize class
	Replace replace;

	// Check params
	if (argc != 4) {
		msgUsage();
		return (1);
	}

	// Read a file (Input file Stream)
	std::ifstream ifs(argv[1]);
	if (!ifs.is_open()) {
		msgOpenFile();
		return (1);
	}

	// Set variables
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string result;

	std::getline(ifs, result, '\0');
	ifs.close();

	result = replace.ft_replace(result, s1, s2);

	// Change name. https://www.techiedelight.com/convert-std-string-const-char-cpp/
	std::string nmOutput = argv[1];
	nmOutput.append(".replace");
	const char *c = nmOutput.c_str();

	// Output. Just work wit char the name (Output FileStream).
	std::ofstream ofs(c);

	if (!ofs.is_open()) {
		msgOutput();
		return (1);
	}

	// Write in Output File Stream
	ofs << result;
	ofs.close();
	return (0);
}

/**
 * @brief Return message when wrong usage
 */
void	msgUsage(void) {
	std::cerr << "Error: Wrong param. Right usage: <file-name> <old-str> <new-str>." << std::endl;
}

/**
 * @brief Handle error to open file
 */
void	msgOpenFile(void) {
	std::cerr << "Error: Unable to open this file." << std::endl;
}

/**
 * @brief Return message when unable to open output file
 */
void	msgOutput(void) {
	std::cerr << "Error: Unable to open output file." << std::endl;
}
