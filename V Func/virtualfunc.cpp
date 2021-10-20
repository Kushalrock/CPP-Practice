#include<iostream>
#include<cstring>

using namespace std;

class YCHANNEL{
    protected:
        string title;
        float rating;
    public:
        YCHANNEL(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0;  // Pure Virtual Function
};

class YVIDEO : public YCHANNEL{
    float videoLength;

    public:
        YVIDEO(string s, float r, float vl):YCHANNEL(s,r){
            videoLength = vl;
        }
        void display(){
            cout<<"An Amazing Video "<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"VideoLength: "<<videoLength<<endl;
        }
};

class YTEXT : public YCHANNEL{
    int wordCount;

    public:
        YTEXT(string s, float r, int wc):YCHANNEL(s,r){
            wordCount = wc;
        }
        void display(){
            cout<<"An Amazing Video "<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"WordCount: "<<wordCount<<endl;
        }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    title = "Flutter tut";
    vlen = 4.56;
    rating = 4.5;
    
    YVIDEO flutterVideo(title, rating, vlen);

    title = "Flutter tut text";
    words = 400;
    rating = 4.5;
    
    YTEXT flutterText(title, rating, words);
    
    YCHANNEL* tuts[2];
    tuts[0] = &flutterVideo;
    tuts[1] = &flutterText;

    tuts[1]->display();
    tuts[0]->display();

    return 0;
}