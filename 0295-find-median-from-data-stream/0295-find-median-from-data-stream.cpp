class MedianFinder
{
    public:

        priority_queue<int> mx;
    priority_queue<int, vector < int>, greater < int>> mn;
    MedianFinder() {}
    void addNum(int num)
    {
        if (mx.empty() or num < mx.top())
        {
            mx.push(num);
            if (mx.size() > mn.size() + 1)
            {
                mn.push(mx.top());
                mx.pop();
            }
        }
        else
        {
            mn.push(num);
            if (mn.size() > mx.size())
            {
                mx.push(mn.top());
                mn.pop();
            }
        }
    }

    double findMedian()
    {
        double ans = 0.0;
        if (mx.size() == mn.size())
        {
            double a = mx.top();
            double b = mn.top();
            ans = (a + b) / 2.0;
        }
        else
            ans = mx.top();
        return ans;
    }
};