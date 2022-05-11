class Rectangle {
    public:
        Rectangle();
        void assignInfo(double, double);
        double area(double, double);
        double perimeter(double, double);
    private:
        double length, width;
};

Rectangle::Rectangle(){
    double length;
    double width;
}

void Rectangle::assignInfo(double len, double wid){
    length = len;
    width = wid;

    area(len, wid);
    perimeter(len, wid);
}

double Rectangle::area(double length, double width){
    return length * width;
}

double Rectangle::perimeter(double length, double width){
    return (length + width) * 2;
}
