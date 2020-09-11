#include <iostream>;
#include <string>;
using namespace std;

int main()
{
	string color, pural_noune, celebrity;

	cout << "Please input color: ";
	getline(cin, color);
	cout << "Please input a noune: ";
	getline(cin, pural_noune);
	cout << "PleaSE inpu a celebrity: ";
	getline(cin, celebrity);

	cout << "Roses are " << color << ".\n";
	cout << pural_noune << " are blue." << endl;
	cout << "I love " << celebrity << endl;

	return 0;
}
