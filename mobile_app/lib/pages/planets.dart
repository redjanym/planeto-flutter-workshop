import 'dart:convert';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:planeto/helpers/config.dart';
import 'package:planeto/pages/base_page.dart';
import 'package:planeto/widgets/planet_card.dart';
import 'package:http/http.dart' as http;

class PlanetsPage extends StatefulWidget {
  @override
  State<StatefulWidget> createState() {
    return _PlanetsPageState();
  }
}

class _PlanetsPageState extends State<PlanetsPage> {
  List planets = [];
  String name;

  void clearSearch() {
    setState(() {
      name = null;
      fetchInitialPlanetsList();
    });
  }

  void fetchInitialPlanetsList() {
    http.get(BASE_API_URL).then((http.Response response) {
      final Map responseBody = json.decode(response.body);

      setState(() {
        planets = responseBody['data'];
      });
    });
  }

  void searchPlanetsByName(String name) {
    http.get(BASE_API_URL+"?q=" + name).then((http.Response response) {
      final Map responseBody = json.decode(response.body);

      setState(() {
        planets = responseBody['data'];
      });
    });
  }

  @override
  void initState() {
    // get planets from api
    fetchInitialPlanetsList();
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    Widget content = Center(
      child: Text(
        "No planets found...",
        style: TextStyle(fontSize: 18),
      ),
    );

    if (planets.length > 0) {
      List<Widget> planetsWidgetsList = [];

      for (int i = 0; i < planets.length; i++) {
        Map planet = planets[i];
        planetsWidgetsList.add(PlanetCard(planet));
      }

      content = SingleChildScrollView(
        child: Column(
          children: planetsWidgetsList,
        ),
      );
    }

    return BasePage(
      body: content,
      floatingActionButton: FloatingActionButton(
        backgroundColor: Color(0xFF333366),
        child: Icon(FontAwesomeIcons.filter),
        onPressed: () {
          _showFilterDialog();
        },
      ),
    );
  }

  void _showFilterDialog() {
    GlobalKey<FormState> _formKey = GlobalKey<FormState>();
    GlobalKey _tagKey = GlobalKey(debugLabel: "Tag");

    showDialog(
      context: context,
      builder: (BuildContext context) {
        // return object of type Dialog
        return AlertDialog(
          title: Text("Filter planets by name"),
          content: Container(
            child: Form(
              key: _formKey,
              child: TextFormField(
                key: _tagKey,
                initialValue: name,
                decoration: InputDecoration(
                  filled: true,
                  fillColor: Colors.white,
                ),
                keyboardType: TextInputType.text,
                validator: (String value) {
                  if(value.length == 0){
                    return "Please add a name!";
                  }

                  setState(() {
                    name = value;
                  });

                  return null;
                },
                onSaved: (value) {},
              ),
            ),
          ),
          actions: <Widget>[
            FlatButton(
              child: Text(
                "Clear",
                style: TextStyle(color: Color(0xFF333366)),
              ),
              onPressed: () {
                clearSearch();
                Navigator.of(context).pop();
              },
            ),
            RaisedButton(
              child: Text(
                "Filter",
                style: TextStyle(color: Colors.white),
              ),
              color: Color(0xFF333366),
              onPressed: () {
                if (_formKey.currentState.validate() == false) {
                  return;
                }

                searchPlanetsByName(name);

                Navigator.of(context).pop();
              },
            ),
          ],
        );
      },
    );
  }
}
