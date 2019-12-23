<?php

require_once "functions.inc";

if(isset($_GET['position']) && $_GET['position']){
    $response = getPlanetByPosition($_GET['position']);
} elseif (isset($_GET['q']) && $_GET['q']) {
    $response = filterPlanetsByName($_GET['q']);
} else {
    $response = getListOfPlanets();
}

header('Content-Type: application/json');
echo json_encode(array(
    "data" => $response
));
