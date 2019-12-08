/*****************************************************************************
 * Test cases for libxlsxwriter.
 *
 * Test to compare output against Excel files.
 *
 * Copyright 2014-2019, John McNamara, jmcnamara@cpan.org
 *
 */

#include "xlsxwriter.h"

int main() {

    lxw_workbook  *workbook  = workbook_new("test_hyperlink22.xlsx");
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);


    worksheet_write_url(worksheet, CELL("A1"), "external:\\\\Vboxsvr\\share\\foo bar.xlsx" , NULL);

    return workbook_close(workbook);
}
