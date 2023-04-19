#include <iostream>
#include <string>
#include <algorithm>

//Add namespace for function information
void presentSimple() {
    std::cout << "When using He/She/It" << std::endl << "Add -s to the first form of the verb." << std::endl;
    std::cout << "When using We/They/You/I" << std::endl << "Use the first form of the verb." << std::endl;
}

void pastSimple() {
    std::cout << "Use the second form of the verb.";
}

void futureSimple() {
    std::cout << "Add 'will' before the first form of the verb.";
}

void presentContinuous() {
    std::cout << "When using I" << std::endl << "'am' + add -ing to the verb." << std::endl;
    std::cout << "When using He/She/It" << std::endl << "'is' + add -ing to the verb." << std::endl;
    std::cout << "When using We/They/You" << std::endl << "'are' + add -ing to the verb." << std::endl;
}

void pastContinuous() {
    std::cout << "When using He/She/It/I" << std::endl << "'was' + add -ing to the verb." << std::endl;
    std::cout << "When using We/They/You" << std::endl << "'were' + add -ing to the verb." << std::endl;
}

void futureContinuous() {
    std::cout << "'will be' + add -ing to the verb." << std::endl;
}

void presentPerfectContinuous() {
    std::cout << "When using He/She/It" << std::endl << "'has been' + add -ing to the verb." << std::endl;
    std::cout << "When using We/They/You/I" << std::endl << "'have been' + add -ing to the verb." << std::endl;
}

void pastPerfectContinuous() {
    std::cout << "'had been' + add -ing to the verb." << std::endl;
}

void futurePerfectContinuous() {
    std::cout << "'will have been' + add -ing to the verb." << std::endl;
}

void presentPerfectSimple() {
    std::cout << "When using He/She/It" << std::endl << "'has' + use the third form of the verb." << std::endl;
    std::cout << "When using We/They/You/I" << std::endl << "'have' + use the third form of the verb." << std::endl;
}

void pastPerfectSimple() {
    std::cout << "'had' + use the third form of the verb." << std::endl;
}

void futurePerfectSimple() {
    std::cout << "'will have' + use the third form of the verb." << std::endl;
}

void changeToLowerCase(std::string &reply) {
    std::transform(reply.begin(), reply.end(), reply.begin(),
                   [](unsigned char c) { return std::tolower(c); });
}

