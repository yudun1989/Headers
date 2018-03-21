//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol QQUrlJumpHelperDelegate;

@interface QQUrlJumpHelper : NSObject
{
    _Bool hasLbsInfoUpdated;
    id <QQUrlJumpHelperDelegate> delegate;
    NSString *sourceUrl;
}

+ (id)revertRequestFlag:(id)arg1;
+ (_Bool)needDelayLoad:(id)arg1;
+ (_Bool)needAdditionalParam:(id)arg1;
+ (void)appendUinToUrl:(id)arg1;
+ (void)appendUserInfoToUrl:(id)arg1;
+ (void)appendMobInfoToUrl:(id)arg1;
+ (void)appendDeviceInfoToUrl:(id)arg1;
+ (_Bool)needUserInfo:(id)arg1;
+ (_Bool)needMobInfo:(id)arg1;
+ (_Bool)needDeviceInfoParam:(id)arg1;
+ (_Bool)needUin:(id)arg1;
+ (_Bool)url:(id)arg1 hasRequestFlag:(id)arg2 andNoUrlKey:(id)arg3;
+ (void)revertUlatAndUlon:(id)arg1;
+ (void)revertUserinfoFlag:(id)arg1;
+ (void)revertMobinfoFlag:(id)arg1;
+ (void)revertDevinfoFlag:(id)arg1;
+ (void)revertUinFlag:(id)arg1;
+ (void)urlbuilder:(id)arg1 revertParam:(id)arg2 replaceOfFlag:(id)arg3;
@property(nonatomic) _Bool hasLbsInfoUpdated; // @synthesize hasLbsInfoUpdated;
@property(copy, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(nonatomic) id <QQUrlJumpHelperDelegate> delegate; // @synthesize delegate;
- (id)appendParamTo:(id)arg1;
- (void)dealloc;
- (void)updateGpsCoordinates;
- (void)updateGpsSuccess;
- (void)updateGpsFailed;
- (void)removeLbsEventObserver;
- (void)addLbsEventObserver;
- (void)onLbsGetLocationSucc;
- (void)onLbsGetLocationFail;

@end

