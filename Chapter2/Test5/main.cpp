//5.��дһ���������е�main ()����һ���û�����ĺ������������¶�ֵΪ��������������Ӧ�Ļ����¶�ֵ�����ĳ�������ĸ�ʽҪ���û����������¶�ֵ������ʾ�����
//Please enter a Celsius value:20
//20 degrees Celsius is 68 degrees Fahrenheit.
//������ת����ʽ��
//�����¶� =  1.8 * �����¶� + 32.0

#include <iostream>

using namespace std;

double CelsiusTransferFahrenheit(double a);
int main()
{
    double CelsiusValue;
    cout << "Please enter a Celsius value : " << endl;
    cin >> CelsiusValue;
    cout << CelsiusValue << " degrees Celsius is " << CelsiusTransferFahrenheit(CelsiusValue) << " degrees Fahrenheit." << endl;
    return 0;
}
double CelsiusTransferFahrenheit(double a)
{
    double Fahrenheit;
    Fahrenheit =  1.8 * a + 32.0;
    return Fahrenheit;
}
