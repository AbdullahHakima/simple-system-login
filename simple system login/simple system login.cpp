#include<iostream>
#include<string>
using namespace std;
//globale variable to use it in "validation and main function easly "
bool options = true;
void Validation(string username, string password)
{
	//some hard code because i don't use file stream
	if (username == "Abdullah" && password == "123a")
	{
		cout << "Wellcome , " << username << endl;
		options = false;
	}//some hard code because i don't use file stream
	if (username == "mohamed" && password == "123a")
	{
		cout << "Wellcome , " << username << endl;
		options = false;
	}
}
int main()
{
	//declare variables
	string UserName, PassWord;
	while (options)//looping for unlimited attemps
	{
		cout << "Please enter username\n";
		cin >> UserName;
		cout << "Please enter password\n";
		cin >> PassWord;
		Validation(UserName, PassWord);
		if (options)
		{
			cout << "Invalid login attempt. Please try again.\n";
		}
	}

	return 0;
}
