//
// Created by Lucian on 3/6/2023.
//

#ifndef LAB3PR2_CANVAS_H
#define LAB3PR2_CANVAS_H


class Canvas {
    int height;
    int width;
    char** pixels;

public:
    Canvas(int width, int height);
    void DrawCircle(int x, int y, int ray, char ch);
    void FillCircle(int x, int y, int ray, char ch);
    void DrawRect(int left, int top, int right, int bottom, char ch);
    void FillRect(int left, int top, int right, int bottom, char ch);
    void SetPoint(int x, int y, char ch);
    void DrawLine(int x1, int y1, int x2, int y2, char ch);
    void Print(); // shows what was printed
    void Clear(); // clears the canvas
};


#endif //LAB3PR2_CANVAS_H
