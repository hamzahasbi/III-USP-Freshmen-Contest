<?php

function distance ($x,$y,$a,$b){
    return sqrt(($x - $a) * ($x - $a) + ($y - $b) * ($y - $b));
}
fscanf(STDIN,"%d\n",$q);
$table = [];
while($q--){
    $line = explode(" ",trim(fgets(STDIN)));
    $c = $line[0];
    $x = (int) $line[1];
    $y = (int) $line[2];
    $r = (int) $line[3];
    $collapse = FALSE;
    $data = [$x,$y,$r];
    if($c == 'A'){
        foreach($table as $values){
            if(distance($x,$y,$values[0],$values[1]) < $values[2] + $r){
                $collapse = TRUE;
                break;
            }

        }

        if(!$collapse) {
            echo "Ok\n";
            array_push($table,$data);
        }
        else echo "No\n";
    }else{
        $to_remove = 0;
        foreach($table as $key => $values){
            if($data == $values){
                $collapse = TRUE;
                $to_remove = $key;
                break;
            }
        }
        if($collapse){
            unset($table[$to_remove]);
            echo "Ok\n";
        }else echo "No\n";
    }
}
