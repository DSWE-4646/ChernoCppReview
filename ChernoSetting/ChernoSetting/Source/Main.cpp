#include<iostream>
#include<string>

struct vector2
{
	float x, y;
	vector2() : x(0), y(0) {}
	vector2(float x, float y) : x(x), y(y) {}

	vector2 Add(const vector2& other) const
	{
		return vector2(x + other.x, y + other.y);
	}

	vector2 Multiply(const vector2& other) const
	{
		return vector2(x * other.x, y * other.y);
	}

	vector2 operator+(const vector2& other) const
	{
		return Add(other);
		//return Vector2(x + other.x, y + other.y);
	}

	vector2 operator*(const vector2& other) const
	{
		return Multiply(other);
		//return Vector2(x + other.x, y + other.y);
	}

	bool operator==(const vector2& other) const {
		return x == other.x && y == other.y;
	}

};

std::ostream& operator <<(std::ostream& stream, const vector2& vector)
{
	stream << "{" << vector.x << ", " << vector.y << "}";
	return stream;
}


bool operator!=(const vector2& left, const vector2& right)
{
	return !(left == right);
}


int main()
{
	vector2 position(5.0f, 10.0f);
	vector2 speed(2.0f, 2.0f);
	vector2 powerup(1.5f, 1.5f);

	vector2 result = position + speed * powerup; // This line will cause a compilation error

	std::cout << result << std::endl;

	std::cin.get();
}