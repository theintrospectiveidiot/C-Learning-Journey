## fun

Recently, I read the Ken Thompson's Turing Award lecture titled "Reflecions on Trusting Trust" and felt like a quine was such cool thing to write.
 
First, I made a simple quine that reproduces itself without any changes, then a trojanized quine which reproduces itself replacing "char" with " int" every time it encounters "char".

Then, thought that it would be really really cool to have a program that updates itself when its compiled and run once and has some way to tell how many times it has been compiled and run.

So, I created this version of trojanized quine which does that.

Added a beginner version control system which allows you to move between generations.

bite_me does what it used to do, mutate the original code to change the generation count, but now, it saves the previous generation (ancestor) in "collection_of_all_sins".

visit_cemetery allows you to fetch the ancestors if the current generation isn't upto the mark.

## Notes
- The debugging was really satisfying.
- This is really cool man, I just can't stop admiring it!!
- Git is for losers!!!!!!!!!(/s)
