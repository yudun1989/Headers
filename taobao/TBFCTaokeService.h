//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AlibcApplication, NSDate, NSString;

@interface TBFCTaokeService : NSObject
{
    NSString *_taokeE;
    NSDate *_expireDate;
    AlibcApplication *_appInfo;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AlibcApplication *appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(retain, nonatomic) NSString *taokeE; // @synthesize taokeE=_taokeE;
- (void).cxx_destruct;
- (void)updateExpireDate;
- (void)appBecomeActive:(id)arg1;
- (void)handleURLNavigation:(id)arg1 query:(id)arg2;
- (id)taokeURLFromOriginURL:(id)arg1;
- (void)userTrackPageByURL:(id)arg1;
- (void)dealloc;

@end

