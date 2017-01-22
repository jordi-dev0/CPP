#include <iostream>
#include <vector>
#include <fstream>
#include <cstring>
#include <assert.h>
/*
POST SCRIPT CONSTRUCTS

% denotes a comment in a PS file.

the units of coordinates in PS a points and are 1/72 inch long.
For many command relative units can be used by the r prefix
Some command destroy the current path liek stroke and fill.
Use gsave and grestore to workaround this.



DEFINE POST SCRIPT FUNCTIONS

mul,
    1 2 mul results in 2 on the stack
newpath,
    starts new path
close path,
    creates closed path to beginning
moveto,
    example X Y moveto
stroke,
    <<end of line character?>>
lineto,
    example X Y lineto
closepath,
    example, closepath fill
    example, closepath clip
    example, closepath stroke
gsave,

grestore,
show,
    (Hello World) show prints text, brackets indicate a string
setgray,
setdash,
stringwidth,
dup,
pop,
stringwidth,
showpage,
rotate,
div,

/zp { gsave /ZapfDingbats findfont exch scalefont setfont moveto
..  show grestore} def
?????????
*/ 
// define datatypes
struct Color{
    int R;
    int G;
    int B;
};

// Name space
using namespace std;

class EpsHeader{
    private:
      string m_Author;
      string m_Title;
      string m_CreationDate;
      string m_DocumentData;
      int m_Origin[2];
      int m_BoundingBox[4];
    public:
      EpsHeader():
	 m_Author("")
	,m_Title("")
	,m_CreationDate("")
	,m_DocumentData("")
	{ 
	    m_Origin[0] = 0;
	    m_Origin[1] = 0;
	    m_BoundingBox[0] = 0;
	    m_BoundingBox[1] = 0;
	    m_BoundingBox[2] = 1;
	    m_BoundingBox[3] = 1;
	};
    public:
    bool PrintToFile(ofstream& p)
    {
	if (!p.is_open())
	{
	    return false;
	}
	
	p<<"\%\%Creator: ";
	p<<m_Author;
	p<<"\n";
	p<<"\%\%Title: ";
	p<<m_Title;
	p<<"\n";
	p<<"\%\%CreationDate: ";
	p<<m_CreationDate;
	p<<"\n";
    	p<<"\%\%DocumentData: ";
	p<<m_DocumentData;
	p<<"\n";
	p<<"\%\%Origin: ";
	p<<m_Origin[0]<<" ";
	p<<m_Origin[1]<<"\n";
	p<<"\%\%LanguageLevel: 2\n";    
	p<<"\%\%BoundingBox: ";
	p<<m_BoundingBox[0]<<" ";
	p<<m_BoundingBox[1]<<" ";
	p<<m_BoundingBox[2]<<" ";
	p<<m_BoundingBox[3]<<"\n";
	p<<"\%\%Pages: 1\n";    
	p<<"\%\%Page: 1 1\n";
	return true;
    } 

};

class PsPage{
   
    private:
	// private members
	EpsHeader m_Head;
	ofstream m_FileStream;
	string m_FileName;
	string m_FontName;
	float m_LineWidth;
	Color m_Color;
	vector<string> m_Data;
	int m_BoundingBox[4]; 
   
   public:
	// constructor
	PsPage(string FileName):
	  m_Head(EpsHeader())
	, m_FontName("",0)
	, m_FileName(FileName)
	, m_LineWidth(0.0)
	, m_Color({1,1,1})
	{
	    ofstream m_FileStream (m_FileName,fstream::out);
	    //m_Data.reserve();
	}
	//desctructor
	~PsPage()
	{
	    if (!m_FileStream.is_open())
	    {
		m_FileStream.open(m_FileName,fstream::app);
	    }
	    m_Head.PrintToFile(m_FileStream);
	    PrintData();
	    m_FileStream<<"\%\%EOF\n";
	    m_FileStream.close();
	};



	// private functions
	void PrintData(){
	    
	    for ( vector<string>::iterator iter = m_Data.begin(); iter!=m_Data.end();++iter){
	    m_FileStream<<*iter;	    
	    }
	}
	void SetFont(string FontName,float Size)
	{
	    m_FileStream.open(m_FileName,fstream::app);
	    m_FontName = FontName;
	    m_FileStream<<m_FontName<<" findfont ";
	    m_FileStream<<Size<<" scalefont setfont \n";
	}
	void SetColor(int R, int G, int B){
	    m_FileStream.open(m_FileName,fstream::app);
	    m_Color.R = R;
	    m_Color.B = B;
	    m_Color.G = G;
	    m_FileStream << R<<" "<<G<<" "<<B;
	    m_FileStream <<" setrgbcolor\n";
	}
	void SetLineWidth(float Width){
	    m_FileStream.open(m_FileName,fstream::app);
	    m_LineWidth = Width;
	    m_FileStream << Width <<" setlinewidth\n";
	}
	void DrawLine(float Xstart,float  Ystart,float  Xend, float Yend)
	{
	  //  m_FileStream.open(m_FileName,fstream::app);
	    m_Data.push_back("gsave \n");
	    m_Data.push_back("newpath \n");
	    m_Data.push_back(to_string(Xstart)+" "+to_string(Ystart)+" moveto\n");
	    m_Data.push_back(to_string(Xend)+" "+to_string(Yend)+" lineto \n"); 
	    m_Data.push_back("stroke\n"); 
	    m_Data.push_back("grestore\n"); 
	} 
}; 
