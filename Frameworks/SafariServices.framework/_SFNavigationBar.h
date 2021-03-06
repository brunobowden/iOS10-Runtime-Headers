/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFNavigationBar : UIView <UIGestureRecognizerDelegate, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, _UIBasicAnimationFactory> {
    NSArray * _URLAccessoryItems;
    UIView * _URLContainer;
    UIImageView * _URLFadeOut;
    double  _URLHeight;
    UILabel * _URLLabel;
    _SFNavigationBarURLButton * _URLOutline;
    double  _URLWidth;
    NSAttributedString * _attributedTextWhenExpanded;
    _SFNavigationBarBackdrop * _backdrop;
    bool  _backdropGroupDisabled;
    NSString * _backdropGroupName;
    UIButton * _cancelButton;
    double  _cancelButtonIntrinsicWidth;
    UIButton * _compressedBarButton;
    double  _contentUnderStatusBarHeight;
    UIView * _controlsContainer;
    bool  _controlsHidden;
    _UIBackdropViewSettings * _customBackdropSettings;
    <_SFNavigationBarDelegate> * _delegate;
    UIButton * _doneButton;
    UIView * _doneButtonContainer;
    bool  _expanded;
    double  _expandedURLHeight;
    UILabel * _expandedURLLabel;
    double  _expandedURLWidth;
    UIButton * _fakeClearButton;
    double  _fakeSelectionEndOffset;
    double  _fakeSelectionStartOffset;
    UIView * _fakeTextFieldSelectionView;
    UIView * _inputAccessoryView;
    unsigned long long  _inputMode;
    _SFNavigationBarItem * _item;
    UIView * _labelScalingContainer;
    _SFNavigationBarLabelsContainer * _labelsContainer;
    SFCrossfadingImageView * _lockView;
    bool  _lockViewNeedsUpdate;
    double  _maximumHeight;
    double  _minimumBackdropHeight;
    double  _offsetOfURLInExpandedURL;
    UIColor * _preferredBarTintColor;
    _SFFluidProgressView * _progressView;
    _SFDimmingButton * _readerAppearanceButton;
    UILabel * _readerAvailabilityLabel;
    NSTimer * _readerAvailabilityLabelHideTimer;
    _SFNavigationBarReaderButton * _readerButton;
    bool  _readerButtonWillShow;
    _SFDimmingButton * _reloadButton;
    UILongPressGestureRecognizer * _reloadLongPressGestureRecognizer;
    SFCrossfadingImageView * _searchIndicator;
    UIView * _separator;
    _SFDimmingButton * _stopButton;
    bool  _suppressesBlur;
    UITextField * _textField;
    unsigned long long  _tintStyle;
    _SFToolbar * _toolbar;
    bool  _unifiedFieldShowsProgressView;
    bool  _usesNarrowLayout;
    bool  _usesUnscaledBackdrop;
    bool  _usingLightControls;
    long long  _visibleRightButtonType;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } URLOutlineFrameInNavigationBarSpace;
@property (getter=isBackdropGroupDisabled, nonatomic) bool backdropGroupDisabled;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic) double contentUnderStatusBarHeight;
@property (getter=_controlsAlpha, nonatomic, readonly) double controlsAlpha;
@property (getter=areControlsHidden, nonatomic) bool controlsHidden;
@property (nonatomic, retain) _UIBackdropViewSettings *customBackdropSettings;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFNavigationBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic) bool hasToolbar;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, retain) _SFNavigationBarItem *item;
@property (nonatomic) double maximumHeight;
@property (nonatomic) double minimumBackdropHeight;
@property (nonatomic, retain) UIColor *preferredBarTintColor;
@property (nonatomic, readonly) UIButton *readerAppearanceButton;
@property (nonatomic, readonly) UIButton *reloadButton;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressesBlur;
@property (nonatomic, readonly) UITextField *textField;
@property (nonatomic) unsigned long long tintStyle;
@property (nonatomic, readonly) _SFToolbar *toolbar;
@property (nonatomic) bool unifiedFieldShowsProgressView;
@property (nonatomic) bool updatesBackdrop;
@property (nonatomic) bool usesNarrowLayout;
@property (nonatomic) bool usesUnscaledBackdrop;
@property (getter=isUsingLightControls, nonatomic) bool usingLightControls;
@property (nonatomic, readonly) double visualHeight;

+ (double)defaultHeight;
+ (double)minimumHeight;
+ (double)separatorHeight;