void myProgram(std::string &reply) {
    std::cout << "Is your verb in the present, past or future tense?" << std::endl;
    std::cin >> reply;
    changeToLowerCase(reply);


    while (reply != "present" && reply != "past" && reply != "future") {
        std::cout << "Inadequate response. Is your verb in the present, past or future tense?" << std::endl;
        std::cin >> reply;
        changeToLowerCase(reply);
    }
    if (reply == "present") {
        std::cout << "Is this happening RIGHT NOW?" << std::endl;
        std::cin >> reply;
        changeToLowerCase(reply);
        while (reply != "yes" && reply != "no") {
            std::cout << "Is this happening RIGHT NOW?" << std::endl;
            std::cin >> reply;
            changeToLowerCase(reply);
        }
        if (reply == "yes") {
            std::cout << "Has this been happening in the past and the future is unknown?" << std::endl;
            std::cin >> reply;
            changeToLowerCase(reply);
            while (reply != "yes" && reply != "no") {
                std::cout << "Has this been happening in the past and the future is unknown?" << std::endl;
                std::cin >> reply;
                changeToLowerCase(reply);
            }
            if (reply == "yes") {
                std::cout << "Use Present Perfect-Continuous" << std::endl;
                presentPerfectContinuous();
            } else if (reply == "no") {
                std::cout << "Use Present Continuous" << std::endl;
                presentContinuous();
            }
        } else if (reply == "no") {
            std::cout << "Use Present Simple" << std::endl;
            presentSimple();
        }
    } else if (reply == "past") {
        std::cout << "Did this event last a period of time?" << std::endl;
        std::cin >> reply;
        changeToLowerCase(reply);
        if (reply == "yes") {
            std::cout << "Was this a sequence of short events?" << std::endl;
            std::cin >> reply;
            changeToLowerCase(reply);
            while (reply != "yes" && reply != "no") {
                std::cout << "Was this a sequence of short events?" << std::endl;
                std::cin >> reply;
                changeToLowerCase(reply);
            }
            if (reply == "yes") {
                std::cout << "Do these events have an impact on the subject today?" << std::endl;
                std::cin >> reply;
                changeToLowerCase(reply);
                while (reply != "yes" && reply != "no") {
                    std::cout << "Do these events have an impact on the subject today?" << std::endl;
                    std::cin >> reply;
                    changeToLowerCase(reply);
                }
                if (reply == "yes") {
                    std::cout << "Use Present Perfect-Simple" << std::endl;
                    presentPerfectSimple();
                } else if (reply == "no") {
                    std::cout << "Use Past Perfect-Simple" << std::endl;
                    pastPerfectSimple();
                }
            } else if (reply == "no") {
                std::cout << "Do these events have an impact on the subject today?" << std::endl;
                std::cin >> reply;
                changeToLowerCase(reply);
                while (reply != "yes" && reply != "no") {
                    std::cout << "Do these events have an impact on the subject today?" << std::endl;
                    std::cin >> reply;
                    changeToLowerCase(reply);
                }
                if (reply == "yes") {
                    std::cout << "Use Present Perfect-Continuous" << std::endl;
                    presentPerfectContinuous();
                } else if (reply == "no") {
                    std::cout << "Use Past Perfect-Continuous" << std::endl;
                    pastPerfectContinuous();
                }

            }
        }
    } else if (reply == "no") {
        std::cout << "Was this event long-lasting?" << std::endl;
        std::cin >> reply;
        changeToLowerCase(reply);
        while (reply != "yes" && reply != "no") {
            std::cout << "Was this event long-lasting?" << std::endl;
            std::cin >> reply;
            changeToLowerCase(reply);
        }
        if (reply == "yes") {
            std::cout << "Use Past Continuous" << std::endl;
            pastContinuous();
        } else if (reply == "no") {
            std::cout << "Use Past Simple" << std::endl;
            pastSimple();
        }
    } else if (reply == "future") {
        std::cout << "Will this event last until a certain day in the future?" << std::endl;
        std::cin >> reply;
        changeToLowerCase(reply);
        while (reply != "yes" && reply != "no") {
            std::cout << "Will this event last until a certain day in the future?" << std::endl;
            std::cin >> reply;
        }
        if (reply == "yes") {
            std::cout << "Is this event long-lasting?" << std::endl;
            std::cin >> reply;
            changeToLowerCase(reply);
            while (reply != "yes" && reply != "no") {
                std::cout << "Is this event long-lasting?" << std::endl;
                std::cin >> reply;
                changeToLowerCase(reply);
            }
            if (reply == "yes") {
                std::cout << "Use Future Perfect-Continuous" << std::endl;
                futurePerfectContinuous();
            } else if (reply == "no") {
                std::cout << "Use Future Perfect-Simple" << std::endl;
                futurePerfectSimple();
            }
        } else if (reply == "no") {
            std::cout << "Is this event long-lasting?" << std::endl;
            std::cin >> reply;
            changeToLowerCase(reply);
            while (reply != "yes" && reply != "no") {
                std::cout << "Is this event long-lasting?" << std::endl;
                std::cin >> reply;
                changeToLowerCase(reply);
            }
            if (reply == "yes") {
                std::cout << "Use Future Continuous" << std::endl;
                futureContinuous();
            } else if (reply == "no") {
                std::cout << "Use Future Simple" << std::endl;
                futureSimple();
            }
        }
    }
}

int main() {
    auto reply = std::string();
    myProgram(reply);
}
