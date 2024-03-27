#include <iostream>
#include <string>
#include <Windows.h>
#include<vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	while (true) {
		string word;
		getline(cin, word);
		for (int i = 0; i < word.size(); i++) {
			word[i] = toupper(word[i]);
			if (word[i] == 'A')
			{
				word[i] = 'Ф';

			}
			if (word[i] == 'Q')
			{
				word[i] = 'Й';

			}if (word[i] == 'W')
			{
				word[i] = 'Ц';

			}if (word[i] == 'E')
			{
				word[i] = 'У';

			}if (word[i] == 'R')
			{
				word[i] = 'К';

			}if (word[i] == 'T')
			{
				word[i] = 'Е';

			}if (word[i] == 'Y')
			{
				word[i] = 'Н';

			}if (word[i] == 'U')
			{
				word[i] = 'Г';

			}
			if (word[i] == 'I')
			{
				word[i] = 'Ш';

			}if (word[i] == 'O')
			{
				word[i] = 'Щ';

			}if (word[i] == 'P')
			{
				word[i] = 'З';

			}if (word[i] == '[')
			{
				word[i] = 'Х';

			}if (word[i] == ']')
			{
				word[i] = 'Ъ';

			}if (word[i] == 'S')
			{
				word[i] = 'Ы';

			}if (word[i] == 'D')
			{
				word[i] = 'В';

			}if (word[i] == 'F')
			{
				word[i] = 'А';

			}if (word[i] == 'G')
			{
				word[i] = 'П';

			}if (word[i] == 'H')
			{
				word[i] = 'Р';

			}if (word[i] == 'J')
			{
				word[i] = 'О';

			}if (word[i] == 'K')
			{
				word[i] = 'Л';

			}if (word[i] == 'L')
			{
				word[i] = 'Д';

			}if (word[i] == ';')
			{
				word[i] = 'Ж';

			}if (word[i] == ' " ')
			{
				word[i] = 'Э';

			}if (word[i] == 'Z')
			{
				word[i] = 'Я';

			}if (word[i] == 'X')
			{
				word[i] = 'Ч';

			}if (word[i] == 'C')
			{
				word[i] = 'С';

			}if (word[i] == 'V')
			{
				word[i] = 'М';

			}if (word[i] == 'B')
			{
				word[i] = 'И';

			}if (word[i] == 'N')
			{
				word[i] = 'Т';

			}if (word[i] == 'M')
			{
				word[i] = 'Ь';

			}if (word[i] == ',')
			{
				word[i] = 'Б';

			}if (word[i] == '.')
			{
				word[i] = 'Ю';

			}
			if (word[i] == ':')
			{
				word[i] = 'Ж';

			}
			if (word[i] == '{')
			{
				word[i] = 'Х';

			}if (word[i] == '>')
			{
				word[i] = 'Ю';

			}if (word[i] == '\'')
			{
				word[i] = 'Э';

			}
			if (word[i] == '<')
			{
				word[i] = 'Б';

			}
			if (word[i] == '/')
			{
				word[i] = '.';

			}
			if (word[i] == '?')
			{
				word[i] = ',';

			}
			cout << word[i]<<endl;
		}
	}
	
}

