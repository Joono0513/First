
// Text1Doc.h : CText1Doc Ŭ������ �������̽�
//


#pragma once


class CText1Doc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CText1Doc();
	DECLARE_DYNCREATE(CText1Doc)

// Ư���Դϴ�.
public:

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// �����Դϴ�.
public:
	virtual ~CText1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


