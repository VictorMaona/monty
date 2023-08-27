,          Read first digits
+          Store the first digits
,          Read second digits

[          Loop while second digits is not zero
  -        Decrement the second digits
  >>>      Move to a temporary cell
  <+       Increment the first digits in the temporary cell
  <-       Move back to the second digits
  >>+      Increment the counter in second cell
  <<<      Move back to the temporary cell
]

>>[->+<]>  Move the results to the first cell
.          Print the results
