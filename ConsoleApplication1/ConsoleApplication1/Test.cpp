#include "Test.h"
#include <iostream>
#include <vector>

void CTest::MakeSubCpuFileNo(int in_nCpuNo, int in_nGroupNo)
{
	m_SubCpuFileNo.SubCpuNo.push_back(in_nCpuNo);
	m_SubCpuFileNo.GroupNo.push_back(in_nGroupNo);
	m_SubCpuFileNo.FileNo.push_back(0);
}

void CTest::MakeSubCpuFileNoList()
{
	for (int nCpuNo = 1; nCpuNo <= 2; nCpuNo++)
	{
		for (int nGroupNo = 1; nGroupNo <= 2; nGroupNo++)
		{
			MakeSubCpuFileNo(nCpuNo, nGroupNo);
		}
	}

	m_pSubCpuFileNo = &m_SubCpuFileNo;
}

void CTest::PrintDisplay()
{
	for (int index = 0; index < m_pSubCpuFileNo->FileNo.size(); index++)
	{
		std::cout << "CPU No.";
		std::cout << m_pSubCpuFileNo->SubCpuNo[index];
		std::cout << " Group No.";
		std::cout << m_pSubCpuFileNo->GroupNo[index];
		std::cout << " File No.";
		std::cout << m_pSubCpuFileNo->FileNo[index];
		std::cout << "\n";
	}
}