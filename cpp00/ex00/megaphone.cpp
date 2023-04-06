/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:31:19 by rlins             #+#    #+#             */
/*   Updated: 2023/04/06 12:23:28 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/stdc++.h>
// using namespace std;

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		std::stringstream sentence;
		for (int i = 1; i < argc; i++)
		{
			std::string word = argv[i];

			std::transform(word.begin(), word.end(), word.begin(), ::toupper);

			if (sentence.str() == "")
				sentence << word;
			else
				sentence << " " << word;
		}
		std::cout << sentence.str();
		std::cout << "\n";
	}
	return (0);
}
