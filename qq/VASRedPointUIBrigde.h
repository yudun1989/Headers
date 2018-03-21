//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIView;

@interface VASRedPointUIBrigde : NSObject
{
    NSString *_path;
    UIView *_showingView;
}

+ (id)getNumRedPointShowInfoBySet:(long long)arg1;
+ (id)getRedPointShowInfoBySet:(long long)arg1;
+ (id)getAppInfosBySet:(long long)arg1;
+ (id)getNumRedBusisBySet:(long long)arg1;
@property(nonatomic) __weak UIView *showingView; // @synthesize showingView=_showingView;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)handleRedPointNumberTypeAppInfoContentChangedNotification:(id)arg1;
- (void)hideRedPointIfNeed;
- (id)getRedPointShowInfo;
- (void)reloadRedPointInfo;
- (id)init;
- (void)commonInit;
- (void)dealloc;

@end

