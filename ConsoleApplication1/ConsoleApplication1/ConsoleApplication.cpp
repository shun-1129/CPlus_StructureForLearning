#include "ConsoleApplication.h"
#include "Test.h"
#include <iostream>

int main()
{
    CTest cTest;

    cTest.InitSubCpuFileNo();
    cTest.MakeSubCpuFileNoList();
    CTest::SUB_CPU_FILE_NO* subCpuFileNo = cTest.GetSubCpuFileNoList();

    for (int nCpuNo = 1; nCpuNo <= 2; nCpuNo++)
    {
        for (int index = 0; index < subCpuFileNo->SubCpuNo.size(); index++)
        {
            if (subCpuFileNo->SubCpuNo[index] != nCpuNo)
            {
                continue;
            }

            subCpuFileNo->FileNo[index] += 1;
        }
    }

    cTest.PrintDisplay();
}