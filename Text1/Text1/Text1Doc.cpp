
// Text1Doc.cpp : CText1Doc 클래스의 구현
//

#include "stdafx.h"
#include "Text1.h"

#include "Text1Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CText1Doc

IMPLEMENT_DYNCREATE(CText1Doc, CDocument)

BEGIN_MESSAGE_MAP(CText1Doc, CDocument)
END_MESSAGE_MAP()


// CText1Doc 생성/소멸

CText1Doc::CText1Doc()
{
	// TODO: 여기에 일회성 생성 코드를 추가합니다.

}

CText1Doc::~CText1Doc()
{
}

BOOL CText1Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 여기에 재초기화 코드를 추가합니다.
	// SDI 문서는 이 문서를 다시 사용합니다.

	return TRUE;
}




// CText1Doc serialization

void CText1Doc::Serialize(CArchive& ar)
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


// CText1Doc 진단

#ifdef _DEBUG
void CText1Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CText1Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CText1Doc 명령
