class Point {
    private:
    double x;
    double y;
    

    public:
    static int count;
    Point();
    Point(double, double);
    double getX();
    double getY();
    void setX(double);
    void setY(double);
};