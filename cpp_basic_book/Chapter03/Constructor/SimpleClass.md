class SimpleClass
{
private:
    int num;
public:
    SimpleClass(int n); // 생성자, constructor
    {
        num = n;
    }
    int GetNum() const
    {
        return num;
    }
};