#include<iostream>
#include<string>
using namespace std;

int len(string str) {
	int length = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	return length;
}


void replaceString(string str,string viejapalabra,string nueva) {
	bool status = false;
	int startIndex = 0, endIndex = len(viejapalabra);
	for (int i = 0; i < len(str); i++) {
		if (str[i] == viejapalabra[0])
		{
			startIndex = i;
			for (int j = 0; j < len(viejapalabra); j++, i++) {
				if (str[i] != viejapalabra[j]) {
					status = false;
					break;
				}
				else
				{
					status = true;
				}
			}
			if (status) {
				str.replace(startIndex, endIndex, nueva);
				cout << str;
				return;
			}
		}
	}
	cout << "\npalabra no encontrada";
}


int main()
{
	string str = "", viejapalabra = "", nueva = "";
	cout << "";
	cout << "Introduza una linea de codigo : ";
	getline(cin, str);
	cout << "\nintroduzca la palabra en ingles que desea que se traduzca: ";
	cin >> viejapalabra;
	cout << "\nColoque la palabra que seria en español : ";
	cin >> nueva;
	cout << "\nNueva linea de codigo : " << str << endl;
	replaceString(str, viejapalabra, nueva);
	return 0;
}
