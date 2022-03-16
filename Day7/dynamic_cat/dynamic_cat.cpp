// dynamic_cat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
  
    string s1("Mohith");
    string s3(s1);
    string s4(s1, 3);
    string s5 = s1 + s3;
  
   // cin >> s1;
    //getline(cin, s1);
    cout << s1 << " "<<s3 << " "<<s4<<" "<<s5<<" "<<s1[0]<<endl;
    s1[0] = 'K';
    cout << s1 <<  endl;
    reverse(s1.begin(), s1.end());
    if (s1 == s3)
        cout << "Palindrome" << endl;
    else
        cout << "Not Palindrome" << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
