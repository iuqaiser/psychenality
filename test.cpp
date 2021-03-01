#include <iostream>
using namespace std;

int day, month, year, daymon, count, g, r, h, s;

string zodiac[13] = {"Capricorn, the Water-Goat", "Aquarius, the Water-Bearer", "Pisces, the Fishes", "Aries, the Ram", "Taurus, the Bull", "Gemini, the Twins", "Cancer, the Crab", "Leo, the Lion", "Virgo, the Maiden", "Libra, the Balancer", "Scorpio, the Scorpion", "Sagittarius, the Archer", "Capricorn, the Water-Goat"};
int zodiacDates[14] = {101, 121, 220, 321, 420, 521, 622, 723, 824, 924, 1024, 1123, 1222, 1232};
string zodiacTraits[13] = {"ambitious and patient", "intelligent and original", "sensitive and imaginative", "energetic and independent", "trustworthy and enduring", "charismatic and agile", "intuitive and compassionate", "brave and confident", "analytical and humble", "harmonious and elegant", "perceptive and passionate", "enthusiastic and open-minded", "ambitious and patient"};
string elements[4] = {"fire", "earth", "air", "water"};
string trees[14] = {"Birch, the Achiever", "Rowan, the Thinker", "Ash, the Enchanter", "Alder, the Trailblazer", "Willow, the Observer", "Hawthorn, the Illusionist", "Oak, the Stabilizer", "Holly, the Ruler", "Hazel, the Knower", "Vine, the Equalizer", "Ivy, the Survivor", "Reed, the Inquisitor", "Elder, the Seeker", "Birch"};
int treeDates[15] = {101, 120, 217, 317, 414, 512, 609, 707, 804, 901, 929, 1027, 1123, 1223, 1232};
string treeTraits[13]= {"motivated and resilient", "influential and passionate", "imaginative and introspective", "confident and inspiring", "intelligent and perceptive", "enigmatic and a good listener", "optimistic and strong", "ambitious and regal", "efficient and academic", "poised and charming", "compassionate and enduring", "a truth-seeker and a upholder of justice", "free-spirited and philosophical"};

string animals[12] = {"Monkey", "Rooster", "Dog", "Pig", "Rat", "Ox", "Tiger", "Hare", "Dragon", "Snake", "Horse", "Ram"};
string czperson[12] = {"cleverness and ingeniuity", "good taste and fun", "nobleness and loyalty", "reliablilty and genuinity", "honesty and generosity", "assertiveness and strength", "sensitivity and stubbornness", "ambition and serenity", "energy and courage", "soft-spokeness and wisdom", "well-liked and good-natured", "introversion and creativity"};

string stones[12] = {"garnet", "amethyst", "aquamarine", "diamond", "emerald", "alexandrite", "ruby", "peridot", "sapphire", "tourmaline", "citrine", "turquoise"};
string stonerep[12] = {"protection", "wisdom", "serenity", "strength", "hope", "love", "vitality", "beauty", "truth", "healing", "joy", "friendship"};

string flowers[12] = {"carnations and snowdrops", "irises and violets", "daffodils and jonquils", "sweet peas and daisies", "sunflowers and lily of the valleys", "roses and honeysuckles", "larkspurs and waterlilies", "gladioluses and poppies", "asters and morning glories", "calendulas and cosmos", "chrysanthemums and peonies", "narcissuses and poinsettia"};

string cz, sign, strait, ctree, cttrait, gem, flower, cztrait, type, social, info, decisions, goals, meaning1, gen, element, house;
char ie, ns, ft, jp, result;

void generation(int &byear){
    if (byear <= 1945){
        gen = "the Silent Generation.";
    } else if (byear >= 1946 && byear <= 1964) {
        gen = "the Baby Boomer generation.";
    } else if (byear >= 1965 && byear <= 1979) {
        gen = "Generation X.";
    } else if (byear >= 1980 && byear <= 1994) {
        gen = "Generation Y, or millenials.";
    } else if (byear >= 1995 && byear <= 2009) {
        gen = "Generation Z";
    } else if (byear >= 2010 && byear <= 2024) {
        gen = "Generation Alpha";
    }
}
void astrology(int &dm){
    for (int i; i < 13; i++) {
        if (dm >= zodiacDates[i] && dm < zodiacDates[i + 1]) {
            sign = zodiac[i];
            strait = zodiacTraits[i];
            int k = ((i+1)%4);
            element = elements[k];
        }
    }
}

void celticTree(int &md){
    for (int a = 0; a < 14; a++){
        if (md >= treeDates[a] && md < treeDates[a + 1]) {
            ctree = trees[a];
            cttrait = treeTraits[a];
        }
    }
}

void chineseZodiac(int &y){
    int value = y % 12;
    cz = animals[value];
    cztrait = czperson[value];
}

void gemFlower(int &m){
    gem = stones[m - 1];
    meaning1 = stonerep[m - 1];
    flower = flowers[m - 1];
}

