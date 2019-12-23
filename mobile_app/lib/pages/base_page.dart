import 'package:flutter/material.dart';
import 'package:flutter/widgets.dart';

class BasePage extends StatelessWidget {
  Widget body;
  Widget floatingActionButton;

  BasePage({this.body, this.floatingActionButton});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Color(0xFF333366),
        title: Center(
          child: Text(
            "Planeto",
            style: TextStyle(
              fontSize: 24,
              fontWeight: FontWeight.w600,
              color: Colors.white,
            ),
          ),
        ),
      ),
      body: body,
      floatingActionButton: floatingActionButton,
    );
  }
}
