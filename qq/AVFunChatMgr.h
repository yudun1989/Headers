//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <QQMainProject/QAVLogDelegate-Protocol.h>
#import <QQMainProject/QQRichPTVGLProgramCommonDelegate-Protocol.h>
#import <QQMainProject/QQRichPTVGLProgramGestureDelegate-Protocol.h>

@class AVGLOffScreenMgr, AVGestureDetectStrategy, AVGestureRecognizerMgr, AnalyzingFaceManager, FaceDetectorFeature, MCExpressionFaceItem, MCTmplItem, NSMutableArray, NSOperationQueue, NSString, QQRichBitmapOC, QQRichPTVFaceDetector, UIImage;
@protocol AVFunChatMgrDelegate, AVFunChatMgrFaceExpressionDelegate;

@interface AVFunChatMgr : NSObject <QQRichPTVGLProgramCommonDelegate, QQRichPTVGLProgramGestureDelegate, QAVLogDelegate>
{
    AnalyzingFaceManager *_faceAnalyzer;
    NSMutableArray *_faceAnalyzers;
    QQRichPTVFaceDetector *_ptvFaceDetector;
    char *_face_det_buffer;
    struct _BitmapData *_preBitMap;
    QQRichBitmapOC *_preRichBitMap;
    struct CGSize _preset;
    AVGLOffScreenMgr *_offScreenRender;
    struct dispatch_queue_s *_glRenderQueue;
    NSOperationQueue *_resourceLoaderQueue;
    int _discardFrameCount;
    _Bool _shouldDiscradFrame;
    _Bool _isInitialized;
    _Bool _isSDKExist;
    _Bool _beautyLevel;
    AVGestureRecognizerMgr *_gestureDetector;
    AVGestureDetectStrategy *_detectStrategy;
    UIImage *_detectImg;
    int _facenum;
    _Bool _forceDetectFace;
    _Bool _needFaceExpression;
    _Bool _isReduceFaceExpression;
    _Bool _isCheckRefuseOfCloseEye;
    _Bool _isCheckRefuseOfNoneFace;
    _Bool _isCheckLinkHit;
    _Bool _needSnapshotExpression;
    int _linkHitCount;
    int _currLinkHitCount;
    id <AVFunChatMgrDelegate> _delegate;
    MCTmplItem *_currentTempleItem;
    NSString *_currFilterPath;
    NSString *_skinSmotthingFilterPath;
    NSString *_subtitleName;
    FaceDetectorFeature *_feature;
    id <AVFunChatMgrFaceExpressionDelegate> _faceExpressionDelegate;
    MCExpressionFaceItem *_standardItem;
    NSObject *_standardItemLock;
    double _faceExpressionStartTime;
    MCExpressionFaceItem *_noneStandardItem;
    double _expressionThresholdValues;
    NSString *_snapshotFileName;
}

