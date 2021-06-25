#include <algorithm>
#include <iostream>
using namespace std;
#define O ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

#define FALSE 0
#define TRUE 1

struct {
    char name[10];
    int age;
    float salary;
} person;

typedef struct {
    char name[10];
    int age;
    float salary;
} humanBeing;

int humans_equal(humanBeing person1, humanBeing person2) {
    /* returns TRUE if person1 and person2 are the same human being. otherwise return FALSE */
    if(strcmp(person1.name, person2.name)) return FALSE;
    if(person1.age != person2.age) return FALSE;
    if(person1.salary != person2.salary) return FALSE;
    return TRUE;
}

int main() {
    humanBeing person1, person2;
    cout<<"1's age >"; cin>>person1.age;
    cout<<"2's age >"; cin>>person2.age;
    cout<<"1's name >"; cin>>person1.name;
    cout<<"2's name >"; cin>>person2.name;
    cout<<"1's salary >"; cin>>person1.salary;
    cout<<"2's salary >"; cin>>person2.salary;

    if(humans_equal(person1, person2))
        printf("The two human beings are the same.");
    else
        printf("The two human beings are not the same.");
}
