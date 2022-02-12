# Solution 1
The algorithm starts with course `0` and works up to course `numCourses - 1`. The vectors `res` and `stack` contain the resultant vector and course stack respectively. For each course, it first checks if the course is already in `res` and if so, skips it. It then pushes the course to the stack and searches the `prerequisites` to see if there are any prerequisite courses. If none are found, it pushes the course to `res` and pops it from the course stack. If there is a prerequisite course, that prerequisite is pushed to the stack and the search is restarted for prerequisites for the new course, and so on. When no more prerequisites are found, they are popped from the stack one-by-one which the search being restarted after each popping, in case of multiple prerequisites. Once the stack is empty again, the algorithm goes to the next course in the outermost for loop and the cycle continues.

Each prerequisite that is added to the stack, is changed to `-1` to mark that it has already been used. Before a prerequisite course is added to the stack, the algorithm checks that it is not already in the stack, which would indicate that a cycle is present.

There are several points at which the algorithm must search `stack` and `res` so there is likely ways of optimising the algorithm or developing faster algorithms but I have chosen not to investigate these yet.