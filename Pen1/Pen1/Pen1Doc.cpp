
// Pen1Doc.cpp : CPen1Doc 클래스의 구현
//

#include "stdafx.h"
#include "Pen1.h"

#include "Pen1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPen1Doc

IMPLEMENT_DYNCREATE(CPen1Doc, CDocument)

BEGIN_MESSAGE_MAP(CPen1Doc, CDocument)
END_MESSAGE_MAP()


// CPen1Doc 생성/소멸

CPen1Doc::CPen1Doc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CPen1Doc::~CPen1Doc()
{
}

BOOL CPen1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CPen1Doc serialization

void CPen1Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 여기에 저장 코드를 추가합니다.
	}
	else
	{
		// TODO: 여기에 로딩 코드를 추가합니다.
	}
}


// CPen1Doc 진단

#ifdef _DEBUG
void CPen1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPen1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CPen1Doc 명령
