//4.编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月，如下所示：
//Enter your age: 29

#include <iostream>

using namespace std;

int AgeTransferMouth(int a);
int main()
{
    int age;
    cout << "Enter your age: " <<endl;
    cin  >> age;
    cout << "The age of " << age << " inlcudes " << AgeTransferMouth(age) << " mouths"<< endl;
    return 0;
}

int AgeTransferMouth(int a)
{
    int mouth;
    mouth = a * 12;
    return mouth;
}
