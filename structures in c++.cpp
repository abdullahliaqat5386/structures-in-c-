#include <iostream>
using namespace std;
 
struct employee
{
    /* data */
    int eId;
    char favChar;
    int salary;
};
 
int main()
{
    struct employee abdullah;
    abdullah.eId = 1;
    abdullah.favChar = 'c';
    abdullah.salary = 120000000;
    cout << "eID of abdullah is " << abdullah.eId << endl;
    cout << "favChar of abdullah is " << abdullah.favChar << endl;
    cout << "salary of abdullah is " << abdullah.salary << endl;
    return 0;
}

