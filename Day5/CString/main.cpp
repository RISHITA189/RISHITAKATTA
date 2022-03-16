#include <iostream>
#include "CString.h"
#include "Smart.h"
#include "date.h"
using namespace std;

int main()
{
	{


	

		//CString s2("mohith");
		//CString sss(s2);
		//CString s3 = s2+sss;
		//CString s4 = s3 , s1;
		///*s2.show_string();*/

		//CString s3("shivu"); 
		//s3.show_string();

		//SmartPointer sptr;
		//sptr->accept_string();
		//(*sptr).show_string();

		////s1 = s2;
		//CString s4 = s2 + s3;
		//s4.show_string();
		//{
		//	SmartPointer sptr(10, 2);
		//	sptr->accept_string();   //overloading ->
		//	(*sptr).show_string();   //overloading *
		//}


		/*CString s2('W',10);
		s2.show_string();

		CString ss(s2);
		ss.show_string();*/
		
	}
	Date d;
	d.accept_date();
	d.show_date();
		
	
	

	cout <<"Leak " << _CrtDumpMemoryLeaks() << endl;
	return 0;
}