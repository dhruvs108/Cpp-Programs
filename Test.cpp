#include <iostream>
using namespace std;

class Movie
{
    public:
        string name;
        string director;
        string rating;
        Movie(string aName, string aDirector, string aRating) ///Constructor Function
        {
            name = aName;
            director = aDirector;
            if(aRating == "PG" || aRating == "PG-13" || aRating == "R")
                rating = aRating;
            else
                rating = "NR";
        }

        string getRating()
        {
            return rating;
        }
};
int main()
{
    cout << "Testing a better method to restrict the ratings of a movie class in C++!\n\n";
    Movie movie1("The Avengers", "Joss Whedon", "uer");
    Movie movie2("Justice League", "Zack Snyder", "R");
    cout << movie1.rating << "\n\n" ;
    cout << movie2.rating << endl;
}
