#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*****************************Encapsulated Problem class******************************/
class Problem
{
private:
    string name;
    string timeComplexity;
    string spaceComplexity;

public:
    Problem(string n, string t, string s)
        : name(n), timeComplexity(t), spaceComplexity(s) {}

    string getName() const { return name; }
    string getTimeComplexity() const { return timeComplexity; }
    string getSpaceComplexity() const { return spaceComplexity; }
};

/*****************************Abstract base class******************************/
class ArrayBase
{
public:
    virtual void showProblemList() = 0;
    virtual void showOptimalComplexity(int choice) = 0;
    virtual ~ArrayBase() {}
};

/*****************************ArrayProblemSet base class for submenu class******************************/
class ArrayProblemSet : public ArrayBase
{
protected:
    vector<Problem> problems;
    string categoryTitle;

public:
    void showProblemList() override
    {
        cout << "\n======= " << categoryTitle << " =======\n";
        for (int i = 0; i < problems.size(); ++i)
        {
            cout << i + 1 << ". " << problems[i].getName() << endl;
        }
        cout << problems.size() + 1 << ". Back to Main Menu" << endl;
    }

    int getTotalProblems() const
    {
        return problems.size();
    }

    void showOptimalComplexity(int choice) override
    {
        if (choice >= 1 && choice <= problems.size())
        {
            const Problem &p = problems[choice - 1];
            cout << "\n==============================\n";
            cout << "Problem: " << p.getName() << endl;
            cout << "------------------------------\n";
            cout << "Optimal Time Complexity : " << p.getTimeComplexity() << endl;
            cout << "Optimal Space Complexity: " << p.getSpaceComplexity() << endl;
            cout << "------------------------------\n";
        }
    }
};


/*******************************Derived Clas****************************/
class BitManipulationProblems : public ArrayProblemSet
{
public:
    BitManipulationProblems()
    {
        categoryTitle = "Bit Manipulation Problems";
        problems.push_back(Problem("Find the Missing Number in an Array", "O(n)", "O(1)"));
        problems.push_back(Problem("Single Number I (Every element twice except one)", "O(n)", "O(1)"));
        problems.push_back(Problem("Single Number II (Every element thrice except one)", "O(n)", "O(1)"));
        problems.push_back(Problem("Single Number III (Two unique numbers)", "O(n)", "O(1)"));
    }
};


class SimpleTraversalProblems : public ArrayProblemSet
{
public:
    SimpleTraversalProblems()
    {
        categoryTitle = "Simple Traversal Problems";
        problems.push_back(Problem("Largest Element in an Array", "O(n)", "O(1)"));
        problems.push_back(Problem("Second Largest Element without Sorting", "O(n)", "O(1)"));
        problems.push_back(Problem("Check if the Array is Sorted", "O(n)", "O(1)"));
        problems.push_back(Problem("Left Rotate an Array by One Place", "O(n)", "O(1)"));
        problems.push_back(Problem("Linear Search", "O(n)", "O(1)"));
        problems.push_back(Problem("Maximum Consecutive Ones", "O(n)", "O(1)"));
        problems.push_back(Problem("Rearrange Alternating Positive & Negative", "O(n)", "O(n)"));
        problems.push_back(Problem("Leaders in an Array", "O(n)", "O(1)"));
    }
};


class MathTraversalProblems : public ArrayProblemSet
{
public:
    MathTraversalProblems()
    {
        categoryTitle = "Maths + Traversal Problems";
        problems.push_back(Problem("Find the Repeating and Missing Number", "O(n)", "O(1)"));
    }
};


class SortingTraversalProblems : public ArrayProblemSet
{
public:
    SortingTraversalProblems()
    {
        categoryTitle = "Sorting + Simple Traversal";
        problems.push_back(Problem("Merge Overlapping Intervals", "O(nlogn + n)", "O(n)"));
    }
};



class UnorderedSetTraversalProblems : public ArrayProblemSet
{

public:
    UnorderedSetTraversalProblems()
    {
        categoryTitle = "Unordered set + Traversal";
        problems.push_back(Problem("Longest Consecutive Sequence", "O(n)", "O(n)"));
    }
};



