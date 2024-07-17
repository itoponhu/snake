#include "../headers/header.h"
#include "../headers/xlib_headers.h"

#define POSX    500
#define POSY    500
#define WIDTH   500
#define HEIGHT  500
#define BORDER  15

static Display* display;
static int screenID;
static Window root;


int main (void)
{
    Window win;
    XEvent ev;

    if ((display = XOpenDisplay(NULL)) == NULL)
        errx(1, "Shit didn't work");

    screenID = DefaultScreen(display);
    root = RootWindow(display, screenID);

    win = XCreateSimpleWindow(  display, root, POSX, POSY, WIDTH, HEIGHT, BORDER,
                                BlackPixel(display, screenID), WhitePixel(display, screenID));
    XMapWindow(display, win);

    while (XNextEvent(display, &ev) == 0)
    {

    }
    XUnmapWindow(display, win);
    XDestroyWindow(display, win);
    XCloseDisplay(display);
    return 0;
}