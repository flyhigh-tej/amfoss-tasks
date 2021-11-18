import 'package:flutter/material.dart';

class text extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return Column(
      children: <Widget>[
        Stack(
          children: <Widget>[
            Image(
              width: double.infinity,
              height: MediaQuery.of(context).size.height / 3,
              fit: BoxFit.cover,
              image: AssetImage('assets/Screenshot(115).png'),
            ),
          ],
        ),
        SizedBox(
          height: 40,
        ),
        ListTile(
          title: Center(
              child: Text('Tejasvin V',
                  style: TextStyle(
                      fontFamily: 'IBM_Plex_Sans',
                      fontSize: 20,
                      fontWeight: FontWeight.w600))),
        ),
        ListTile(
          title: Center(
              child: Text('About Me',
                  style: TextStyle(fontSize: 18, fontWeight: FontWeight.w500))),
          subtitle: Center(
              child: Text(
                  '  Pursuing B.tech ECE at AVVP-Amritapuri\n  Passionate about coding and participating\n  in Hackathons and Gsoc. Willing to use my\n  skills and abilities for the betterment of \n  the society.',
                  style: TextStyle(
                      fontFamily: 'IBM_Plex_Sans',
                      fontSize: 16,
                      fontWeight: FontWeight.w400))),
        ),
      ],
    );
  }
}
