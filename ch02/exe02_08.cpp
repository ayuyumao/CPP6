#include <iostream>

int main()
{
    using namespace std;

    double amount = 574;
   	double payment = 0;
    
    cout << "欠费金额 " << amount << endl;
    cout << "    户名 长春慧鹏石油化工科技有限公\n\t司" << endl;
    cout << "    地址 吉林省长春市二道区中意之尊\n\t小区4#楼商铺101" << endl;
    cout << "截至时间 19日04时" << endl;

    cout << "请输入缴入金额(大于574): ";
    cin >> payment;
    payment = payment - amount;
    cout << "账户电费金额为： "  << payment << endl;

    return 0;

}