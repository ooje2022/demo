#include <iostream>

using namespace std;
/*
int main()
{
    int var = 105;
    int *ptr;
    ptr = &var;

    cout << "Value of var is : " << var;
    cout << "\nValue of prt is : " << ptr;
    cout << "\nValue of &var is : " << &var;
    cout << "\nValue of *ptr is : " << *ptr;

    return 0;
}



int main()
{
    int num1, num2;
    int sum = 0;
    int sub = 0;
    int* ptr1;
    int* ptr2;

    cout << "\nEnter two numbers :";
    cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    (*ptr1)++;
    (*ptr2)++;

    cout << "\nAfter increment Num1 and Num2 are : " << *ptr1 << "\t" << *ptr2;

    sum = *ptr1 + *ptr2;

    cout << "\nAddition of Num 1 and Num2 :" << sum;

    (*ptr1)--;
    (*ptr2)--;

    cout << "\nAfter derecement Num1 and Num2 are : " << *ptr1 << "\t" << *ptr2;

    sub = *ptr1 - *ptr2;

    cout << "\nSubtraction of Num2 from Num1 : " << sub;

}



#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int arr[] = {5, 17, 20, 7, 9, 4, 6};
    ptr = arr;

    for(int i=0; i<7; i++)
    {
        cout << *ptr << "\t";
        ptr++;
    }
    return 0;
}


//This pointer
#include <iostream>
using namespace std;

class A
{
    private:
    int x, y, z;

    public:
    void set(int x, int y, int z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void print()
    {
        cout << "x value is : " << x << endl;
        cout << "y value is : "<< y << endl;
        cout << "z value is : "<< z << endl;
        

    }

};

int main()
{
    A obj;
    obj.set(20, 54, 65);
    obj.print();
    return 0;
}



#include <iostream>
using namespace std;

class King
{
    public:
    void call();

    void text()
    {
        cout << "Hello brother " <<endl;
        
    }
};

void King::call()
{
    cout << "A " << endl;
    cout << "B " << endl;
    cout << "C " << endl;
}

int main()
{
    King obj;
    obj.text();
    return 0;
}
*/

//Method Chaining
#include <iostream>
using namespace std;

class Test
{
    int num;

    public:
    Test &assign(int num)
    {
        this->num = num;
        return *this;
    }

    void display()
    {
        cout << "The value of num is : " << num << endl;
    }

};

int main()
{
    Test n1;
    n1.assign(100).display();

    return 0;
}