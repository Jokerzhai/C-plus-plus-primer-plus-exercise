// 2.��дһ��C++������Ҫ���û�����һ����longΪ��λ�ľ��룬Ȼ����ת��Ϊ�루һ long����220�룩

#include <iostream>

using namespace std;

int main()
{
    int yard, distance;
    cout << "Please enter the distance (The unit of distance is long): " << endl;
    cin >> distance;
    yard = 220*distance;
    cout << distance <<" long is " << yard << " yard." << endl;
    return 0;
}
