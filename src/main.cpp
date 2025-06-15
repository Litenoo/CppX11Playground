#include <X11/Xlib.h>
#include <iostream>
#include <cstdlib>
#include <cmath>

void drawLine(Display *d, Window w, GC gc, int x0, int y0, int x1, int y1)
{
    const float deltaX = x1 - x0;
    const float deltaY = y1 - y0;
    const float ratio = abs((deltaY) / (deltaX));

    int j = y0;
    float n = 1;
    for (int i = x0; i < deltaX; ++n, i++)
    {
        std::cout << "I : " << i << "   J : " << j << "   N : " << n << std::endl;
        if (n > ratio)
        {
            n = n - ratio;
            j++;
        }
        XDrawPoint(d, w, gc, i, j);
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

        // Create a graphics context
        GC gc = XCreateGC(d, w, 0, NULL);
        XSetForeground(d, gc, green_color.pixel);

        drawLine(d, w, gc, 10, 10, 100, 100);

        XFreeGC(d, gc);
    }

    XCloseDisplay(d);
    return 0;
}