//4.��дһ���������û����������䣬Ȼ����ʾ������������ٸ��£�������ʾ��
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
