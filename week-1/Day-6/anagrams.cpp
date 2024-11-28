//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    vector <int> pat_f(256, 0);
	    vector <int> txt_f(256, 0); 
	    
	    int pat_size = pat.size();
	    int txt_size = txt.size();
	    
	    for(int i=0; i<pat_size; i++){
	        pat_f[pat[i]]++;
	        txt_f[txt[i]]++;
	    }
	    
	    int count = 0;
	    
	    if(pat_f == txt_f) count++;
	    
	    int i=0; int j= pat_size;
	    
	    while(j<txt_size){
	        txt_f[txt[j]]++;
	        txt_f[txt[i]]--;
	        if(pat_f == txt_f){
	            count++;
	        }
	        i++;
	        j++;
	    }
	    return count;
	    
	}

};