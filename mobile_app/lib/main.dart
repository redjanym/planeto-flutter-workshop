import 'package:flutter/material.dart';
import 'package:planeto/pages/planets.dart';

void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Planeto',
      home: PlanetsPage(),
    );
  }
}