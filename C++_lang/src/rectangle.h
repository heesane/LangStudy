// Date: 2023/05/01
class Rectangle{
    private:
        int width;
        int height;
    public:
        Rectangle(){
            width = 0;
            height = 0;
        }
        Rectangle(int l, int b){
            width = l;
            height = b;
        }
        void showRectangle();
        int getWidth();
        int getHeight();
        friend Rectangle desRectangle(Rectangle, Rectangle);
        friend void distanceRectangle(Rectangle, Rectangle);
        friend void copyRectangle(Rectangle&, Rectangle&);
        friend void swapRectangle(Rectangle&, Rectangle&);
};

void Rectangle::showRectangle(){
    std::cout << "Width: " << width << std::endl;
    std::cout << "Height: " << height << std::endl;
}

int Rectangle::getHeight(){
    return height;
}

int Rectangle::getWidth(){
    return width;
}

Rectangle desRectangle(Rectangle r1, Rectangle r2){
    int x = r1.getWidth()-r2.getWidth();
    int y = r1.getHeight()-r2.getHeight();
    Rectangle r3;
    r3 = Rectangle(x, y);
    return r3;


}

void distanceRectangle(Rectangle r1, Rectangle r2){
    int t1_x = r1.getWidth();
    int t1_y = r1.getHeight();
    int t2_x = r2.getWidth();
    int t2_y = r2.getHeight();

    double distance = sqrt(pow(t1_x - t2_x, 2) + pow(t1_y - t2_y, 2));
    std::cout << "Distance between two rectangles: " << distance << std::endl;

}

void copyRectangle(Rectangle &r1, Rectangle &r2){
    r1 = r2;
}

void swapRectangle(Rectangle &r1, Rectangle &r2){
    Rectangle temp;
    temp = r1;
    r1 = r2;
    r2 = temp;
}