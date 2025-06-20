#include <X11/Xlib.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

// Bresenham's line algorithm
void drawLine(Display *d, Window w, GC gc, int x0, int y0, int x1, int y1)
{
    if (x0 > x1)
    {
        std::swap(x0, x1);
        std::swap(y0, y1);
    }

    int deltaX = abs(x1 - x0);
    int deltaY = abs(y1 - y0);

    if (deltaY <= deltaX)
    {
        int y = y0;
        int e = 2 * deltaY - deltaX; // error
        int yStep = (y0 > y1) ? -1 : 1;
        for (int x = 0; x <= deltaX; ++x)
        {
            XDrawPoint(d, w, gc, x0 + x, y);

            if (e > 0)
            {
                y += yStep;      // Move to next row
                e -= 2 * deltaX; // Decrement error
            }
            e += 2 * deltaY;
        }
    }
    else
    {
        int x = x0;
        int e = 2 * deltaX - deltaY; // error
        int xStep = (x0 < x1) ? 1 : -1;
        for (int y = 0; y <= deltaY; ++y)
        {
            XDrawPoint(d, w, gc, x, y + y0);

            if (e > 0)
            {
                x += xStep;      // Move to next row
                e -= 2 * deltaY; // Decrement error
            }
            e += 2 * deltaX;
        }
    }
}

int main()
{
    Display *d = XOpenDisplay(NULL);
    if (!d)
    {
        return 1;
    }

    int s = DefaultScreen(d);                                                                                     // integer that holds information about which screen to use
    Window w = XCreateSimpleWindow(d, RootWindow(d, s), 10, 10, 360, 240, 1, WhitePixel(d, s), BlackPixel(d, s)); // Actuall window

    XMapWindow(d, w);

    while (true)
    {

        // Allocate red color

        Colormap colormap = DefaultColormap(d, s);

        XColor red_color;
        XParseColor(d, colormap, "red", &red_color);
        XAllocColor(d, colormap, &red_color);

        // Allocate green color
        XColor green_color;
        XParseColor(d, colormap, "green", &green_color);
        XAllocColor(d, colormap, &green_color);

        // Allocate blue color
        XColor blue_color;
        ;
        XParseColor(d, colormap, "blue", &blue_color);
        XAllocColor(d, colormap, &blue_color);

        // Create a graphics context
        GC gc = XCreateGC(d, w, 0, NULL);
        XSetForeground(d, gc, green_color.pixel);

        drawLine(d, w, gc, 20, 20, 200, 100);
        drawLine(d, w, gc, 20, 40, 200, 120);

        XSetForeground(d, gc, red_color.pixel);

        drawLine(d, w, gc, 30, 30, 90, 60);

        XSetForeground(d, gc, blue_color.pixel);

        drawLine(d, w, gc, 0, 0, 20, 100);

        XFreeGC(d, gc);
    }
    XCloseDisplay(d);
    return 0;
}