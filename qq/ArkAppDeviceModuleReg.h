//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/RegModuleBase.h>

#import <QQMainProject/ARQRManagerDelegate-Protocol.h>
#import <QQMainProject/IRegModule-Protocol.h>
#import <QQMainProject/RichMsgPreviewDialogDelegate-Protocol.h>

@class CMMotionManager, NSOperationQueue, NSString, NSTimer;

@interface ArkAppDeviceModuleReg : RegModuleBase <ARQRManagerDelegate, RichMsgPreviewDialogDelegate, IRegModule>
{
    long long _positionCbId;
    long long _motionCbId;
    long long _orientationCbId;
    long long _connectionTypeChangeCbId;
    long long _currentPositionCbId;
    NSString *_appID;
    _Bool _watchingPosition;
    _Bool _watchingNetwork;
    _Bool _scanning;
    CDUnknownBlockType _positionBlock;
    NSTimer *_positionTimer;
    CMMotionManager *_motionManager;
    NSOperationQueue *_queue;
    CDUnknownBlockType _accelerationBlock;
    CDUnknownBlockType _orientationBlock;
    CDUnknownBlockType _networkBlock;
    CDUnknownBlockType _scanCodeBlock;
    struct CLLocationCoordinate2D _prevPosition;
}

+ (const char *)getModuleName;
@property(copy, nonatomic) CDUnknownBlockType scanCodeBlock; // @synthesize scanCodeBlock=_scanCodeBlock;
@property(nonatomic, getter=isScanning) _Bool scanning; // @synthesize scanning=_scanning;
@property(nonatomic, getter=isWatchingNetwork) _Bool watchingNetwork; // @synthesize watchingNetwork=_watchingNetwork;
@property(readonly, nonatomic) CDUnknownBlockType networkBlock; // @synthesize networkBlock=_networkBlock;
@property(copy, nonatomic) CDUnknownBlockType orientationBlock; // @synthesize orientationBlock=_orientationBlock;
@property(copy, nonatomic) CDUnknownBlockType accelerationBlock; // @synthesize accelerationBlock=_accelerationBlock;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) struct CLLocationCoordinate2D prevPosition; // @synthesize prevPosition=_prevPosition;
@property(nonatomic, getter=isWatchingPosition) _Bool watchingPosition; // @synthesize watchingPosition=_watchingPosition;
@property(retain, nonatomic) NSTimer *positionTimer; // @synthesize positionTimer=_positionTimer;
@property(copy, nonatomic) CDUnknownBlockType positionBlock; // @synthesize positionBlock=_positionBlock;
- (void).cxx_destruct;
- (void)ARQRManagerSucess:(id)arg1 QRResult:(id)arg2;
- (void)openQRVC;
- (void)cancelScanCode;
- (void)teardownScanCode;
- (void)scanCodeWithIdentifier:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)clearNetworkWatch;
- (void)onNetworkTypeChange:(id)arg1;
- (void)watchNetworkWithBlock:(CDUnknownBlockType)arg1;
- (void)onDeviceMotionChanged:(id)arg1 error:(id)arg2;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)setupMotion;
- (void)clearOrientationWatch;
- (void)watchOrientationWithBlock:(CDUnknownBlockType)arg1;
- (void)clearAccelerationWatch;
- (void)watchAccelerationWithBlock:(CDUnknownBlockType)arg1;
- (void)handleGetLocation:(id)arg1;
- (void)removeLocationObserver;
- (void)addLocationObserver;
- (void)teardownPositionTimer;
- (void)setupPositionTimer;
- (void)stopUpdateLocation;
- (void)startPositionUpdates;
- (void)startUpdateLocationWithBlock:(CDUnknownBlockType)arg1;
- (void)doCallback:(long long)arg1 succ:(_Bool)arg2 obj:(id)arg3;
- (_Bool)doCallback:(long long)arg1 obj:(id)arg2;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)setShowMaskAlertAPPID:(id)arg1;
- (void)doPosiMaskAlert:(_Bool)arg1;
- (void)showPosiAuthorizationMaskAlertWithKey:(id)arg1 tips:(id)arg2;
- (unsigned int)invokeFunc:(const char *)arg1 args:(const struct tagArkVariant *)arg2 count:(unsigned int)arg3 ret:(struct tagArkVariant *)arg4 helper:(struct tagArkHostFuncs *)arg5;
- (unsigned int)hasMethod:(const char *)arg1;
- (id)initWithAppID:(const char *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

