# Planeto

A Flutter project created as a demo presentation during the Flutter Workshop with title: Building Android and iOS apps using Flutter SDK by Google.

## Downloading repository
```
git clone https://github.com/redjanym/planeto-flutter-workshop.git

cd planeto-flutter-workshop/
```

## Getting Started

This repository includes 2 separate codebases:

### - API

A set of simple PHP scripts which provide an API endpoint:

1- http://localhost/planeto-flutter-workshop/api (you can change this url to the one adapted to where you cloned the repository)

- Method: GET
- Response Type: JSON
- Response: Array of Objects
- Optional parameters:
  - q: String to filter for the name of the planet

In order to use the API scripts you need to have installed in your machine PHP and a Web Server(like Apache).

### - Flutter Mobile App

In order to use the source code you need to install Flutter SDK, a development environment like Android or iOS and an IDE.

To install Flutter and the Development Environment follow the instructions here: https://flutter.dev/docs/get-started/install

To use as an IDE i recommend using Visual Studio Code: https://code.visualstudio.com/ but you are free to choose whatever is best for you. 

After installing everything:
```
# go to mobile app directory
cd mobile_app/

# install flutter dependencies
flutter pub get

# connect a mobile phone or open an Android or iOS simulator then run the app
flutter run
```

In file ```lib/helpers/config.dart``` you can substitute constant ```BASE_API_URL``` with the correct url for your installation in order to access the API.

For any questions open an issue on this repository, contact at ```ymerajredjan@gmail.com``` or join our community on Facebook and Medium at: https://www.facebook.com/flutteralbania and https://medium.com/flutter-albania.

Enjoy and see you on the next workshops :)