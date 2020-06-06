// Time complexity O(n)
// Space Complexity O(n)

//java


int max, len;
    int[] ws;
    Random rand = new Random();
    
    public Solution(int[] w) {
        max = 0;
        len = w.length;
        ws = new int[len];
				
        for(int i = 0; i<len; i++){
            max += w[i];
            ws[i] = max;
        }
        
    }
    
		// binary search
    public int pickIndex() {
        int pick = rand.nextInt(max) + 1;
        int l = 0, h = len - 1;
        while(l < h){
            int m = l + (h - l) / 2;
            if(ws[m] < pick){
                l = m + 1;
            } else {
                h = m;
            }
        }
        return l;
    }