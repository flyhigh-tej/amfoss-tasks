import 'package:flutter/material.dart';
import 'package:introduction_screen/introduction_screen.dart';
import 'package:ui_1/pages/home_page.dart';

class OnBoardingPage extends StatelessWidget {
  @override
  Widget build(BuildContext context) => SafeArea(
        child: IntroductionScreen(
          showNextButton: false,
          pages: [
            PageViewModel(
              image: buildImage('assets/Screenshot(111).png'),
              title: 'YOGA SURGE',
              body: 'Welcome to yoga world',
              footer: Text('Inhale the future, exhale the past'),
              decoration: getPageDecoration(),
            ),
            PageViewModel(
              image: buildImage('assets/Screenshot(112).png'),
              title: 'Healthy Freaks Exercise',
              body: 'Letting go is the hardest asana',
              decoration: getPageDecoration(),
            ),
            PageViewModel(
              image: buildImage('assets/Screenshot(113).png'),
              title: 'Cycling',
              body:
                  'You cannot always control what\n goes on outside. But you can \nalways control what goes on inside',
              decoration: getPageDecoration(),
            ),
            PageViewModel(
              title: 'Meditation',
              body: 'The longest journey of any person\n is the journey inward',
              image: buildImage('assets/Screenshot(114).png'),
              decoration: getPageDecoration(),
            ),
          ],
          done: Text('Get Started',
              style: TextStyle(fontWeight: FontWeight.w600)),
          onDone: () => goToHome(context),
          showSkipButton: true,
          skip: Text('Skip'),
          onSkip: () => goToHome(context),
          dotsDecorator: getDotDecoration(),
          onChange: (index) => print('Page $index selected'),
          globalBackgroundColor: Colors.red[100],
          skipFlex: 0,
          nextFlex: 0,
        ),
      );

  void goToHome(context) => Navigator.of(context).pushReplacement(
        MaterialPageRoute(builder: (_) => HomePage()),
      );

  Widget buildImage(String path) =>
      Center(child: Image.asset(path, width: 350));

  DotsDecorator getDotDecoration() => DotsDecorator(
        color: Color(0xFFBDBDBD),
        activeColor: Colors.black,
        size: Size(12, 12),
        activeSize: Size(22, 10),
        activeShape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(24),
        ),
      );

  PageDecoration getPageDecoration() => PageDecoration(
        titleTextStyle: TextStyle(fontSize: 28, fontWeight: FontWeight.bold),
        bodyTextStyle: TextStyle(fontSize: 20),
        descriptionPadding: EdgeInsets.all(16).copyWith(bottom: 0),
        imagePadding: EdgeInsets.all(24),
        pageColor: Colors.red[100],
      );
}
