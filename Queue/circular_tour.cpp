// // Circular TOur
// 		    unordered_map<char , int> count ;
// 		    queue<int> q;
// 		    string ans = "";
// 		    for(int i=0 ; i<A.length(); i++){
// 		        char ch = A[i];
		        
// 		      //  Increase Count
// 		      count[ch]++;
		      
// 		      //Queue mein daaldo 
// 		      q.push(ch);
		      
// 		      //Checking repeating or non repeating
// 		      while(!q.empty()){
// 		          if(count[q.front()]>1){//Repeating character
// 		              q.pop();
// 		          }
// 		          else{
// 		              // Non repeating character
// 		              ans.push_back(q.front());
// 		              break;
// 		          }
// 		      }
// 		      if(q.empty()){
// 		          ans.push_back('#');
// 		      }

// 		    }
// 		    		      return ans;