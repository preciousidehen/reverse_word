/*precious idehen

  program: this program displays the reverse of a 
  			word inputed by the user.


*/


#include<iostream>
#include<string>

using namespace std;

int main()
{
    
    string word;
    cout<<"Enter the word to reverse: "<<flush;
    cin >> word;

    for (int i=word.size()-1; i>=0; i--) 
    {
        cout<<word[i];  
       
    }
   return 0;
}
