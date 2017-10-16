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

  if (selectedItem < 1 || selectedItem > 5) {
    selectedItem = 0;
    printf("Invalid Input\n\n");
  }

  return selectedItem;
}

void interpretSelection(selectedItem) {
  if (selectedItem == 1) {
    /// view list
  } else if (selectedItem == 2) {
    printf("Item 2");
  } else if (selectedItem == 3) {
    /// delete from list
  } else if (selectedItem == 3) {
    /// edit list
  } else {
    exit(0);
  }
}

int main() {

  showMenu();
  int selectedItem = getSelectedOption();

  if (selectedItem != 0) {
    interpretSelection(selectedItem);
  } else {
    showMenu();
    /// kills the program - shouldn't
  }

  return 0;
}
