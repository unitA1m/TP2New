#pragma once
class Coord
{
private:
	int x;
	int y;
	int z;

protected: int choice;

public:
	Coord();
	explicit Coord(int x, int y, int z);
	Coord(const Coord& other);


	void Inizilization(int x, int y, int z);

	void ChoiceAction(int value);
	operator int() const;
	Coord& operator++();// �������
	Coord& operator--(const int);//��������
	friend Coord& operator--(Coord& obj); // ������� ����
	friend Coord operator++(Coord& obj, const int);// �������� ����



	void GetCoord();




};