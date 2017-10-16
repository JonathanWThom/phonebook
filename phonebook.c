#include <stdio.h>
#include <stdlib.h>

void showMenu() {
  printf("\n\n>>>>>>>>Phonebook<<<<<<<<\n\n");
  printf("1. View list\n\n");
  printf("2. Add to List\n\n");
  printf("3. Delete from list\n\n");
  printf("4. Edit List\n\n");
  printf("5. Exit\n\n");
}

int getSelectedOption() {
  int selectedItem;
  scanf("%d", &selectedItem);

  if (selectedItem >= 1 && selectedItem <= 5) {
    printf("You did it!\n\n");
  } else {
    selectedItem = 0;
    printf("Invalid Input\n\n");
  }

  return selectedItem;
}

int main() {

  showMenu();
  int selectedItem = getSelectedOption();

  if (selectedItem != 0) {
    printf("%d\n\n", selectedItem);
  }

  return 0;
}
