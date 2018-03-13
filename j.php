<?php
function converter($row){
  if($row === "H") return 0;
  if($row === "M") return 1;
  if($row === "S") return 2;
}

fscanf(STDIN,"%d %d\n",$n,$m);
$Grid = [];
$can_move = TRUE;
for ($x = 0 ; $x < $m ; $x++){
  $line = explode(" ",trim(fgets(STDIN)));
  $j = (int) $line[0] - 1;
  $i = converter($line[1]);
  if($i == 1){
    $can_move = FALSE;
  }
  array_push($Grid,[$i,$j]);
}

if(!$can_move) echo "No";
else{
  if ($m == 1){
    echo 'Yes';
  }else{
    $NOK = FALSE;
    for ($i = 1 ; $i < count($Grid) ; $i++){
        if($Grid[$i][1] - $Grid[$i - 1][1] <= 3 &&
        $Grid[$i][0] !== $Grid[$i - 1][0]) {
          $NOK = TRUE;
          echo 'No';
          break;
        }
    }
    if(!$NOK) echo 'Yes';
  }
}
