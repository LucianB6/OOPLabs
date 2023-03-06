//
// Created by Lucian on 3/6/2023.
//

#include <iostream>
#include <cmath>
#include "Canvas.h"

Canvas::Canvas(int width, int height) {
    this->height = height;
    this->width = width;
    // Allocate memory for the pixel matrix
    pixels = new char*[height];
    for (int y = 0; y < height; y++) {
        pixels[y] = new char[width];
        for (int x = 0; x < width; x++) {
            pixels[y][x] = ' ';
        }
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {

    for(int i = 0; i <= 360; i++)
    {
        int px = (int)(ray * cos(i * M_PI / 180.0) + x + 0.5);
        int py = (int)(ray * sin(i * M_PI / 180.0) + y + 0.5);

        SetPoint(px, py, ch);
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    int r = ray;
    int cx = x;
    int cy = y;

    for (int dy = -r; dy <= r; dy++) {
        for (int dx = -r; dx <= r; dx++) {
            if (dx * dx + dy * dy <= r * r) {
                SetPoint(cx + dx, cy + dy, ch);
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    for (int x = left; x < right; ++x) {
        SetPoint(x, top, ch);
        SetPoint(x, bottom, ch);
    }

    for (int y = top; y <= bottom; ++y) {
        SetPoint(left, y, ch);
        SetPoint(right, y, ch);
    }

}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    for (int y = left; y < right; ++y) {
        for (int x = top; x < bottom; ++x) {
            SetPoint(y, x, ch);
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        pixels[y][x] = ch;
    }
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    int d_x = x2 - x1;
    int d_y = y2 - y1;


    float slope = float(d_y) / float(d_x);

    for (int x = x1; x < x2; x++){
        int y = slope * (x - x1) + y1;

        SetPoint(x, y, ch);
    }

}

void Canvas::Print() {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << pixels[y][x];
        }
        std::cout << std::endl;
    }
}

void Canvas::Clear() {
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            pixels[y][x] = ' ';
        }
    }
}
