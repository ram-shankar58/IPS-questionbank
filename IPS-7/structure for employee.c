#include <stdio.h>

struct emplo{
    int salary;
    int work;
};

void getinfo(struct emplo *emp1){
    scanf("%d %d",&emp1->salary, &emp1->work);
    
}

void addsal(struct emplo *aq){
    if (aq->salary<500){
        aq->salary+=10;
    }
}

void addwork(struct emplo *aq){
    if(aq->work>6){
        aq->salary+=5;
    }
}

int main() {
    struct emplo emp, *emp1;
    emp1=&emp;
    getinfo(emp1);
    addsal(emp1);
    addwork(emp1);
    printf("%d %d", emp1->salary, emp1->work);
    return 0;
}
