import 'package:flutter/material.dart';
import 'package:ui_1/main.dart';
import 'package:ui_1/pages/onboarding_page.dart';
import 'package:ui_1/pages/text.dart';

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: Colors.white,
      appBar: AppBar(
        title: Text(MyApp.title),
        leading: IconButton(
          icon: Icon(Icons.arrow_back),
          onPressed: () => goToOnBoarding(context),
        ),
      ),
      body: text(),
    );
  }

  void goToOnBoarding(context) => Navigator.of(context).pushReplacement(
        MaterialPageRoute(builder: (_) => OnBoardingPage()),
      );
}
