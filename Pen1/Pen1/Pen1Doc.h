
// Pen1Doc.h : CPen1Doc Ŭ������ �������̽�
//


#pragma once


class CPen1Doc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CPen1Doc();
	DECLARE_DYNCREATE(CPen1Doc)

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
	virtual ~CPen1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


