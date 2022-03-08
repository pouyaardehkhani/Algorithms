# Juggler Sequence
Juggler Sequence is a series of integer number in which the first term starts with a positive integer number a and the remaining terms are generated from the immediate previous term using the below recurrence relation : 

<img src="https://render.githubusercontent.com/render/math?math=a_{k+1}=\begin{Bmatrix} \lfloor a_{k}^{1/2} \rfloor & for \quad even \quad a_k\\ \lfloor a_{k}^{3/2} \rfloor & for \quad odd \quad a_k \end{Bmatrix}">

Juggler Sequence starting with number 3:  5, 11, 36, 6, 2, 1

Juggler Sequence starting with number 9:  9, 27, 140, 11, 36, 6, 2, 1

#### Important Points: 
* The terms in Juggler Sequence first increase to a peak value and then start decreasing.
* The last term in Juggler Sequence is always 1.