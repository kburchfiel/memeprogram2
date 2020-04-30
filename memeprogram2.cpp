#include <iostream>
using namespace std;
char yeet{7};
int main()
{
    
    char entry;
    while (true)
    {
        cout << "Enter e for a fun sound; f to make your computer purr; or g for some great music.\n";
        cin >> entry;
        if (entry == 'e')
        {
            cout << "Yeet";
            cout << yeet;
        }

        
        if (entry == 'f')
        {
            while (true)
            {
                //The 'purring' occurs because the computer is trying to play the bell sound so frequently that you only hear the first part of the sound before it shifts to the next part. Therefore, it ends up sounding like purring.
                cout << yeet;
            }
              
        }

        if (entry == 'g')
        {
            while (true)
            {
                cout << yeet;
                //We have to slow down the program by making it do something that takes a little while (like counting to a large number) so that the audio will have enough time to play.
                //The number can be increased or decreased as needed to change how the 'music' sounds.
                for (int x = 0; x < 1337; x++)
                {
                    cout << " yeet " << x;
                };
            }
        }
    }
}