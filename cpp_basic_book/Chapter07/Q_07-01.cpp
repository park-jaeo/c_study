#include <iostream>
using namespace std;

class Car // 기본 연료 자동차
{
private:
    int gasolineGauge;
public:
    Car(int gas) : gasolineGauge(gas)
    {}
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar : public Car // 하이브리드 자동차
{
private:
    int electricGauge;
public:
    // Car Constructor
    HybridCar(int gas, int egauge) : Car(gas), electricGauge(egauge)
    {}
    int GetElecGauge()
    {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar
{
private:
    int waterGauge;
public:
    HybridWaterCar(int gas, int egauge, int wgauge) : HybridCar(gas,egauge), waterGauge(wgauge)
    {}
    void ShowCurrentGauge()
    {
        cout << "잔여 가솔린:" << GetGasGauge() << endl;
        cout << "잔여 전기량:" << GetElecGauge() << endl;
        cout << "잔여 워터량:" << waterGauge << endl;
    }
};

int main()
{
    printf("My HybridWaterCar Constructor Called \n");
    HybridWaterCar mCar(0,100,1000);
    printf("내 차의 정보 출력\n");
    mCar.ShowCurrentGauge();
    return 0;
}