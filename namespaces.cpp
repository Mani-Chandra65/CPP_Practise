#include <iostream>

//namespaces help us to redeclare few variables
namespace first{
    int x = 44;
}
int main(){
    //to print something we usually use
    std::cout << "Hello!";
    //instead by using namespaces
    using namespace std;
    //we can just write
    cout << "Hello" << '\n';
    // also using variables again and again
    int x = 28;
    cout << x << '\n';          // gives x as 28
    cout << first::x << '\n';   // gives x as 44
    
	
	
	
	//typedef is used to change the name of a datatype
	
	
	typedef int num;
	//now int is same as num;
	int age = 24;
	num age1 = 24;
	cout << age + age1 << '\n';
	
    //using keyword is also used instead of typedef
    using hello = double;
    hello hi = 3.14;
    cout<< hi << '\n';
}