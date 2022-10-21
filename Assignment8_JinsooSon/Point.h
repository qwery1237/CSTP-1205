class Point {
private :
	int x;
	int y;
public :
	Point();
	Point(int x, int y);
	Point(Point const& src);
	int GetX();
	int GetY();
	void Set(int x, int y);
	void SetX(int x);
	void SetY(int y);
};