- (void).cxx_destruct;
- (double)URLFieldHorizontalMargin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })URLOutlineFrameInNavigationBarSpace;
- (id)_EVCertLockAndTextColor;
- (id)_URLControlsColor;
- (double)_URLFieldHorizontalMargin;
- (void)_URLTapped:(id)arg1;
- (id)_URLTextColor;
- (id)_backdropInputSettings;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_compressedBarTapped;
- (void)_configureNavigationBarRightButtonTintedImages;
- (double)_controlsAlpha;
- (double)_customButtonHorizontalPadding;
- (id)_dimmingButtonWithAction:(SEL)arg1;
- (void)_doneButtonTapped:(id)arg1;
- (id)_editingLabelFont;
- (double)_editingScaleFactor;
- (id)_expandedURLLabelParagraphStyle;
- (id)_fadeOutImageWithSize:(struct CGSize { double x1; double x2; })arg1 opaquePoint:(struct CGPoint { double x1; double x2; })arg2 transparentPoint:(struct CGPoint { double x1; double x2; })arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5;
- (void)_hideReaderAvailabilityLabelAnimated:(bool)arg1;
- (void)_hideReaderAvailabilityLabelNow;
- (void)_hideReaderAvailabilityLabelSoon;
- (id)_hitTestCandidateViews;
- (long long)_inferredNavigationBarRightButtonType;
- (id)_legibilityColorForBarTintColor:(id)arg1;
- (id)_lockImageUsingMiniatureVersion:(bool)arg1;
- (id)_lockImageWithTint:(id)arg1 usingMiniatureVersion:(bool)arg2;
- (double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4;
- (id)_navigationBarRightButtonWithType:(long long)arg1;
- (id)_newNavigationButtonWithImage:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 action:(SEL)arg3;
- (id)_placeholderColor;
- (id)_placeholderText;
- (void)_readerAppearanceButtonPressed;
- (void)_readerButtonTapped:(id)arg1;
- (void)_reloadButtonLongPressed:(id)arg1;
- (void)_reloadButtonPressed;
- (double)_squishTransformFactor;
- (void)_stopButtonPressed;
- (double)_textFieldTopMargin;
- (id)_timingFunctionForAnimation;
- (void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(bool)arg3;
- (id)_untintedLockImageUsingMiniatureVersion:(bool)arg1;
- (void)_updateActiveURLLabelAccessory;
- (void)_updateBackdropFrame;
- (void)_updateBackdropGroupName;
- (void)_updateBackdropStyle;
- (void)_updateControlTints;
- (void)_updateFakeViews;
- (void)_updateLockIconHasEVCertificateTint;
- (void)_updateLockViewIfNeeded;
- (void)_updateNavigationBarRightButtonType;
- (void)_updateNavigationBarRightButtonsAlpha;
- (void)_updateNavigationBarRightButtonsVisibility;
- (void)_updatePlaceholderText;
- (void)_updateProgressView;
- (void)_updateReaderButtonSelected;
- (void)_updateReaderButtonTint;
- (void)_updateReaderButtonVisibility;
- (void)_updateReaderButtonVisibilityAnimated:(bool)arg1 showAvailabilityText:(bool)arg2 adjustURLLabels:(bool)arg3;
- (void)_updateSearchIndicator;
- (void)_updateSeparatorAlpha;
- (void)_updateShowsLockIcon;
- (void)_updateShowsSearchIndicator;
- (void)_updateText;
- (void)_updateTextColor;
- (void)_updateTextFieldFrame;
- (void)_updateTextMetrics;
- (void)_updateTintColorForControls;
- (void)_updateToolbarAlpha;
- (void)_updateURLOutlineColor;
- (id)_viewToInsertProgressBarIn;
- (bool)areControlsHidden;
- (void)backdropDidApplySettings:(id)arg1;
- (id)backdropGroupName;
- (bool)canBecomeFirstResponder;
- (void)clearEphemeralUI;
- (double)contentUnderStatusBarHeight;
- (id)customBackdropSettings;
- (void)dealloc;
- (id)delegate;
- (void)fluidProgressViewDidShowProgress:(id)arg1;
- (void)fluidProgressViewWillShowProgress:(id)arg1;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasToolbar;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inputMode:(unsigned long long)arg2;
- (id)inputAccessoryView;
- (bool)isBackdropGroupDisabled;
- (bool)isExpanded;
- (bool)isUsingLightControls;
- (id)item;
- (void)layoutSubviews;
- (double)maximumHeight;
- (double)minimumBackdropHeight;
- (void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1;
- (void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1;
- (bool)navigationBarURLButtonShouldCopy:(id)arg1;
- (bool)navigationBarURLButtonShouldPaste:(id)arg1;
- (id)newTextField;
- (double)placeholderHorizontalInset;
- (id)preferredBarTintColor;
- (id)readerAppearanceButton;
- (id)reloadButton;
- (void)setBackdropGroupDisabled:(bool)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setContentUnderStatusBarHeight:(double)arg1;
- (void)setControlsHidden:(bool)arg1;
- (void)setCustomBackdropSettings:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 textFieldSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setHasToolbar:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setMinimumBackdropHeight:(double)arg1;
- (void)setPreferredBarTintColor:(id)arg1;
- (void)setSuppressesBlur:(bool)arg1;
- (void)setTextFieldPlaceHolderColor:(id)arg1;
- (void)setTintStyle:(unsigned long long)arg1;
- (void)setUnifiedFieldShowsProgressView:(bool)arg1;
- (void)setUpdatesBackdrop:(bool)arg1;
- (void)setUsesNarrowLayout:(bool)arg1;
- (void)setUsesUnscaledBackdrop:(bool)arg1;
- (void)setUsingLightControls:(bool)arg1;
- (void)squishExternalView:(id)arg1 withUntransformedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumScale:(double)arg3;
- (bool)suppressesBlur;
- (id)textField;
- (void)tintColorDidChange;
- (unsigned long long)tintStyle;
- (id)toolbar;
- (id)toolbarPlacedOnTop;
- (bool)unifiedFieldShowsProgressView;
- (void)updateToobarTintColor;
- (bool)updatesBackdrop;
- (bool)usesNarrowLayout;
- (bool)usesUnscaledBackdrop;
- (double)visualHeight;

@end
