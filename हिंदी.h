#ifndef हिंदी_H
#define हिंदी_H

#include <iostream>
#include <string>

// std:: के स्थान पर उपयोगकर्ता को बार-बार std:: लिखने की आवश्यकता नहीं होगी
#define मानक_स्थान namespace std

// इनपुट और आउटपुट के लिए फ़ंक्शन्स
#define संख्या_दर्ज_करें std::cin
#define संदेश_दिखाएं std::cout
#define अंत_लाइन std::endl

// डिफ़ॉल्ट प्रकारों के लिए हिंदी में परिभाषा
#define पूर्णांक int
#define मुख्य main

// हिंदी में स्ट्रिंग परिभाषा
#define स्ट्रिंग std::string
#define स्ट्रिंग_लें std::getline

// गणना के लिए फ़ंक्शन
पूर्णांक जोड़ें(पूर्णांक पहली_संख्या, पूर्णांक दूसरी_संख्या) {
    return पहली_संख्या + दूसरी_संख्या;
}

// हिंदी में if को परिभाषित करें
#define यदि if

// हिंदी में return को परिभाषित करें
#define लौटें return

// हिंदी में std::getline को परिभाषित करें
#define स्ट्रिंग_लें std::getline

// std के लिए using namespace std; को हिंदी में परिभाषित करें
using मानक_स्थान;

#endif
