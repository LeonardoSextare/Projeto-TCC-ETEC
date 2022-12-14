void menu_ListaCabo()
{
  tft.fillRoundRect(0, 70, 320, 410, 0, WHITE);

  // Cabos
  tft.fillRoundRect(20, 105, 278, 100, 10, RED);
  tft.fillRoundRect(23, 108, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(110, 145);
  tft.println("Cabos");

  // Adaptadores
  tft.fillRoundRect(20, 225, 278, 100, 10, RED);
  tft.fillRoundRect(23, 228, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(60, 265);
  tft.println("Adaptadores");

  // Outros
  tft.fillRoundRect(20, 345, 278, 100, 10, RED);
  tft.fillRoundRect(23, 348, 272, 94, 10, BLACK);

  tft.setTextSize(3);
  tft.setTextColor(WHITE);
  tft.setCursor(105, 385);
  tft.println("Outros");
}

void btn_ListaCabo(int caso)
{
  switch (caso)
  {
  // Cabos
  case 1:
    tft.fillRoundRect(23, 108, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(110, 145);
    tft.println("Cabos");
    menu = "menu_VendaCabo";
    menu_VendaCabo();

    break;

  // Adaptadores
  case 2:
    tft.fillRoundRect(23, 228, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(60, 265);
    tft.println("Adaptadores");
    menu = "menu_VendaAdaptador";
    menu_VendaAdaptador();
    break;

  // Outros
  case 3:

    tft.fillRoundRect(23, 348, 272, 94, 10, WHITE);

    tft.setTextSize(3);
    tft.setTextColor(BLACK);
    tft.setCursor(105, 385);
    tft.println("Outros");
    tela_Chamado(4);
    break;
  }
}