+ (void)nv12toi420ColorConvert:(char *)arg1 toBuf:(char *)arg2 width:(int)arg3 height:(int)arg4;
+ (id)shareInstance;
@property(retain, nonatomic) NSString *snapshotFileName; // @synthesize snapshotFileName=_snapshotFileName;
@property(nonatomic) _Bool needSnapshotExpression; // @synthesize needSnapshotExpression=_needSnapshotExpression;
@property(nonatomic) int currLinkHitCount; // @synthesize currLinkHitCount=_currLinkHitCount;
@property(nonatomic) int linkHitCount; // @synthesize linkHitCount=_linkHitCount;
@property(nonatomic) _Bool isCheckLinkHit; // @synthesize isCheckLinkHit=_isCheckLinkHit;
@property(nonatomic) double expressionThresholdValues; // @synthesize expressionThresholdValues=_expressionThresholdValues;
@property(retain, nonatomic) MCExpressionFaceItem *noneStandardItem; // @synthesize noneStandardItem=_noneStandardItem;
@property(nonatomic) _Bool isCheckRefuseOfNoneFace; // @synthesize isCheckRefuseOfNoneFace=_isCheckRefuseOfNoneFace;
@property(nonatomic) _Bool isCheckRefuseOfCloseEye; // @synthesize isCheckRefuseOfCloseEye=_isCheckRefuseOfCloseEye;
@property(nonatomic) double faceExpressionStartTime; // @synthesize faceExpressionStartTime=_faceExpressionStartTime;
@property(nonatomic) _Bool isReduceFaceExpression; // @synthesize isReduceFaceExpression=_isReduceFaceExpression;
@property(retain, nonatomic) NSObject *standardItemLock; // @synthesize standardItemLock=_standardItemLock;
@property(retain, nonatomic) MCExpressionFaceItem *standardItem; // @synthesize standardItem=_standardItem;
@property(nonatomic) id <AVFunChatMgrFaceExpressionDelegate> faceExpressionDelegate; // @synthesize faceExpressionDelegate=_faceExpressionDelegate;
@property(nonatomic) _Bool needFaceExpression; // @synthesize needFaceExpression=_needFaceExpression;
@property(retain) FaceDetectorFeature *feature; // @synthesize feature=_feature;
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(nonatomic) _Bool forceDetectFace; // @synthesize forceDetectFace=_forceDetectFace;
@property(copy, nonatomic) NSString *subtitleName; // @synthesize subtitleName=_subtitleName;
@property(copy, nonatomic) NSString *skinSmotthingFilterPath; // @synthesize skinSmotthingFilterPath=_skinSmotthingFilterPath;
@property(copy, nonatomic) NSString *currFilterPath; // @synthesize currFilterPath=_currFilterPath;
@property(retain, nonatomic) MCTmplItem *currentTempleItem; // @synthesize currentTempleItem=_currentTempleItem;
@property(nonatomic) id <AVFunChatMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)writeLog:(id)arg1 args:(char *)arg2;
- (void)snapshotExpression:(id)arg1;
- (_Bool)shouldReduceFaceExpression;
- (void)trackDetectFeature:(id)arg1;
- (void)setIsCheckLinkHit:(_Bool)arg1 linkHitCount:(int)arg2;
- (void)setIsCheckRefuseOfNoneFace:(_Bool)arg1 noneStandardItem:(id)arg2 expressionThresholdValues:(double)arg3;
- (void)stopFaceExpression;
- (void)startFaceExpression:(id)arg1;
- (void)dealloc;
- (void)earlyReleaseTempleItem:(id)arg1;
- (void)detectFeatureInRenderQueue:(char *)arg1;
- (void)reloadYouTuData;
- (_Bool)hasFacefeature;
- (void)GestureAnimStop;
- (void)GestureAnimStart;
- (void)FaceDetectStatHideTips:(id)arg1;
- (void)FaceDetectStatShowTips:(id)arg1 text:(id)arg2 withDuration:(double)arg3;
- (void)detectGesture:(id)arg1;
- (void)setFaceDetectRefine:(_Bool)arg1;
- (void)detectFeature;
- (_Bool)onInputFrame:(char *)arg1 toBuf:(char *)arg2;
- (void)setBeautyLevel:(float)arg1;
- (id)getCurrentContext;
- (void)setCurrentContext;
- (id)getResourceContext;
- (void)setResourceContext;
- (void)cancelResourceQueueAllOpt;
- (void)syncDispatchToResourceQueue:(CDUnknownBlockType)arg1;
- (void)asyncDispatchToResourceQueue:(CDUnknownBlockType)arg1;
- (void)syncDispatchToRenderQueue:(CDUnknownBlockType)arg1;
- (void)asyncDispatchToRenderQueue:(CDUnknownBlockType)arg1;
- (void)setPreset:(struct CGSize)arg1;
- (void)stopFunnyChat;
- (void)startFunnyChat;
- (id)init;
- (id)getFilter;
- (_Bool)isSupportGestureAndFace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

