#pragma once

class base2
{
public:
    base2( char characterData )
    {
        letter = characterData;
    }
    char getData() const
    {
        return letter;
    }
protected:
    char letter;
};