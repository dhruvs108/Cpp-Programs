#include <iostream>
using namespace std;
int main()
{
    class Movie
    {
        private:
            string rating;
        public:
            string name;
            string director;
            Movie(string aName, string aDirector, string aRating) ///Constructor Function
            {
                name = aName;
                director = aDirector;
                setRating(aRating);
            }
            void setRating(string mRating)
            {
                if(mRating == "PG" || mRating == "PG-13" || mRating == "R")
                        rating = mRating;
                else
                    rating = "NR";
            }
           string getRating()
            {
                return rating;
            }
    };
    cout << "Welcome to Getters & Setters in C++!\n\n";
    Movie movie1("The Avengers", "Joss Whedon", "PG-12");
    Movie movie2("Justice League", "Zack Snyder", "R");

    cout << movie1.getRating() << endl << endl;
    cout << movie2.getRating();
    return 0;
}
