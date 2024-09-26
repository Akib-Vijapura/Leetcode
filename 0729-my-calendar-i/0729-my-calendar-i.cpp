class MyCalendar {
public:

    vector<pair<int,int>> bookings;

    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        
        for(auto event : bookings){
            int eventStart = event.first;
            int eventEnd = event.second;

            if(start < eventEnd && end > eventStart){
                return false;
            }
        }

        bookings.push_back({start , end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */