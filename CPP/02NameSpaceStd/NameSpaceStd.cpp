#include<iostream>
 
/*using std::cout;
using std::cin;
*/
using namespace std;
 
namespace name1{
     string name="ram";
     int age=25;
}
namespace name2{
     string name="ram";
}
using namespace name1;
int main()
{
    /*int a;
    cout<<"Enter The Value of A : ";
    cin>>a;
    cout<<"A Value : "<<a;*/
   cout<<name;
    cout<<age;
 
 
    return 0;
}