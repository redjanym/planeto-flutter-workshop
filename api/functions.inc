<?php

require_once "planets.inc";

function getListOfPlanets()
{
    return PLANETS;
}

function getPlanetByPosition($position)
{
    foreach (PLANETS as $planet) {
        if($planet['position'] == $position){
            return $planet;
        }
    }

    return null;
}

function filterPlanetsByName($name)
{
    return array_values(array_filter(PLANETS, function ($planet) use($name) {
        return strpos(strtolower($planet['name']), strtolower($name)) > -1;
    }));
}