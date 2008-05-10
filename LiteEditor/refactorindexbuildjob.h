#ifndef __refactorindexbuildjob__
#define __refactorindexbuildjob__

#include <vector>
#include <wx/filename.h>
#include "job.h"

enum {
	Action_Reset_Gauge,
	Action_Update_Gauge,
	Action_Clear_Gauge
};

struct RefactorIndexBuildJobInfo {
	int action;
	int status;
	wxString filename;
};
 
class RefactorIndexBuildJob : public Job
{
	std::vector<wxFileName> m_files;
	bool m_full_build;
	
public:
	RefactorIndexBuildJob(wxEvtHandler *handler, const std::vector<wxFileName> &files, bool full_build);
	virtual ~RefactorIndexBuildJob();

public:
	virtual void Process(wxThread *thread);
};
#endif // __refactorindexbuildjob__