void mBTI(){
    cout << "Please complete the short questionnaire below, indicating A or B (case insensitive) for the two options presented to you: \n";
    cout << "For the most part, do you prefer spending time by yourself (enter A) or with other people (enter B)? ";
    cin >> result;
    if (result == 'A' || result == 'a'){
        ie = 'I';
        social = "introverted";
    } 
    if (result == 'B' || result == 'b'){
        ie = 'E';
        social = "extroverted";
    }
    
    cout << "For the most part, are you more theoretical or practical? ";
    cin >> result;
    if (result == 'A' || result == 'a'){
        ns = 'N';
        info = "through patterns and inferences";
    } 
    if (result == 'B' || result == 'b') {
        ns = 'S';
        info = "at face value and through tangible evidence";
    }

    cout << "For the most part, are you better with emotions or logic? ";
    cin >> result;
    if (result == 'A' || result == 'a') {
        ft = 'F';
        decisions = "your heart";
    } 
    if (result == 'B' || result == 'b') {
        ft = 'T';
        decisions = "your head";
    } 

    cout << "For the most part, do you prefer sticking to a plan or going with the flow? ";   
    cin >> result;
    if (result == 'A' || result == 'a') {
        jp = 'J';
        goals = "structure";
    } 
    if (result == 'B' || result == 'b'){
        jp = 'P';
        goals = "spontaneity";
    } 
    type += ie;
    type += ns;
    type += ft;
    type += jp;
}

void counter(){
    cin >> count;
    if (count == 1){
        g++;
    }
    if (count == 2){
        s++;
    }
    if (count == 3){
        h++;
    }
    if (count == 4){
        r++;
    }
    count = 0;
    cout<< endl;
}

int champion(){
    if (g==h && h==r && r==s && s==g){
        house = "inconclusive";
        return 0;
    }

    if (g>s){
        if (g>h){
            if (g>r){
                house = "Gryffindor";
                return 0;
            } else if (g==r){
                house = "Gryffindor-Ravenclaw";
            }
        } else if (g==h){
            house = "Gryffindor-Hufflepuff";
        }
    } else if (g==s){
        house = "Gryffindor-Slytherin";
    }

    if (s>g){
        if (s>h){
            if (s>r){
                house = "Slytherin";
                return 0;
            } else if (s==r){
                house = "Slytherin-Ravenclaw";
            }
        } else if (s==h){
            house = "Slytherin-Hufflepuff";
        }
    } else if (g==s){
        house = "Slytherin-Gryffindor";
    }

    if (r>s){
        if (r>h){
            if (r>g){
                house = "Ravenclaw";
                return 0;
            } else if (g==r){
                house = "Ravenclaw-Gryffindor";
            }
        } else if (r==h){
            house = "Ravenclaw-Hufflepuff";
        }
    } else if (r==s){
        house = "Ravenclaw-Slytherin";
    }

    if (h>s){
        if (h>g){
            if (h>r){
                house = "Hufflepuff";
                return 0;
            } else if (h==r){
                house = "Hufflepuff-Ravenclaw";
            }
        } else if (g==h){
            house = "Hufflepuff-Gryffindor";
        }
    } else if (h==s){
        house = "Hufflepuff-Slytherin";
    }
}

void hogwartsHouse(){
    cout << "Please indicate the number of the option that best represents you: \n";
    cout << " 1. I enjoy physical activites such as sports \n 2. I enjoy studying subjects such as politics and diplomacy \n 3. I enjoy hobbies such as baking and gardening \n 4. I enjoy creative activities such as painting or writing \n";
    counter();
    cout << " 1. I value justice above all else \n 2. I value achievement above all else \n 3. I value kindess above all else \n 4. I value freedom above all else \n";
    counter();
    cout << " 1. My favourite characters in a story are usually the ones who struggle the most. \n 2. My favourite characters in a story are usually the misunderstood ones, or the antiheroes. \n 3. My favourite characters in a story are usually the underestimated ones. \n 4. My favourite characters in a story are usually the eccentric or ignored ones. \n";
    counter();
    cout << " 1. I solve problems by persevering \n 2. I solve problems by being clever \n 3. I solve problems by taking things one step at a time \n 4. I solve my problems by taking risks and trying new things \n";
    counter();
    champion();
}
void printResults(){
    cout << endl;
    cout << "RESULTS: \n";
    cout << "You were born on " << month << "-" << day << "-" << year;
    cout << " You are a member of " << gen << ". \n";
    cout << "Your sign is " << sign << ". You are " << strait << ".\n";
    cout << "Your element is " << element << ". \n";
    cout << "Your Celtic tree is " << ctree << ". You are " << cttrait << ".\n";
    cout << "Your Chinese zodiac animal is " << cz << ", which represents " << cztrait << ".\n";
    cout << "Your birth month gemstone is the " << gem << ", which represents " << meaning1 << ".\n";
    cout << "Your birth month flowers are " << flower << ".\n";
    cout << "Your Myers-Briggs personality type is " << type << ". This means you are " << social << ", you analyze information " << info << ", you prefer thinking with " << decisions << ", and you like " << goals << ".\n";
    cout << "Your Hogwarts house is " << house << ". \n";
    }

int main(){
    cout << "Enter your day of birth in the following format: mm dd yyyy (no characters between values, only spaces)" << endl;
    cin >> month >> day >> year;
    daymon = month * 100;
    daymon += day;

    astrology(daymon);
    celticTree(daymon);
    chineseZodiac(year);
    gemFlower(month);

    cout << endl;
    mBTI();
    hogwartsHouse();
    generation(year);

    printResults();
    cout << "Thank you for using Psychenality! Keep checking back for new updates! \n";
    return 0;
}
