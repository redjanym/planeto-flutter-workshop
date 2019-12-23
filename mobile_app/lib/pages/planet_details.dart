import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';
import 'package:planeto/pages/base_page.dart';

class PlanetDetailsPage extends StatelessWidget {
  Map planet;

  PlanetDetailsPage({this.planet});

  @override
  Widget build(BuildContext context) {
    List<Widget> moonsList = [];

    for (int i = 0; i < planet['moons']['list'].length; i++) {
      String moon = planet['moons']['list'][i];

      moonsList.add(Container(
        margin: EdgeInsets.only(right: 5),
        padding: EdgeInsets.all(10),
        decoration: BoxDecoration(
          color: Color(0xFF333366),
          shape: BoxShape.rectangle,
          borderRadius: BorderRadius.circular(8.0),
        ),
        width: 70,
        height: 70,
        child: Center(
          child: Text(
            moon,
            style: TextStyle(color: Colors.white),
            textAlign: TextAlign.center,
          ),
        ),
      ));
    }

    return BasePage(
      body: SingleChildScrollView(
        child: Column(
          children: <Widget>[
            Stack(
              children: <Widget>[
                Container(
                  decoration: BoxDecoration(
                      image: DecorationImage(
                          image: NetworkImage(planet['cover']),
                          fit: BoxFit.cover)),
                  height: 300,
                ),
                Container(
                  margin: EdgeInsets.only(
                    left: 24,
                    right: 24,
                    bottom: 24,
                    top: 200,
                  ),
                  child: Stack(
                    children: <Widget>[
                      _getPlanetCard(),
                      _getPlanetThumbnail(),
                    ],
                  ),
                )
              ],
            ),
            planet['moons']['total'] > 0 ?
            Center(
              child: Text(
                "${planet['moons']['total']} Moons",
                style: TextStyle(fontSize: 25, fontWeight: FontWeight.w600),
              ),
            ) : Container(),
            SizedBox(
              height: 10,
            ),
            planet['moons']['total'] > 0
                ? Container(
                    height: 70,
                    margin: EdgeInsets.symmetric(horizontal: 25),
                    child: ListView(
                      scrollDirection: Axis.horizontal,
                      children: moonsList,
                    ),
                  )
                : Container(),
            SizedBox(
              height: 10,
            ),
            Container(
              padding: EdgeInsets.symmetric(horizontal: 32.0),
              child: Column(
                crossAxisAlignment: CrossAxisAlignment.start,
                children: <Widget>[
                  Text("Description",
                      style:
                          TextStyle(fontSize: 25, fontWeight: FontWeight.w600)),
                  SizedBox(
                    height: 10,
                  ),
                  Text(planet['description'], style: TextStyle(fontSize: 18)),
                ],
              ),
            ),
          ],
        ),
      ),
    );
  }

  Widget _getPlanetThumbnail() {
    return Container(
      margin: EdgeInsets.symmetric(vertical: 16.0),
      alignment: FractionalOffset.center,
      child: Hero(
        tag: "planet-hero-${planet['position']}",
        child: Image(
          image: NetworkImage(planet['logo']),
          height: 92.0,
          width: 92.0,
        ),
      ),
    );
  }

  Widget _getPlanetCard() {
    return Container(
      child: _getPlanetCardContent(),
      height: 170.0,
      margin: EdgeInsets.only(top: 70.0),
      decoration: BoxDecoration(
        color: Color(0xFF333366),
        shape: BoxShape.rectangle,
        borderRadius: BorderRadius.circular(8.0),
        boxShadow: <BoxShadow>[
          BoxShadow(
            color: Colors.black12,
            blurRadius: 10.0,
            offset: Offset(0.0, 10.0),
          ),
        ],
      ),
    );
  }

  Widget _getPlanetCardContent() {
    return Container(
      margin: EdgeInsets.fromLTRB(25.0, 42.0, 25.0, 16.0),
      child: Column(
        children: <Widget>[
          Text(
            planet['name'],
            style: TextStyle(
              fontSize: 25,
              fontWeight: FontWeight.w600,
              color: Colors.white,
            ),
          ),
          SizedBox(height: 20),
          planet.containsKey("aphelion")
              ? Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: <Widget>[
                    Text(
                      "Aphe: ${planet['aphelion']} Km",
                      style: TextStyle(color: Colors.white, fontSize: 15),
                    ),
                    Text(
                      "Peri: ${planet['perihelion']} Km",
                      style: TextStyle(color: Colors.white, fontSize: 15),
                    ),
                  ],
                )
              : Row(
                  mainAxisAlignment: MainAxisAlignment.spaceBetween,
                  children: <Widget>[
                    Text(
                      "Peri: ${planet['perigee']} Km",
                      style: TextStyle(color: Colors.white, fontSize: 15),
                    ),
                    Text(
                      "Apog: ${planet['apogee']} Km",
                      style: TextStyle(color: Colors.white, fontSize: 15),
                    ),
                  ],
                ),
          SizedBox(height: 10),
          Row(
            mainAxisAlignment: MainAxisAlignment.spaceBetween,
            children: <Widget>[
              Text(
                "Day: ${planet['length_day']}",
                style: TextStyle(color: Colors.white, fontSize: 15),
              ),
              Text(
                "Year: ${planet['length_year']}",
                style: TextStyle(color: Colors.white, fontSize: 15),
              ),
            ],
          )
        ],
      ),
    );
  }
}
