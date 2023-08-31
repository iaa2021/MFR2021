#pragma once

class base1
{
public:
    base1( int parameterValue )
    {
        value = parameterValue;
    }
    int getData() const
    {
        return value;
    }
protected:
    int value;
};
