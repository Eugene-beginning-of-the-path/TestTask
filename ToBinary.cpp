#include <iostream>

bool isEven(int value)
{
	std::string buffer;
	bool negative = false;
	buffer.reserve(std::numeric_limits<int>::digits + 1); //��������� +1 ��� ������������� 
													//�������������� ����� � �������� ����
													//�� ������ "two's component"
	if (value < 0)
	{
		value = -value;
		negative = true;
	}

	do
	{
		buffer += char('0' + value % 2);
		value /= 2;
	} while (value); //� buffer ����� �������� �������� ������������� ����������� �����
					 //� �������� ������������������!! �.�. ����� ����� ����������� ���
					 //����������� ����������� � �������� ����, �� �.�. �� ���������� ��������
					 //������������� �� �� �����, ������� ����� �� ��������������, ��
					 //������� � ���, ��� ������ � ��� - � ����� ������ buffer

	if (negative)
		buffer += '-';

	////� ������� ���������� ���� � ����� ������ --> � ������, ����� ���������� �������� �������������
	//for (auto i = buffer.crbegin(); i < buffer.crend(); i++)
	//	std::cout << *i;
	//std::cout << std::endl;

	if (buffer[0] == '0')
		return true;	//����� ������
	else
		return false;	//����� ��������
}

void task2()
{
	(isEven(17)) ? (std::cout << "The number is even") : 
		(std::cout << "The number is not even");
}