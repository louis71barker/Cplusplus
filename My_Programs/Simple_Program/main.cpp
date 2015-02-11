#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <X11/Xlib.h>


//opens a new window
//void newWindow(int argc, char *argv[])
//{
//    Display *display;
//    Visual *visual;
//    int depth;
//    int text_x;
//    int text_y;
//    XSetWindowAttributes frame_attributes;
//    Window frame_window;
//    XFontStruct *fontinfo;
//    XGCValues gr_values;
//    GC graphical_context;
//    XKeyEvent event;
//    char hello_string[] = "Hello World";
//    int hello_string_length = strlen(hello_string);


//    //This is used to connect to the X-Window server
//    display = XOpenDisplay(NULL);
//    visual = DefaultVisual(display, 0);
//    depth = DefaultDepth(display, 0);

//    //sets the background color
//    frame_attributes.background_pixel = XWhitePixel(display,0);
//    //creates the new window
//    frame_window = XCreateWindow(display, XRootWindow(display,0),
//                                 0, 0, 400, 400, 5, depth,
//                                 InputOutput, visual, CWBackPixel,
//                                 &frame_attributes);

//    //this is used to set the text that will be displayed on the screen
//    XStoreName(display, frame_window, "Hello World");

//    // this is used to tell the XWindow server which events we are interesting in running
//    XSelectInput(display, frame_window, ExposureMask | StructureNotifyMask);

//    //this is used to set the font used for the text on the screen
//    fontinfo = XLoadQueryFont(display, "10x20");
//    gr_values.font = fontinfo->fid;
//    gr_values.foreground = XBlackPixel(display, 0);
//    graphical_context = XCreateGC(display, frame_window, GCFont+GCForeground,&gr_values);

//    //this is what actually displays the window on the screen
//    XMapWindow(display, frame_window);

//    //this is the main loop to maintain the window on the screen and to check for events
//    while (1)
//    {
//        XNextEvent(display,(XEvent *)&event);
//        switch (event.type)
//        {
//            case Expose:
//            {

//                XWindowAttributes window_attributes;
//                int font_direction, font_ascent, font_decent;
//                XCharStruct text_structure;
//                XTextExtents(fontinfo, hello_string, hello_string_length, &font_direction, &font_ascent, &font_decent, &text_structure);
//                XGetWindowAttributes(display, frame_window, &window_attributes);
//                text_x = (window_attributes.width - text_structure.width)/2;
//                text_y = (window_attributes.height - (text_structure.ascent+text_structure.descent))/2;
//                XDrawString(display, frame_window, graphical_context, text_x, text_y, hello_string, hello_string_length);
//                break;

//            }
//            default:
//                break;
//         }
//    }

//}

void newWindow()
{

    //std::cout << "Hello World!" << std::endl;


    Display *display;
    Visual *visual;
    int depth;
    int text_x;
    int text_y;
    XSetWindowAttributes frame_attributes;
    Window frame_window;
    XFontStruct *fontinfo;
    XGCValues gr_values;
    GC graphical_context;
    XEvent event;
    char hello_string[] = "Programs Hate Louis";
    int hello_string_length = strlen(hello_string);


    //This is used to connect to the X-Window server
    display = XOpenDisplay(NULL);

    visual = DefaultVisual(display, 0);
    depth = DefaultDepth(display, 0);

    //sets the background color
    frame_attributes.background_pixel = XWhitePixel(display,0);
    //creates the new window
    frame_window = XCreateWindow(display, XRootWindow(display,0),
                                 0, 0, 400, 400, 5, depth,
                                 InputOutput, visual, CWBackPixel,
                                 &frame_attributes);

    //this is used to set the text that will be displayed on the screen
    XStoreName(display, frame_window, "Hello World");

    // this is used to tell the XWindow server which events we are interesting in running
    XSelectInput(display, frame_window, ExposureMask | StructureNotifyMask);

    //this is used to set the font used for the text on the screen
    fontinfo = XLoadQueryFont(display, "10x20");
    gr_values.font = fontinfo->fid;
    gr_values.foreground = XBlackPixel(display, 0);
    graphical_context = XCreateGC(display, frame_window, GCFont+GCForeground,&gr_values);

    //this is what actually displays the window on the screen
    XMapWindow(display, frame_window);

    //this is the main loop to maintain the window on the screen and to check for events
    while (1)
    {
        XNextEvent(display,(XEvent *)&event);
        switch (event.type)
        {
            case Expose:
            {

                XWindowAttributes window_attributes;
                int font_direction, font_ascent, font_decent;
                XCharStruct text_structure;
                XTextExtents(fontinfo, hello_string, hello_string_length, &font_direction, &font_ascent, &font_decent, &text_structure);
                XGetWindowAttributes(display, frame_window, &window_attributes);
                text_x = (window_attributes.width - text_structure.width)/2;
                text_y = (window_attributes.height - (text_structure.ascent+text_structure.descent))/2;
                XDrawString(display, frame_window, graphical_context, text_x, text_y, hello_string, hello_string_length);
                //std::cout<<"inside case"<<std::endl;
                break;

            }
            default:
                break;
         }
    }
}


int main()
{
    newWindow();
        return 0;
}

