#ifndef BASE2_H
#define BASE2_H
class Base2
{
public:
    Base2( char parameterData )
    {
        letter = parameterData;
    }
    char getData() const
    {
        return letter;
    }
protected:
    char letter;
};
#endif