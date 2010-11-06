#ifndef __ps_general_page__
#define __ps_general_page__

/**
@file
Subclass of PSGeneralPageBase, which is generated by wxFormBuilder.
*/

#include "project_settings_base_dlg.h"
#include "project_settings_dlg.h"
#include "build_config.h"

//// end generated include
class ProjectSettingsDlg;
/** Implementing PSGeneralPageBase */
class PSGeneralPage : public PSGeneralPageBase, public IProjectSettingsPage
{
	ProjectSettingsDlg *m_dlg;
	wxString            m_projectName;

protected:
	// Handlers for PSGeneralPageBase events.
	void OnProjectCustumBuildUI( wxUpdateUIEvent& event );
	void OnCmdEvtVModified( wxCommandEvent& event );
	void OnBrowseIntermediateDir( wxCommandEvent& event );
	void OnBrowseProgram( wxCommandEvent& event );
	void OnBrowseCommandWD( wxCommandEvent& event );

public:

	/** Constructor */
	PSGeneralPage( wxWindow* parent, const wxString &projectName, ProjectSettingsDlg *dlg );
	//// end generated class members
	virtual void Save(BuildConfigPtr buildConf, ProjectSettingsPtr projSettingsPtr);
	virtual void Load(BuildConfigPtr buildConf);
	virtual void Clear();

	wxString GetCompiler() const {
		return m_choiceCompilerType->GetStringSelection();
	}
};

#endif // __ps_general_page__