class TwoPointerProblems : public ArrayProblemSet
{

public:
    TwoPointerProblems()
    {
        categoryTitle = "Two Pointer";
        problems.push_back(Problem("Remove Duplicates from Sorted Array", "O(n)", "O(1)"));
        problems.push_back(Problem("Move Zeros to End", "O(n)", "O(1)"));
        problems.push_back(Problem("Find Union of Two Sorted Arrays", "O(n + m)", "O(n + m)"));
        problems.push_back(Problem("Longest Subarray with Sum = K (Positives)", "O(n)", "O(1)"));
        problems.push_back(Problem("2 Sum Problem", "O(n)", "O(n)"));
        problems.push_back(Problem("Merge Two Sorted Arrays without Extra Space", "O(n*m)", "O(1)"));
    }
};




class SortingPointersProblems : public ArrayProblemSet
{

public:
    SortingPointersProblems()
    {
        categoryTitle = "Sorting + Pointer";
        problems.push_back(Problem("3 Sum Problem", "O(n^2)", "O(no extra space)"));
        problems.push_back(Problem("4 Sum Problem", "O(n^3)", "O(no extra space)"));
    }
};




class ReverseTraversalProblems : public ArrayProblemSet
{

public:
    ReverseTraversalProblems()
    {
        categoryTitle = "Reverse + Traversal";
        problems.push_back(Problem("Left Rotate Array by D Places", "O(n)", "O(1)"));
        problems.push_back(Problem("Right Rotate Array by D Places", "O(n)", "O(1)"));
        problems.push_back(Problem("Next Permutation", "O(n)", "O(1)"));
    }
};




class StockBuySellProblems : public ArrayProblemSet
{
private:
public:
    StockBuySellProblems()
    {
        categoryTitle = "Stock Buy and Sell";
        problems.push_back(Problem("Stock Buy and Sell to Maximize Profit", "O(n)", "O(1)"));
    }
};




class DutchNationalFlagProblems : public ArrayProblemSet
{

public:
    DutchNationalFlagProblems()
    {
        categoryTitle = "Based on Dutch National Flag Algo";
        problems.push_back(Problem("Sort Array of 0's, 1's, and 2's", "O(n)", "O(1)"));
    }
};




class MooreVotingProblems : public ArrayProblemSet
{

public:
    MooreVotingProblems()
    {
        categoryTitle = "Based on Moore Voting Algo";
        problems.push_back(Problem("Majority Element (> n/2 times)", "O(n)", "O(1)"));
        problems.push_back(Problem("Majority Element (> n/3 times)", "O(n)", "O(1)"));
    }
};




class MatrixProblems : public ArrayProblemSet
{

public:
    MatrixProblems()
    {
        categoryTitle = "Matrix Based";
        problems.push_back(Problem("Set Matrix Zeroes", "O(n*m)", "O(1)"));
        problems.push_back(Problem("Rotate Matrix by 90 Degrees", "O(n^2)", "O(1)"));
        problems.push_back(Problem("Spiral Traversal of Matrix", "O(n*m)", "O(1)"));
    }
};




class MergeSortAdvancedProblems : public ArrayProblemSet
{

public:
    MergeSortAdvancedProblems()
    {
        categoryTitle = "merge Sort Advanced";
        problems.push_back(Problem("Count Inversions in an Array", "O(n log n)", "O(n)"));
        problems.push_back(Problem("Count Reverse Pairs", "O(2n log n) ~= O(n log n)", "O(n)"));
    }
};




class PrefixSumHashmapProblems : public ArrayProblemSet
{

public:
    PrefixSumHashmapProblems()
    {
        categoryTitle = "Prefix Sum and Hashmap";
        problems.push_back(Problem("Longest Subarray with Sum = K (Positive + Negative)", "O(n)", "O(n)"));
        problems.push_back(Problem("Largest Subarray with Sum = 0", "O(n)", "O(n)"));
        problems.push_back(Problem("Count Subarrays with Given Sum", "O(n)", "O(n)"));
    }
};




class PrefixXorHashmapProblems : public ArrayProblemSet
{

public:
    PrefixXorHashmapProblems()
    {
        categoryTitle = "Prefix Xor and Hashmap ";
        problems.push_back(Problem("Count Subarrays with Given XOR", "O(n)", "O(n)"));
    }
};




class KadaneProblems : public ArrayProblemSet
{

public:
    KadaneProblems()
    {
        categoryTitle = "Based on Kadane's Algo";
        problems.push_back(Problem("Maximum Subarray Sum (Kadane's Algorithm)", "O(n)", "O(1)"));
        problems.push_back(Problem("Print Subarray with Maximum Subarray Sum", "O(n)", "O(1)"));
        problems.push_back(Problem("Maximum Product Subarray", "O(n)", "O(1)"));
    }
};




