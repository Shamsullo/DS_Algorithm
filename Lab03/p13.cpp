#include <iostream>

using namespace std;
    //VoteCounting
main(){

    int numberOfVotes; cin >> numberOfVotes;
    int aVotes = 0;
    int bVotes = 0;
    for(int i = 0; i < numberOfVotes; i++){
        char vote; cin >> vote;
        if (vote == 'A'){
            aVotes++;
        }else if(vote == 'B'){
            bVotes++;
        }   
    }
    if (aVotes > bVotes){
        cout << "A" << endl;
    }else if (bVotes > aVotes){
        cout << "B";
    }else{
        cout << "Tie" << endl;
    }

    return 0;
}