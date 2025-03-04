struct Vector3
{
public:
	int x;
	int y;
	int z;

	Vector3(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	Vector3 operator+(Vector3 other)
	{
		return Vector3(this->x + other.x, this->y + other.y, this->z + other.z);
	}
	Vector3 operator-(Vector3 other) {
		return Vector3(this->x - other.x, this->y - other.y, this->z - other.z);
	}
};