
class EasyClass
{
private:
    int num;
public:
    void InitNum(int n)
    {
        num = n;
    }
    int GetNum() const
    {
        return num;
    }
};

class LiveClass
{
private:
    int num;
public:
    void InitNum(const EasyClass &easy)
    {
        num = easy.GetNum(); // 컴파일 에러 발생
    }
};