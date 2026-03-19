#include <stdio.h>
struct Owner{
char company[20];
char name[10];
};

struct car{
int year;
char Brand[10];
char name1[15];
struct Owner owner;
};

int main(){
struct Owner owned={"Tata-motors","JLR"};
struct car s={1970,"SUV","Range-Rover",owned};
printf("Introduced in year:%d brand %s (%s),Owned by:%s by %s\n",s.year,s.Brand,s.name1,s.owner.company,s.owner.name);
return 0;
}
