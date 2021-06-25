#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
enum Weather {SUNNY = 0, CLOUD = 10, RAIN = 20, SNOW = 30};

union ShareData{
    unsigned char a;
    unsigned short b;
    unsigned int c;
};
int main(){
    O;

    ShareData var;
    var.c = 0x12345678;

    cout << hex;
    cout << var.a << endl;
    cout << var.b << endl;
    cout << var.c;

    int input;
    Weather wt;

    cout << "오늘의 날씨를 입력해 주세요 : " << endl;
    cout << "(SUNNY=0, CLOUD=10, RAIN=20, SNOW=30)" << endl;
    cin >> input;
    wt = (Weather)input;
    switch (wt)    {
        case SUNNY:
            cout << "오늘의 날씨는 아주 맑아요!";
            break;

        case CLOUD:
            cout << "오늘의 날씨는 흐리네요!";
            break;

        case RAIN:
            cout << "오늘의 날씨는 비가 주룩주룩 오네요!";
            break;

        case SNOW:
            cout << "오늘의 날씨는 하얀 눈이 내려요!";
            break;

        default:
            cout << "정확한 상숫값을 입력해 주세요!";
            break;
    }
    cout << endl << "열거체 Weather의 각 상숫값은 " << SUNNY << ", " << CLOUD << ", " << RAIN << ", " << SNOW << "입니다.";
    
    return 0;
}
