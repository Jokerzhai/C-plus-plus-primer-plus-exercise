/*7.��дһ������Ҫ���û�����Сʱ���ͷ���������main()�����У���������ֵ���ݸ�һ��void���������������������ĸ�ʽ��ʾ������ֵ:
Enter the number of hours:9
Enter the number of minutes:28
Time:9:28
*/

#include <iostream>

using namespace std;

void Time(int h, int m);
int main()
{
    int hours,minutes;
    cout << "Enter the number of hours: " ;
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    cout << "Time: ";
    Time(hours,minutes);
    return 0;
}
void Time(int h, int m)
{
    cout << h << ":" << m;
}
