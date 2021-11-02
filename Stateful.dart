import 'package:flutter/material.dart';

void main() => runApp(MyApp());

class MyApp extends StatefulWidget {
  @override
  MyState createState() => MyState();
}

class MyState extends State<MyApp> {
  Color _containerColor = Colors.yellow;

  void changeColor() {
    setState(() {
      if (_containerColor == Colors.yellow) {
        _containerColor = Colors.cyanAccent;
      } else {
        _containerColor = Colors.yellow;
      }
    });
  }

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: "Stateful Widget",
      theme: ThemeData(
        primaryColor: Colors.pinkAccent,
      ),
      home: Scaffold(
        appBar: AppBar(
          title: Text("StateFul Widget Practices"),
        ),
        body: Container(
            decoration: BoxDecoration(
          color: _containerColor,
        )),
        floatingActionButton: FloatingActionButton(
          onPressed: changeColor,
          child: Icon(Icons.add),
          tooltip: 'Clicked',
        ),
      ),
    );
  }
}
