// NOTES
    // Loop through all possible truth values for p and q
    // The logical AND operator is represented by &&
    // The logical OR operator is represented by ||
    // The logical NOT operator is represented by !




#include <iostream> // Required for input/output

using namespace std;


// This program generates a truth table for the logical expression p ^ ~q
// The expression is read as "p AND NOT q".

/*
int main()
{
    cout << "Truth table for p ^ ~q:\n";
    cout << "p\tq\t~q\tp^~q\n";

    // Loop through all possible truth values for p and q
    for (int p = 0; p <= 1; p++)
    {
        for (int q = 0; q <= 1; q++)
        {
            int not_q = !q;          // Logical NOT of q
            int result = p && not_q; // Logical AND of p and ~q
            cout << p << "\t" << q << "\t" << not_q << "\t" << result << endl;
        }
    }

    return 0;
} 
*/








// This program generates a truth table for the logical expression (p v q) -> r

/*
int main()
{
    cout  << "Truth table for (pvq)-> r:" << endl;
    cout << "p \t q \t r \t pvq \t (pvq)->r" << endl;

// Loop through all possible truth values for p, q, and r
  for (int p=0 ; p<=1 ; p++){
    for (int q=0 ; q<=1 ; q++){
         for (int r=0 ; r<=1 ; r++){
            int pvq = p || q;
            int pvq_imp_r = !pvq || r; // Logical implication (pvq) -> r
            cout << p << "\t" << q << "\t" << r << "\t" << pvq << "\t" << pvq_imp_r << endl;
         }
    }
  }
} 
*/







/*
int main()
{
    cout << "truth table for a two variable propositional function:" << endl;
    cout << "p \t q \t p^q" << endl;

    // Loop through all possible truth values for p and q

    for (int p=0 ; p<=1 ; p++){
        for (int q=0 ; q<=1 ; q++){
            int p_and_q = p && q; // Logical AND of p and q
            cout << p << "\t" << q << "\t" << p_and_q << endl;
        }
    }
}*/






#include <iostream>
using namespace std;

int main() {
    cout << "Truth table for P, Q, PvQ:\n";
    cout << "p \t q \t pvq \n";

    // Flags to check if the expression is always true or always false
    bool all_true = true;
    bool all_false = true;

    // Loop through all truth values for p and q
    for (int p = 0; p <= 1; p++) {
        for (int q = 0; q <= 1; q++) {
            int result = p || q; // Logical OR
            cout << p << "\t" << q << "\t" << result << endl;

            // Update flags
            if (!result) {
                all_true = false;
            }
            if (result) {
                all_false = false;
            }
        }
    }

    // Determine the classification
    cout << "\nClassification of pvq: ";
    if (all_true) {
        cout << "Tautology" << endl;
    } else if (all_false) {
        cout << "Absurdity" << endl;
    } else {
        cout << "Contingency" << endl;
    }

    return 0;
}
