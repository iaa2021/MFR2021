#ifndef BASE2_H
#define BASE2_H
class Base2
{
public:
	Base2( char characterData )
	{
		letter = characterData;
	}
	char getData() const
	{
		return letter;
	}

private:
	char letter;
};
#endif
