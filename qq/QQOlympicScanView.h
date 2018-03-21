//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/ARBinhaiViewDelegate-Protocol.h>
#import <QQMainProject/ARDelegateForMask-Protocol.h>
#import <QQMainProject/AREngineDelegate-Protocol.h>
#import <QQMainProject/ARRecordDelegate-Protocol.h>
#import <QQMainProject/ARStarWebDelegate-Protocol.h>
#import <QQMainProject/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>
#import <QQMainProject/CAAnimationDelegate-Protocol.h>
#import <QQMainProject/HQScanViewUIDelegate-Protocol.h>
#import <QQMainProject/MediaControllerDelegate-Protocol.h>
#import <QQMainProject/QQARImageRetrievalWebDelegate-Protocol.h>
#import <QQMainProject/QQARRcordUpdateCallbackDelegat-Protocol.h>
#import <QQMainProject/QQAudioSessionManagerDelegate-Protocol.h>
#import <QQMainProject/QQRichMediaPickerControllerDelegate-Protocol.h>
#import <QQMainProject/QQRichTinyVideoAsyncRecorderDelegatge-Protocol.h>
#import <QQMainProject/QREHongbaoViewDelegate-Protocol.h>
#import <QQMainProject/QTreasureResultDelegate-Protocol.h>
#import <QQMainProject/QUIActionSheetDelegate-Protocol.h>
#import <QQMainProject/SuperCellResultDelegate-Protocol.h>
#import <QQMainProject/UIGestureRecognizerDelegate-Protocol.h>

@class ARBinhaiView, ARCardPageControl, ARCardPromotion, AREngine, ARLoadingView, ARMapItemInfo, ARMediaController, ARMediaModel, ARStarFaceView, CADisplayLink, CAGradientLayer, HQScanView, NSString, NSTimer, O2OArPoiModel, QQARCommonConfigModel, QQARFeatureModel, QQARImageRetrievalView, QQARMediaPickerController, QQARRecordPanel, QQProgressBar, QQRichTinyVideoAsyncRecorder, QQWebShareActionSheet, QQWebViewController, QRDetectProcesser, ScanLineAnimationView, SendARCardManager, UIButton, UIImageView, UILabel, UIPanGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol ARDelegateForMask;

