// Source : https://leetcode.com/problems/fizz-buzz-multithreaded/
class FizzBuzz {
private:
    int n;
    mutex m ; // Add A mutex
    int count; // A varaible tracker
    condition_variable cv; // Not sure why we need this, need to read up

public:
    FizzBuzz(int n) {
        this->n = n;
        this->count=1;
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        
        while (true)
        {
            unique_lock<mutex> lock(m); // We lock
            while(count<=n && (count%3!=0 || count%5==0)) // While count is 5
                cv.wait(lock);
            if (count >n) return;
            printFizz();
            ++count;
            cv.notify_all();
            
            
        }
        
        
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
     
        while(true)
        {
            unique_lock<mutex> lock(m);
            while(count<=n && (count%5!=0 || count%3==0))
                cv.wait(lock);
            if(count >n) return;
            printBuzz();
            ++count;
            cv.notify_all();
            
        }
    
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        while(true){
            unique_lock<mutex> lock(m);
            while(count<=n && (count%5!=0 || count%3!=0))
                cv.wait(lock);
            if(count >n) return;
            printFizzBuzz();
            ++count;
            cv.notify_all();
            
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        while(true){
            unique_lock<mutex> lock(m);
            while(count <=n && (count%5==0 || count%3==0))
                cv.wait(lock);
            if(count >n) return;
            printNumber(count++);
            cv.notify_all();
            
        }
    }
};