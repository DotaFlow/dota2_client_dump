// MGetKV3ClassDefaults = {
//	"_class": "CDOTAMotionComicVideoFrame",
//	"m_flAutoAdvanceDelay": -1.000000,
//	"m_bLooping": false,
//	"m_flAllowSkipAfterDelay": -1.000000,
//	"m_sVideoPath": ""
//}
class CDOTAMotionComicVideoFrame : public CDOTAMotionComicFrame
{
	bool m_bLooping;
	float32 m_flAllowSkipAfterDelay;
	CUtlString m_sVideoPath;
};