@interface QQOlympicScanView : UIView <AREngineDelegate, ARDelegateForMask, QREHongbaoViewDelegate, SuperCellResultDelegate, QTreasureResultDelegate, HQScanViewUIDelegate, ARStarWebDelegate, ARBinhaiViewDelegate, QQARImageRetrievalWebDelegate, CAAnimationDelegate, UIGestureRecognizerDelegate, QQRichTinyVideoAsyncRecorderDelegatge, AVCaptureAudioDataOutputSampleBufferDelegate, QQARRcordUpdateCallbackDelegat, ARRecordDelegate, QQAudioSessionManagerDelegate, MediaControllerDelegate, QQRichMediaPickerControllerDelegate, QUIActionSheetDelegate>
{
    HQScanView *_scanView;
    AREngine *_arEngine;
    unsigned int _torchId;
    _Bool _isFirstAnimationIn;
    _Bool _isAnimationFinished;
    _Bool _isAnimationAllFinished;
    int _faceState;
    double _faceSDKPercent;
    QQProgressBar *_loadBar;
    UILabel *_loadLabel;
    _Bool _isO2OAr;
    O2OArPoiModel *_o2oPoiModel;
    _Bool _hasAnimationStart;
    ARLoadingView *_arCloudLoadingView;
    UIView *_arCloudLoadingViewMask;
    UILabel *_arCloudLoadingLabel;
    double _scanEndY;
    double _cameraEdgeEnd;
    UIView *_awardView;
    _Bool _inProcessingAward;
    _Bool _isInTenpayView;
    ARStarFaceView *_starFaceView;
    UIButton *_bottomToolView;
    _Bool _hasRecog;
    _Bool _pauseAr;
    _Bool _startAr;
    QQARCommonConfigModel *_backupCommonConfig;
    QQWebViewController *_webViewVC;
    NSString *_webCallback;
    _Bool _webViewNeedShow;
    _Bool _webViewPreLoaded;
    NSTimer *_transparentWebviewRenderReadyTimer;
    _Bool _isARStarPresentWeb;
    _Bool _arStarWebEnterBackground;
    UIButton *_feedbackBtn;
    UILabel *_feedbackTipsView;
    UIView *_interactView;
    CADisplayLink *_zoomLink;
    double _targetZoomScale;
    double _zoomStep;
    _Bool _isZooming;
    _Bool _hasToolBar;
    double _fRecogTime;
    int _decodeType;
    _Bool _isGranted;
    _Bool _doubleTappedToZoom;
    UITapGestureRecognizer *_doubleTapGesture;
    UIPanGestureRecognizer *_downGesture;
    UIPinchGestureRecognizer *_pinGesture;
    ScanLineAnimationView *_scanAnimationView;
    _Bool _wordDetectedSuccess;
    QQARImageRetrievalView *_arImageRetrievalView;
    QQARRecordPanel *_recordPanel;
    QQRichTinyVideoAsyncRecorder *_videoRecorder;
    _Bool _isPreRecordding;
    _Bool _isRecordNeedSave;
    _Bool _recordIsLost;
    _Bool _isFirstFrame;
    _Bool _needShowRecordPanel;
    int _waitFrameCount;
    int _frameCount;
    _Bool _renderModelIsMsaa;
    int _recordWidth;
    int _recordHeight;
    float _drawViewScanviewScal;
    float _drawViewScanviewScalY;
    _Bool _photoGranted;
    _Bool _micGranted;
    _Bool _recordMaxTime;
    _Bool _hasAudioSession;
    ARMediaController *_mediaController;
    CAGradientLayer *_topARCardLayer;
    UIButton *_arCardSkipBtn;
    UIButton *_arCardCloseBtn;
    UIView *_headNameBg;
    UIImageView *_headImag;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    CAGradientLayer *_bottomARCardLayer;
    UIButton *_arCardLeftBtn;
    UIButton *_arCardRightBtn;
    UIButton *_playAgainARBtn;
    ARCardPageControl *_pageControl;
    _Bool _isARCardGuideVideo;
    unsigned int _shareFlag;
    QQARMediaPickerController *_fastSendRichMediapickerController;
    SendARCardManager *_sendARCardManager;
    _Bool _isGestureUser;
    ARMediaModel *_currentMediaModel;
    _Bool _isVisible;
    _Bool _vcDealloced;
    _Bool _isShown;
    _Bool _isBottomToolShow;
    _Bool _isNeadKeepArCard;
    int _hasSuccessRecg;
    id <ARDelegateForMask> _arDelegate;
    QQARFeatureModel *_o2oArFeature;
    QRDetectProcesser *_qrDetect;
    ARBinhaiView *_binhaiView;
    QQARFeatureModel *_arFeatureModel;
    NSString *_whatUrl;
    ARMapItemInfo *_item;
    QQARFeatureModel *_tempArFeatureModel;
    double _beginGestureScale;
    double _effectiveScale;
    QQWebShareActionSheet *_shareSheet;
    ARCardPromotion *_promotion;
}

