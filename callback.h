void AcceptProc P((GtkObject *object, gpointer user_data));
void DeclineProc P((GtkObject *object, gpointer user_data));
void RematchProc P((GtkObject *object, gpointer user_data));
void CallFlagProc P((GtkObject *object, gpointer user_data));
void Drawroc P((GtkObject *object, gpointer user_data));
void AbortProc P((GtkObject *object, gpointer user_data));
void AdjournProc P((GtkObject *object, gpointer user_data));
void ResignProc P((GtkObject *object, gpointer user_data));
void StopObservingProc P((GtkObject *object, gpointer user_data));
void StopExaminingProc P((GtkObject *object, gpointer user_data));
void AdjuWhiteProc P((GtkObject *object, gpointer user_data));
void AdjuBlackProc P((GtkObject *object, gpointer user_data));
void AdjuDrawProc P((GtkObject *object, gpointer user_data));
void ResetProc P((GtkObject *object, gpointer user_data));
void WhiteClockProc P((GtkObject *object, gpointer user_data));
void BlackClockProc P((GtkObject *object, gpointer user_data));
gboolean ExposeProc P((GtkObject *object, gpointer user_data));

/* File Menu */
void QuitProc P((GtkObject *object, gpointer user_data));
void LoadNextGameProc P((GtkObject *object, gpointer user_data));
void LoadPrevGameProc P((GtkObject *object, gpointer user_data));
void ReloadGameProc P((GtkObject *object, gpointer user_data));
void LoadNextPositionProc P((GtkObject *object, gpointer user_data));
void LoadPrevPositionProc P((GtkObject *object, gpointer user_data));
void ReloadPositionProc P((GtkObject *object, gpointer user_data));
void LoadPositionProc P((GtkObject *object, gpointer user_data));
void SaveGameProc P((GtkObject *object, gpointer user_data));
void SavePositionProc P((GtkObject *object, gpointer user_data));

/* Mode Menu */
void AnalyzeFileProc P((GtkObject *object, gpointer user_data));
void AnalyzeModeProc P((GtkObject *object, gpointer user_data));
void IcsClientProc P((GtkObject *object, gpointer user_data));
void MachineBlackProc P((GtkObject *object, gpointer user_data));
void MachineWhiteProc P((GtkObject *object, gpointer user_data));
void TwoMachinesProc P((GtkObject *object, gpointer user_data));
void EditGameProc P((GtkObject *object, gpointer user_data));
void EditPositionProc P((GtkObject *object, gpointer user_data));
void TrainingProc P((GtkObject *object, gpointer user_data));

/* Step Menu */
void BackwardProc P((GtkObject *object, gpointer user_data));
void ForwardProc P((GtkObject *object, gpointer user_data));
void ToStartProc P((GtkObject *object, gpointer user_data));
void ToEndProc P((GtkObject *object, gpointer user_data));
void RevertProc P((GtkObject *object, gpointer user_data));
void TruncateGameProc P((GtkObject *object, gpointer user_data));
void MoveNowProc P((GtkObject *object, gpointer user_data));
void RetractMoveProc P((GtkObject *object, gpointer user_data));

/* Option Menu */
void AutocommProc P((GtkObject *object, gpointer user_data));
void AutoflagProc P((GtkObject *object, gpointer user_data));
void AutoflipProc P((GtkObject *object, gpointer user_data));
void ShowThinkingProc P((GtkObject *object, gpointer user_data));
void HideThinkingProc P((GtkObject *object, gpointer user_data));
void FlipViewProc P((GtkObject *object, gpointer user_data));
void GetMoveListProc P((GtkObject *object, gpointer user_data));

void AlwaysQueenProc P((GtkObject *object, gpointer user_data));
void AnimateDraggingProc P((GtkObject *object, gpointer user_data));
void AnimateMovingProc P((GtkObject *object, gpointer user_data));
void AutobsProc P((GtkObject *object, gpointer user_data));
void AutoraiseProc P((GtkObject *object, gpointer user_data));
void AutosaveProc P((GtkObject *object, gpointer user_data));
void BlindfoldProc P((GtkObject *object, gpointer user_data));
void TestLegalityProc P((GtkObject *object, gpointer user_data));
void FlashMovesProc P((GtkObject *object, gpointer user_data));
void HighlightDraggingProc P((GtkObject *object, gpointer user_data));
void HighlightLastMoveProc P((GtkObject *object, gpointer user_data));
void IcsAlarmProc P((GtkObject *object, gpointer user_data));
void MoveSoundProc P((GtkObject *object, gpointer user_data));
void OldSaveStyleProc P((GtkObject *object, gpointer user_data));
void PeriodicUpdatesProc P((GtkObject *object, gpointer user_data));
void PremoveProc P((GtkObject *object, gpointer user_data));
void QuietPlayProc P((GtkObject *object, gpointer user_data));
void PonderNextMoveProc P((GtkObject *object, gpointer user_data));
void PopupExitMessageProc P((GtkObject *object, gpointer user_data));
void PopupMoveErrorsProc P((GtkObject *object, gpointer user_data));

/* Help Menu */

void InfoProc  P((GtkObject *object, gpointer user_data));
void ManProc  P((GtkObject *object, gpointer user_data));
void HintProc  P((GtkObject *object, gpointer user_data));
void BookProc  P((GtkObject *object, gpointer user_data));
void AboutProc  P((GtkObject *object, gpointer user_data));


void ShowCoordsProc P((GtkObject *object, gpointer user_data));
void ErrorPopDownProc P((GtkObject *object, gpointer user_data));
void PauseProc P((GtkObject *object, gpointer user_data));
void EventProc P((GtkWindow *window, GdkEvent *event, gpointer data));
void UserMoveProc P((GtkWindow *window, GdkEvent *event, gpointer data));
gboolean CloseWindowProc P((GtkWidget *button));