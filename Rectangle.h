#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
    private:
        float length;
        float width;
    
    public:
        Rectangle();
        Rectangle(float l, float w);
        ~Rectangle();
        
    //setters
        void setLength(float l);
        void setWidth(float w);  
      
    // Getters
        float getLenghth();
        float getWidth();
     
    //Area function
    float calculateArea(); 

};
#endif