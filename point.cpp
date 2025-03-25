class point
//hat represents a point in 2D space and can calculate the distance from the origin point (0,0)
{
public:
    point();
    point(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    double distance();
    ~point();
private:
    int x;
    int y;
};