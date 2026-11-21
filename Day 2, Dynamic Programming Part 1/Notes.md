# Exercises

- Climbing Stairs https://leetcode.com/problems/climbing-stairs/
- Min Cost Climbing Stairs https://leetcode.com/problems/min-cost-climbing-stairs/
- N-th Tribonacci Number https://leetcode.com/problems/n-th-tribonacci-number/
- Dice Combinations https://cses.fi/problemset/task/1633
- House Robber https://leetcode.com/problems/house-robber/
- Niko's Tactical Cards https://codeforces.com/problemset/problem/2173/B
- Minimising Coins https://cses.fi/problemset/task/1634
  - This one is a Knapsack-like problem
  - Consider reading Chapter 6 of [Guide to Competitive Programming](https://rmit.primo.exlibrisgroup.com/permalink/61RMIT_INST/1eukj0t/cdi_springer_books_10_1007_978_3_031_61794_2) to learn more about it!
- Longest Increasing Subsequence https://leetcode.com/problems/longest-increasing-subsequence/
  - This problem has two main solutions: a *quadratic solution* ($\mathcal{O}(n^2)$) and a *linearithmic solution* ($\mathcal{O}(n~log~n)$)
  - To create the *quadratic solution,* don't just look at the last two or three values from the current index; look at *all prior values!* The answer to the "current subproblem" depends on the answer to all "previous subproblems"
  - Don't worry about the *linearithmic solution* right away; it uses a data structure we haven't covered yet