int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count = 0;
    vector<int> freq(k, 0); // Frequency array to store remainders
    
    for (int i = 0; i < ar.size(); i++) {
        int remainder = ar[i] % k;
        int complement = (k - remainder) % k;
        
        count += freq[complement]; // Add the count of complements
        
        freq[remainder]++; // Update the frequency array
    }
    
    return count;
}