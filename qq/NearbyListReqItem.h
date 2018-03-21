//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/SAMLBSRequestItem.h>

@class CUserData, QQNearByFilterModel;

@interface NearbyListReqItem : SAMLBSRequestItem
{
    BOOL _isTraversing;
    _Bool _isLoadingMore;
    int _gpsType;
    QQNearByFilterModel *_nearbyFilter;
    CUserData *_userData;
}

@property(nonatomic) _Bool isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) BOOL isTraversing; // @synthesize isTraversing=_isTraversing;
@property(nonatomic) int gpsType; // @synthesize gpsType=_gpsType;
@property(retain, nonatomic) CUserData *userData; // @synthesize userData=_userData;
@property(retain, nonatomic) QQNearByFilterModel *nearbyFilter; // @synthesize nearbyFilter=_nearbyFilter;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)getEncounterListFromOidbData:(struct CPBMessageDecoder *)arg1;
- (id)getAdArgument;
- (id)serviceCmd;
- (id)init;

@end

