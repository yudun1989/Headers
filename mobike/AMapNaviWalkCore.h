//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMapNaviCoreProtocol-Protocol.h"

@class AMapNetworkManager, NSCalendar, NSString;
@protocol AMapNaviWalkCoreDelegate;

@interface AMapNaviWalkCore : NSObject <AMapNaviCoreProtocol>
{
    struct AMapNaviFrameForWTBT *_frameForWTBT;
    NSCalendar *_calendar;
    long long _unitFlags;
    _Bool _enabled;
    id <AMapNaviWalkCoreDelegate> _delegate;
    struct IWTBT *_iwtbt;
    AMapNetworkManager *_networkManager;
    NSString *_restResponseErrorCode;
}

@property _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *restResponseErrorCode; // @synthesize restResponseErrorCode=_restResponseErrorCode;
@property(retain, nonatomic) AMapNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) struct IWTBT *iwtbt; // @synthesize iwtbt=_iwtbt;
@property(nonatomic) __weak id <AMapNaviWalkCoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setNaviEndWithCoordinate:(id)arg1 offset:(int)arg2;
- (void)setGPSInfoWithCurrentLocation:(id)arg1 offset:(_Bool)arg2;
- (void)setCarLocationWithCoordinate:(id)arg1 offset:(int)arg2;
- (id)getNaviStaticInfo;
- (_Bool)readNaviInfoManual;
- (void)setTimeForOneWord:(int)arg1;
- (void)resumeNavi;
- (void)pauseNavi;
- (void)stopNavi;
- (void)stopEmulatorNavi;
- (_Bool)startGPSNavi;
- (_Bool)startEmulatorNavi;
- (void)setEmulatorNaviSpeed:(int)arg1;
- (void)setEmulatorJump;
- (id)GetNaviGuideSplitList;
- (id)getNaviGuideList;
- (int)getLinkIOFlagWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (_Bool)getLinkIsHadTrafficLightsWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (long long)getLinkTypeWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (long long)getLinkRoadClassWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (long long)getLinkFormWayWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (int)getLinkTimeWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (int)getLinkLengthWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (id)getLinkRoadNameWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (id)getLinkCoordinateArrayWithSegmentIndex:(int)arg1 linkIndex:(int)arg2;
- (_Bool)getSegmentIndoorWithSegmentIndex:(int)arg1;
- (id)getSegmentCoordinateArrayWithSegmentIndex:(int)arg1;
- (int)getSegmentTollCostWithSegmentIndex:(int)arg1;
- (int)getSegmentChargeLengthWithSegmentIndex:(int)arg1;
- (int)getSegmentLinkNumberWithSegmentIndex:(int)arg1;
- (int)getSegmentTurnIconWithSegmentIndex:(int)arg1;
- (int)getSegmentTimeWithSegmentIndex:(int)arg1;
- (int)getSegmentLengthWithSegmentIndex:(int)arg1;
- (int)getSegmentNumber;
- (id)getEndPOIID;
- (id)getEndPOIName;
- (id)getStartPOIID;
- (id)getStartPOIName;
- (long long)pushNaviRouteData:(id)arg1 withType:(int)arg2 flag:(int)arg3;
- (id)getEndCoordiante;
- (id)getStartCoordinate;
- (int)getStartDirection;
- (int)getRouteStrategy;
- (int)getRouteTime;
- (int)getRouteLength;
- (_Bool)getConfirmReroute;
- (int)selectRouteWithRouteID:(int)arg1;
- (id)getAllRouteID;
- (_Bool)restReCalculateWalkRoute;
- (_Bool)restCalculateWalkRouteWithStartPoint:(id)arg1 endPoint:(id)arg2;
- (_Bool)reCalculateWalkRoute;
- (_Bool)calculateWalkRouteWithStartPoints:(id)arg1 endPoints:(id)arg2;
- (_Bool)calculateWalkRouteWithEndPoints:(id)arg1;
- (id)coreVersion;
- (void)cancelAllNetworkRequest;
- (_Bool)initIWTBT;
- (void)initFrameForWTBT;
- (void)initProperties;
- (id)init;
- (void)dealloc;
- (void)cleanupCallback;
- (void)setupCallback;
- (void)WTBT_VibratePhoneTipsWithStrength:(int)arg1 time:(int)arg2;
- (void)WTBT_LockScreenNaviTipsWithSoundStr:(unsigned short *)arg1 strLength:(int)arg2 turnIcon:(int)arg3 segRemainLength:(int)arg4;
- (int)WTBT_GetPlayState;
- (void)WTBT_SetRouteRequestState:(int)arg1;
- (void)WTBT_CarProjectionChange:(struct tag_WCarLocation)arg1;
- (void)WTBT_CarLocationChange:(struct tag_WCarLocation)arg1;
- (void)WTBT_RouteDestory;
- (void)WTBT_OffRoute;
- (void)WTBT_ArriveWayID:(int)arg1;
- (void)WTBT_EndEmulatorNavi;
- (void)WTBT_PlayNaviSoundWithSoundType:(int)arg1 soundStr:(unsigned short *)arg2 length:(int)arg3;
- (void)WTBT_UpdateNaviInfo:(struct tag_WDGNaviInfo *)arg1;
- (void)WTBT_RequestHTTPWithModuleID:(int)arg1 connectID:(int)arg2 type:(int)arg3 url:(char *)arg4 head:(char *)arg5 data:(char *)arg6 dataLength:(int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

