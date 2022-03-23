class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        
        
          int i,j,l,r,n=piles.size(),k=H,c=0,mid,x=0;
        
        l=1;
        r=1e9;
        while(l<r)
        {
            mid=l+(r-l)/2;
            x=0;
            c=0;
            for(i=0;i<n;i++)
            {
                c+=piles[i]/mid;
                if(piles[i]%mid!=0)
                {
                    c++;
                }
            }
            if(c>k)
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
            
            
        }
      
        
        return l;
        
        
    }
};