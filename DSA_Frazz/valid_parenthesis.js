/**
 * @param {string} s
 * @return {boolean}
 */
class Stack {
    constructor() {
        this.items = [];
    }

    // Add element to the top of the stack
    push(element) {
        this.items.push(element);
    }

    // Remove element from the top of the stack
    pop() {
        if (this.isEmpty()) {
            return "Underflow"; // Stack is empty
        }
        return this.items.pop();
    }

    // Peek at the top element of the stack
    top() {
        if (this.isEmpty()) {
            return "Stack is empty";
        }
        return this.items[this.items.length - 1];
    }

    // Check if the stack is empty
    isEmpty() {
        return this.items.length === 0;
    }

    // Print the stack
    printStack() {
        let str = "";
        for (let i = 0; i < this.items.length; i++) {
            str += this.items[i] + " ";
        }
        return str;
    }
}



var isValid = function (s) {
    const st = new Stack();

    for (let i = 0; i < s.length; i++) {

        if (s[i] === '(' || s[i] === '{' || s[i] === '[') {
            st.push(s[i]);
        }
        else {

            const top = st.top();
            if (st.isEmpty() || (s[i] === ')' && top !== '(') || (s[i] === '}' && top !== '{') || (s[i]=== ']' && top !=='[')){
                return false;
            }
            st.pop();

        }
    }

    return st.isEmpty();
};
