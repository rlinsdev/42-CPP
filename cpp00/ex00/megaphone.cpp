/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlins <rlins@student.42sp.org.br>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:31:19 by rlins             #+#    #+#             */
/*   Updated: 2023/04/06 12:03:04 by rlins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1)
	{
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	else
	{
		string sentence = "";
		for (int i = 1; i < argc; i++)
		{
			string word = argv[i];

			transform(word.begin(), word.end(), word.begin(), ::toupper);
			cout<<word<<endl;

			if (sentence == "")
				sentence += word;
			else
				sentence += " " + word;
		}
		cout << sentence;
	}
	return (0);
}
