#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    char y = 'A';
    cout << (x+y) << '\n';
    float z = 5.5;
    cout << (x+z) << '\n';
    bool b = z;
    cout << b << '\n';
    return 0;
}




#include <iostream>
using namespace std;

int main() {

   int x=15,y=2;
   double z= double(x)/y;
   cout<<z;
  
    return 0;
}



#include <iostream>
using namespace std;
int main()
{
	float f = 3.5;

	// using cast operator
	int b = static_cast<int>(f);

	cout << b;
}