@property(nonatomic) __weak ARCardPromotion *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) QQWebShareActionSheet *shareSheet; // @synthesize shareSheet=_shareSheet;
@property(nonatomic) double effectiveScale; // @synthesize effectiveScale=_effectiveScale;
@property(nonatomic) double beginGestureScale; // @synthesize beginGestureScale=_beginGestureScale;
@property(retain, nonatomic) QQWebViewController *webViewVC; // @synthesize webViewVC=_webViewVC;
@property(retain, nonatomic) QQARFeatureModel *tempArFeatureModel; // @synthesize tempArFeatureModel=_tempArFeatureModel;
@property(retain, nonatomic) ARMapItemInfo *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *whatUrl; // @synthesize whatUrl=_whatUrl;
@property(retain, nonatomic) AREngine *arEngine; // @synthesize arEngine=_arEngine;
@property(retain, nonatomic) HQScanView *scanView; // @synthesize scanView=_scanView;
@property(nonatomic) int hasSuccessRecg; // @synthesize hasSuccessRecg=_hasSuccessRecg;
@property(nonatomic) _Bool isNeadKeepArCard; // @synthesize isNeadKeepArCard=_isNeadKeepArCard;
@property(retain, nonatomic) QQARFeatureModel *arFeatureModel; // @synthesize arFeatureModel=_arFeatureModel;
@property(retain, nonatomic) ARBinhaiView *binhaiView; // @synthesize binhaiView=_binhaiView;
@property(readonly, nonatomic) _Bool isBottomToolShow; // @synthesize isBottomToolShow=_isBottomToolShow;
@property(retain, nonatomic) QRDetectProcesser *qrDetect; // @synthesize qrDetect=_qrDetect;
@property(retain, nonatomic) QQARFeatureModel *o2oArFeature; // @synthesize o2oArFeature=_o2oArFeature;
@property(nonatomic) __weak id <ARDelegateForMask> arDelegate; // @synthesize arDelegate=_arDelegate;
@property(nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(nonatomic) _Bool vcDealloced; // @synthesize vcDealloced=_vcDealloced;
- (void).cxx_destruct;
- (void)actionSheetClickedAtIndex:(int)arg1 sender:(id)arg2;
- (id)arCardShareBgView:(id)arg1 count:(id)arg2;
- (id)caluateTitle:(id)arg1 summary:(id)arg2 maxWidth:(double)arg3 font:(id)arg4;
- (id)scaleToSizeByAspectMax:(id)arg1 targetSize:(double)arg2;
- (id)getDataForShareItem:(id)arg1 onThisItem:(int)arg2;
- (void)showShareActionSheet;
- (void)sendVideoCard;
- (void)pushSendRichMediapickerVC:(id)arg1;
- (id)boxblurImage:(id)arg1 withBlurNumber:(double)arg2;
- (void)dynamicAvatarPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)richMediaPickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)richMediaPickerControllerDidCancel:(id)arg1;
- (void)onForceOffLineNotify;
- (void)sendWordsCard;
- (void)sendVideoBlessClick;
- (void)sendWordsBlessClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)sendARCard;
- (void)handleCurrentARCardClick:(id)arg1;
- (void)showARMediaBtns:(_Bool)arg1;
- (void)initARCardBottoms;
- (void)arCardClose:(id)arg1;
- (void)initARCardTops;
- (void)showARCardBtns;
- (void)skipAction:(id)arg1;
- (void)showARCardSkipBtn;
- (void)playAgain:(id)arg1;
- (void)showNameAndHead:(id)arg1 name:(id)arg2 time:(id)arg3;
- (void)hidenARCardHeadNameTimeView;
- (void)showPlayAgainBtn;
- (void)hidenARCardSkipBtn;
- (void)clearARCardBtns;
- (void)getHeadImgDonloadSucess:(id)arg1 uin:(id)arg2;
- (void)startUpdateMediaList;
- (void)updateEndMediaList:(id)arg1;
- (void)failCallBack:(id)arg1;
- (void)playStarVideo:(_Bool)arg1;
- (void)updateEndFirstMediaList:(id)arg1;
- (void)onlyRecogModeEnterSuccess;
- (void)arCardFound:(id)arg1;
- (void)onOutAnimtionEnd;
- (void)playARMedia:(id)arg1 isLift:(_Bool)arg2 isFirstMedia:(_Bool)arg3;
- (void)showARCardHeadName;
- (_Bool)getEletricTorchOpen;
- (void)changeEletricTorchState;
- (void)clickSoutiBtnWhenScan:(id)arg1;
- (void)clickOCRBtnWhenScan:(id)arg1;
- (void)resetZoom;
- (void)resetFocus:(struct CGPoint)arg1;
- (void)changeZoom:(id)arg1;
- (void)reportQRCodeScaleTime;
- (void)scaleAndCropFactor:(double)arg1;
- (void)handlePinchGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(readonly, nonatomic) _Bool cameraIsStatic;
- (void)onRunARKit;
- (void)stopArAndMusicButKeepCamera;
- (void)arBinhaiFound:(id)arg1;
- (void)onOnlyRecogMode:(id)arg1;
- (void)alertConfirmAction;
- (void)removeFeedbackBtn;
- (void)setFeedbackBtnHidden:(_Bool)arg1;
- (void)clickFeedback;
- (void)gotoARStarWebView:(id)arg1 isPush:(_Bool)arg2;
- (void)initTips;
- (void)onARCloudDownloadingSuccess:(id)arg1;
- (void)onARCloudDownloadingFail:(id)arg1;
- (void)onUpdateARCloudLoadingProgress:(id)arg1;
- (void)onHideARCloudLoadingProgress:(id)arg1;
- (void)onShowARCloudLoadingProgress:(id)arg1;
- (void)hideARCloudLoadingView;
- (void)handleScanLineAnimationView:(_Bool)arg1;
- (void)clearARCloudLoadingView;
- (void)showARCloudLoadingView;
- (void)initLoadViewMask;
- (void)closeHongbao;
- (void)openHongbaoJumpToWallet:(id)arg1;
- (void)closeQTreasureResultView:(id)arg1;
- (void)closeSuperCellView:(id)arg1;
- (void)showAwardView:(id)arg1 feature:(id)arg2;
- (void)OpenPOIRequest:(id)arg1 feature:(id)arg2 poiModel:(id)arg3;
- (void)requestAward:(id)arg1;
- (_Bool)showLbsUnAuthTips;
- (void)onARLocalRecogNotSuccess;
- (void)gotoStopARLoading;
- (void)onARResourceDownloadFailed;
- (void)onARResourceDownloadSucceed;
- (void)removeDownloadNotification;
- (void)addDownloadNotification;
- (_Bool)isEmptyString:(id)arg1;
- (void)onAnimationEndWithRecogType:(int)arg1 stateData:(id)arg2;
- (void)onAnimationStartWithRecogType:(int)arg1 stateData:(id)arg2;
- (void)clearAllResource;
- (void)clearGLResource;
- (void)onLost;
- (void)onRecg:(id)arg1;
- (void)onARRenderStateChanged:(long long)arg1 recogType:(int)arg2 stateData:(id)arg3;
- (void)onMarkerExtProcessRecg:(id)arg1;
- (void)onWordDetectSuccess:(_Bool)arg1;
- (void)showToast:(id)arg1 mode:(long long)arg2;
- (void)showRecordSucess2;
- (void)saveVideo:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)onVideoDurationChange:(double)arg1;
- (void)didFinishWriteInOutput:(id)arg1 error:(id)arg2;
- (_Bool)stopRecordAndSave:(_Bool)arg1;
- (_Bool)startRecord:(_Bool)arg1;
- (void)recordPanelClick;
- (void)hidenRecordPanelIsSave:(_Bool)arg1 isLost:(_Bool)arg2;
- (void)createVideoRecorderIfNeed;
- (void)showRecordPanel;
- (_Bool)isSupportARRecord;
- (id)adaptorSettings;
- (id)tempVideoFileURL;
- (void)onARStateChanged:(long long)arg1 recogType:(int)arg2 stateData:(id)arg3;
- (float)getDrawViewScanviewScalY;
- (float)getDrawViewScanviewScal;
- (int)getRcordHeight;
- (int)getRcordWidth;
- (_Bool)shouldDropARTracking;
- (_Bool)getRenderModelIsMsaa;
- (_Bool)getRcordStat;
- (void)bindSelfFbo;
- (void)rcordBufferUpdate:(struct __CVBuffer *)arg1 bufferTime:(CDStruct_1b6d18a9)arg2;
- (void)recordSmapleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)onQQARCameraChanged:(long long)arg1 fromCamera:(id)arg2;
- (void)onARScanViewUpdate:(id)arg1;
- (_Bool)releaseAudioSession;
- (_Bool)requestAudioSession;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (void)handleSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)gotoActivityWebViewController;
- (void)transparentWebviewRenderReadyLogic;
- (void)stopTransparentWebviewRenderReadyTimer;
- (void)startTransparentWebviewRenderReadyTimer;
- (void)onTransparentWebviewRenderReady:(id)arg1;
- (void)closeTransparentWebview;
- (void)onShowTransparentWebview;
- (void)openWebView:(id)arg1 webViewStyle:(long long)arg2 stackStyle:(int)arg3;
- (id)createFullScreenTransparentWeb:(id)arg1;
- (void)updateStarFaceViewWithState:(long long)arg1 andData:(id)arg2;
- (void)updateImageRetrievalViewWithState:(long long)arg1 andData:(id)arg2;
- (void)reportARPerformanceEvent;
- (void)startAr;
- (void)pauseArExceptCamera;
- (void)pauseAr;
- (void)resumeAr;
- (void)stopArAndMusic;
- (void)onDrawScanLine:(float)arg1;
- (void)downloadButtonClick:(id)arg1;
- (void)showDownloadFailTips;
- (void)downloadFaceSDK;
- (void)checkSDK;
- (_Bool)canShowBottomTips;
- (void)dismissBottomTool;
- (void)updateDownloadProgress:(double)arg1;
- (_Bool)lowerThanIphone6;
- (void)touchesCancle:(id)arg1;
- (void)touchesDown:(id)arg1;
- (void)bottomAnimation:(_Bool)arg1;
- (void)showBottomWordTopTips:(id)arg1;
- (void)showBottomWordTopTips:(id)arg1 tips:(id)arg2 actionStr:(id)arg3 action:(SEL)arg4;
- (void)showBottomTips:(id)arg1 actionStr:(id)arg2 action:(SEL)arg3 needDismissAuto:(_Bool)arg4;
- (void)showBottomTipsWhichProgress:(id)arg1;
- (void)showBottomTips:(id)arg1 percent:(double)arg2;
- (id)createImageWithColor:(id)arg1 size:(struct CGSize)arg2;
- (void)addScanView:(struct CGRect)arg1 loadFeature:(_Bool)arg2 completeCallBack:(CDUnknownBlockType)arg3;
- (void)clearAwardRecord;
- (void)restoreARCommonConfig;
- (void)dealloc;
- (void)didBecomeActive;
- (void)willResignActive;
- (void)didEnterForeground;
- (void)didEnterBackground;
- (void)viewDidDisappear;
- (void)adjusFocus;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)doInitData;
- (void)handleScanLineCallBack:(double)arg1;
- (void)handleSwipeDown:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 o2oModel:(id)arg2 delegate:(id)arg3 hasToolBar:(_Bool)arg4 decodeType:(int)arg5 promotion:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

