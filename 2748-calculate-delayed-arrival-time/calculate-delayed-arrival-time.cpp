class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int totaltime = arrivalTime + delayedTime;
        if(totaltime<24)
        {
            return totaltime;
        }
        else if(totaltime>24)
        {
            return totaltime-24;
        }
        return 0;
    }
};