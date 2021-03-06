//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QQSpringFestvival2018PendantData : NSObject
{
    _Bool _acitityIsBegin;
    _Bool _canShowPandant;
    _Bool _isForbinPullRefresh;
    long long _promotionID;
    unsigned long long _activityType;
    unsigned long long _activityState;
    unsigned long long _activityStartTime;
    unsigned long long _activityEndTime;
    unsigned long long _userDrawStartTime;
    unsigned long long _userDrawEndTime;
    double _timestamp;
    unsigned long long _timeToStart;
    long long _pandantState;
}

+ (id)initWithData:(id)arg1;
@property(readonly, nonatomic) _Bool isForbinPullRefresh; // @synthesize isForbinPullRefresh=_isForbinPullRefresh;
@property(readonly, nonatomic) long long pandantState; // @synthesize pandantState=_pandantState;
@property(readonly, nonatomic) _Bool canShowPandant; // @synthesize canShowPandant=_canShowPandant;
@property(readonly, nonatomic) _Bool acitityIsBegin; // @synthesize acitityIsBegin=_acitityIsBegin;
@property(readonly, nonatomic) unsigned long long timeToStart; // @synthesize timeToStart=_timeToStart;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long userDrawEndTime; // @synthesize userDrawEndTime=_userDrawEndTime;
@property(readonly, nonatomic) unsigned long long userDrawStartTime; // @synthesize userDrawStartTime=_userDrawStartTime;
@property(readonly, nonatomic) unsigned long long activityEndTime; // @synthesize activityEndTime=_activityEndTime;
@property(readonly, nonatomic) unsigned long long activityStartTime; // @synthesize activityStartTime=_activityStartTime;
@property(readonly, nonatomic) unsigned long long activityState; // @synthesize activityState=_activityState;
@property(readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property(readonly, nonatomic) long long promotionID; // @synthesize promotionID=_promotionID;
- (_Bool)isEqualToPendantData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

