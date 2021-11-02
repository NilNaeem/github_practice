import 'package:flutter/material.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  void Answer() {
    print("Winner");
  }

  @override
  Widget build(BuildContext context) {
    // TODO: implement build
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: Text("Naeem"),
          centerTitle: true,
        ),
        body: Column(
          children: [
            Text("Press Any Button To Try Your Luck"),
            RaisedButton(
              child: Text("Button1"),
              onPressed: null,
            ),
            RaisedButton(
              child: Text("Button2"),
              onPressed: () {
                print("Wrong Selection");
              },
            ),
            RaisedButton(
              child: Text("Button3"),
              onPressed: Answer,
            ),
            RaisedButton(
              child: Text("Button4"),
              onPressed: () {
                print("Wrong Selection");
              },
            ),
          ],
        ),
      ),
    );
  }
}
