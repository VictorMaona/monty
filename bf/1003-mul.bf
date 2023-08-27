,          Read first digit
+          Store the first digit
,          Read second digit

[          Loop while second digit is not zero
  -        Decrement the second digit
  >>>      Move to a temporary cell
  <+       Increment the first digit in the temporary cell
  <-       Move back to the second digit
  >>+      Increment the counter in the second cell
  <<<      Move back to the temporary cell
]

>>[->+<]>  Move the result to the first cell
.          Print the result
>          Move to the second cell
.          Print a new line
