import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:planeto/pages/planet_details.dart';

class PlanetCard extends StatelessWidget {
  Map planet;
  PlanetCard(this.planet);

  @override
  Widget build(BuildContext context) {
    return GestureDetector(
      onTap: () {
        Navigator.push(
          context,
          MaterialPageRoute(
            builder: (context) => PlanetDetailsPage(
              planet: planet,
            ),
          ),
        );
      },
      child: Container(
        height: 120,
        margin: const EdgeInsets.symmetric(
          vertical: 16.0,
          horizontal: 24.0,
        ),
        child: Stack(
          children: <Widget>[
            Container(
              height: 120,
              margin: EdgeInsets.only(left: 45),
              padding: EdgeInsets.only(left: 60, top: 30),
              decoration: BoxDecoration(
                color: Color(0xFF333366),
                shape: BoxShape.rectangle,
                borderRadius: BorderRadius.circular(10),
              ),
              alignment: Alignment.centerLeft,
              child: Column(
                children: <Widget>[
                  Align(
                    alignment: Alignment.centerLeft,
                    child: Text(
                      planet['name'],
                      style: TextStyle(
                          fontSize: 22,
                          fontWeight: FontWeight.w600,
                          color: Colors.white),
                    ),
                  ),
                  SizedBox(height: 10),
                  Row(
                    children: <Widget>[
                      Icon(
                        FontAwesomeIcons.mapMarkerAlt,
                        size: 15,
                        color: Colors.white54,
                      ),
                      SizedBox(width: 5),
                      Text(
                        (planet.containsKey('aphelion')
                                ? planet['aphelion']
                                : planet['apogee']) +
                            " Km",
                        style: TextStyle(fontSize: 17, color: Colors.white54),
                      )
                    ],
                  )
                ],
              ),
            ),
            Container(
              margin: EdgeInsets.symmetric(vertical: 16),
              alignment: FractionalOffset.centerLeft,
              child: Hero(
                tag: "planet-hero-${planet['position']}",
                child: Image.network(
                  planet['logo'],
                  width: 90,
                  height: 90,
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}