class SubarrayProblems : public ArrayProblemSet
{

public:
    SubarrayProblems()
    {
        categoryTitle = "Subarray Problems";
        problems.push_back(Problem("Maximum Subarray Sum (Kadane's)", "O(n)", "O(1)"));
        problems.push_back(Problem("Longest Subarray with Sum = K (Positive)", "O(n)", "O(1)"));
        problems.push_back(Problem("Largest Subarray with Sum = 0", "O(n)", "O(n)"));
        problems.push_back(Problem("Maximum Product Subarray", "O(n)", "O(1)"));
        problems.push_back(Problem("Count of Subarrays with Given XOR", "O(n)", "O(n)"));
    }
};

// Sub menu
void problemSubMenu(ArrayProblemSet *category)
{
    int choice;
    while (true)
    {
        category->showProblemList();
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == category->getTotalProblems() + 1)
            break;
        if(choice > category->getTotalProblems() + 1){ 
            cout << "Invalid choice. Please try again.\n";
        }  
        category->showOptimalComplexity(choice);
    }
}

// Main Menu
void mainMenu()
{
    int choice;
    while (true)
    {
        cout << "\n===========================================\n";
        cout << "      ARRAY PROBLEM SIMULATOR (OOP)        \n";
        cout << "     View Optimal Time & Space Only        \n";
        cout << "===========================================\n";
        cout << "1. Bit Manipulation\n";
        cout << "2. Simple Traversal\n";
        cout << "3. Maths Operation + Simple Traversal\n";
        cout << "4. Sorting + Simple Traversal\n";
        cout << "5. Unordered Set Operations + Traversal\n";
        cout << "6. Two-Pointer Approach\n";
        cout << "7. Sorting + Pointers Approach\n";
        cout << "8. Simple Traversal + Reverse Operation\n";
        cout << "9. Stock Buy and Sell\n";
        cout << "10. Dutch National Flag Algo\n";
        cout << "11. Moore Voting Algo\n";
        cout << "12. Matrix\n";
        cout << "13. Merge Sort (Advance)\n";
        cout << "14. Prefix Sum and Hashmap Approach\n";
        cout << "15. Prefix XOR and Hashmap Approach\n";
        cout << "16. Kadane Algo\n";
        cout << "17. Subarray Problem\n";
        cout << "18. Exit\n\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            BitManipulationProblems bit;
            problemSubMenu(&bit);
            break;
        }
        case 2:
        {
            SimpleTraversalProblems simple;
            problemSubMenu(&simple);
            break;
        }
        case 3:
        {
            MathTraversalProblems math;
            problemSubMenu(&math);
            break;
        }
        case 4:
        {
            SortingTraversalProblems st;
            problemSubMenu(&st);
            break;
        }
        case 5:
        {
            UnorderedSetTraversalProblems ust;
            problemSubMenu(&ust);
            break;
        }
        case 6:
        {
            TwoPointerProblems tp;
            problemSubMenu(&tp);
            break;
        }
        case 7:
        {
            SortingPointersProblems sp;
            problemSubMenu(&sp);
            break;
        }
        case 8:
        {
            ReverseTraversalProblems rt;
            problemSubMenu(&rt);
            break;
        }
        case 9:
        {
            StockBuySellProblems stock;
            problemSubMenu(&stock);
            break;
        }
        case 10:
        {
            DutchNationalFlagProblems dnf;
            problemSubMenu(&dnf);
            break;
        }
        case 11:
        {
            MooreVotingProblems moore;
            problemSubMenu(&moore);
            break;
        }
        case 12:
        {
            MatrixProblems matrix;
            problemSubMenu(&matrix);
            break;
        }
        case 13:
        {
            MergeSortAdvancedProblems mergesort;
            problemSubMenu(&mergesort);
            break;
        }
        case 14:
        {
            PrefixSumHashmapProblems prefixSum;
            problemSubMenu(&prefixSum);
            break;
        }
        case 15:
        {
            PrefixXorHashmapProblems prefixXor;
            problemSubMenu(&prefixXor);
            break;
        }
        case 16:
        {
            KadaneProblems kadane;
            problemSubMenu(&kadane);
            break;
        }
        case 17:
        {
            SubarrayProblems sub;
            problemSubMenu(&sub);
            break;
        }
        case 18:
            cout << "\nThank you for using Array Problem Simulator.\n";
            return;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
}

// Run
int main()
{
    mainMenu();
    return 0;
}
