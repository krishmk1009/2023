class Node{
    constructor(data){
        this.data = data;
        this.next = null;
    }
}
*/

class Solution {
    //Function to find the length of a loop in the linked list.
    calculateLen(slow, fast){
        let len = 0;

        while(true){
            fast= fast.next;
            len++;
            
            if(fast=== slow) break;
        }
        return len;
    }
    countNodesinLoop(head)
    {
        //your code here
        let slow = head;
        let fast = head;
        
        while(fast !==null && fast.next !==null){
            
            
            fast =fast.next.next;
            slow = slow.next;
            
            if(fast === slow) return this.calculateLen(slow, fast);
        }
        
        return 0;
    }
    
    
    
}
