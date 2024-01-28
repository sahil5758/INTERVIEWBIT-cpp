/*
  A hotel manager has to process N advance bookings of rooms for the next season. His hotel has C rooms. 
  Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand.
  Write a program that solves this problem in time O(N log N) .
  Note- If we have arrival and departure on the same date then arrival must be served before the departure.

  */



bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {

    int n = arrive.size();

    sort(arrive.begin(),arrive.end());

    sort(depart.begin(),depart.end());

    int rooms = 0;

    int i = 0,j = 0;

    while(i<n&&j<n){

            if(arrive[i]<=depart[j]){

                rooms++;

                i++;

            }

            else{

                rooms--;

                j++;

            }

        if(rooms>K)

            return false;

    }

    return true;

}
