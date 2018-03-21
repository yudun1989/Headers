//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIGBDTaskItem.h"

@class GIGBDPhoneInfo, NSData, NSString;

@interface GIGBDLocalTask : GIGBDTaskItem
{
    int curTryTimes_;
    int nextTryTime_;
    NSString *aClientId_;
    NSString *aAppId_;
    int type_;
    NSString *url_;
    _Bool is16UploadIng_;
    _Bool isReportSuccess_;
    NSString *phoneNumber_;
    _Bool wifiStatus_;
    NSString *rrid_;
    NSData *postBody_;
    GIGBDPhoneInfo *phoneInfoManager_;
    _Bool _isType16SendSuccess;
    _Bool _isPnReady;
}

+ (_Bool)isGbdLocalReport;
+ (void)scheduleWithClientId:(id)arg1 appId:(id)arg2;
@property(nonatomic) _Bool isPnReady; // @synthesize isPnReady=_isPnReady;
@property(nonatomic) _Bool isType16SendSuccess; // @synthesize isType16SendSuccess=_isType16SendSuccess;
- (void).cxx_destruct;
- (void)onTimer;
- (id)buildPostBody:(id)arg1 netTypeCode:(id)arg2;
- (void)sendType16RquestToRemote:(id)arg1;
- (id)formatRequestUrl;
- (void)savePnInProp:(id)arg1;
- (void)getPnInProp;
- (id)initWithClientId:(id)arg1 appId:(id)arg2;

@end

