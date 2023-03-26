#include <iostream>
#include <string>
#include "ExtendedCharacter.h"

using namespace std;

int main() {
	ExtendedCharacter E;
	ExtendedCharacter E1(148);
	ExtendedCharacter E2('A');
	ExtendedCharacter temp;

	char character;
	cout << "Enter Character you want to store in E: \n";
	cin >> character;
	E.set(character);

	cout << "Your entered Character: " << E.getC() << endl;

	temp = ++E;
	cout << "After ++E: " << temp.getC() << endl;
	temp = --E;
	cout << "After --E: " << temp.getC() << endl;
	temp = E++;
	cout << "After E++: " << temp.getC() << endl;
	temp = E--;
	cout << "After E--: " << temp.getC() << endl;

	cout << E.getC() << endl;

	cout << "-----------------------------------------------\n";
	cout << "After adding E1 and E2: \n";
	temp = E1 + E2;
	cout << temp.getC() << endl;
	cout << "After subtracting E1 and E2: \n";
	temp = E1 - E2;
	cout << temp.getC() << endl;


	if (E1 == E2)
		cout << "Both Extended Characters are Equal! \n\n";

	if (E1 != E2)
		cout << "Both Extended Character are not Equal! \n\n";

	if (E1 <= E2)
		cout << "First Extended Character is less than or equal to the Second Extended Character!\n\n";

	if (E1 >= E2)
		cout << "First Extended Character is greater than or equal to the Second Extended Character!\n\n";

	if (E1 < E2)
		cout << "First Extended Character is less than the Second Extended Character!\n\n";

	if (E1 > E2)
		cout << "First Extended Character is greater than the Second Extended Character!\n\n";

	return 0;
}