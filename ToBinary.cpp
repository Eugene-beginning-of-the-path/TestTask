#include <iostream>

bool isEven(int value)
{
	std::string buffer;
	buffer.reserve(std::numeric_limits<int>::digits + 1); //��������� +1 ��� ������������� 
													//�������������� ����� � �������� ����
	//�� ������ "two's component"
	if (!value)
		value = -value;

	do
	{
		buffer += char('0' + value % 2);
		value /= 2;
	} while (value);

	if (value >= 0)
	{
		
		
		//std::cout << std::endl << buffer << std::endl;

		if (buffer[0] == '0') 
			return true;	//����� ������
		else
			return false;	//����� ��������

	}
	else
	{

	}
}

void task2()
{
	std::cout << isEven(16);
}