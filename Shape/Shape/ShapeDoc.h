
// ShapeDoc.h : CShapeDoc Ŭ������ �������̽�
//


#pragma once


class CShapeDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CShapeDoc();
	DECLARE_DYNCREATE(CShapeDoc)

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
	virtual ~CShapeDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
};


