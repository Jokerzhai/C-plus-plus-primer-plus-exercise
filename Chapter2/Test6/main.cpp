/*6.��дһ��������main() ����һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ���ĵ�λ��ֵ����
�ó�������ĸ�ʽҪ���û��������ֵ������ʾ�����
Enter the number of light years: 4.2
4.2 light years = 265608 astronomical units.
���ĵ�λ�Ǵӵ���̫����ƽ�����룬�����ǹ�һ���ߵľ��루Լ10���ڹ����6����Ӣ�����̫���⣬����ĺ��Ǵ�Լ�����4.2���꣩����ʹ��double���ͣ�ת����ʽΪ��
1����= 63240���ĵ�λ*/

#include <iostream>

using namespace std;

double LightTransferAstronomical(double b);
int main()
{
    double LightYears;
    cout << "Enter the number of light years: " ;
    cin >> LightYears;
    cout << LightYears << " light years = " << LightTransferAstronomical(LightYears) << " astronomical units." <<endl;
    return 0;
}

double LightTransferAstronomical(double b)
{
    double AstronomicalUnits;
    AstronomicalUnits = b * 63240;
    return AstronomicalUnits;
}
