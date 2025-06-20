#include <X11/Xlib.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

// Bresenham's line algorithm
void drawLine(Display *d, Window w, GC gc, int x0, int y0, int x1, int y1)
{
    int deltaX = x1 - x0;
    int deltaY = y1 - y0;

    const int m = deltaY / deltaX; // slope
    int y = y0;
    int e = 0; // error
    for (int x = 0; x <= deltaX; ++x)
    {
        XDrawPoint(d, w, gc, x0 + x, y);

        e = +m; // Increment error
        if (e >= 0.5)
        {
            y += 1;   // Move to next row
            e -= 1.0; // Decrement error
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
        // Allocate green color
        XColor green_color;
        Colormap colormap = DefaultColormap(d, s);
        XParseColor(d, colormap, "green", &green_color);
        XAllocColor(d, colormap, &green_color);

        // Allocate red color
        XColor red_color;
        XParseColor(d, colormap, "red", &red_color);
        XAllocColor(d, colormap, &red_color);

        // Create a graphics context
        GC gc = XCreateGC(d, w, 0, NULL);
        XSetForeground(d, gc, green_color.pixel);

        drawLine(d, w, gc, 20, 20, 100, 200);

        XSetForeground(d, gc, red_color.pixel);

        drawLine(d, w, gc, 20, 20, 200, 100);

        XFreeGC(d, gc);
    }
    XCloseDisplay(d);
    return 0;
}