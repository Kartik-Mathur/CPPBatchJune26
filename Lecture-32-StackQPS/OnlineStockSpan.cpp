class Pair {
public:
    int price;
    int span;
};

class StockSpanner {
public:
    stack<Pair> s; // Data member stack bana liya meine ek

    StockSpanner() {

    }

    int next(int currentDayPrice) {
        int span = 1;
        while (!s.empty() and s.top().price <= currentDayPrice) {
            span += s.top().span ;
            s.pop();
        }

        // Kyunki previous day tak ka mujhe answer required hoga
        // to calculate the answer for current day
        s.push({currentDayPrice, span}); // Toh that's why currentDayPrice, span}
        // Ko stack mei store kr lia
        return span;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

