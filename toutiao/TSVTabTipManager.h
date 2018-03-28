//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSTimer;

@interface TSVTabTipManager : NSObject
{
    _Bool _hasEnterShortVideoTab;
    _Bool _hasNotifyTabRedDot;
    _Bool _shouldNotifyRedDotWhenStartup;
    _Bool _videoDetailVisibility;
    _Bool _enterDetailFromFeed;
    long long _numberForRedDot;
    long long _styleForRedDot;
    long long _strategyForRedDot;
    NSTimer *_timerForPoll;
    NSTimer *_timerForRecordingTimeBeforeEnterTab;
    NSDate *_appStartupTime;
}

+ (id)sharedManager;
@property(nonatomic) _Bool enterDetailFromFeed; // @synthesize enterDetailFromFeed=_enterDetailFromFeed;
@property(nonatomic) _Bool videoDetailVisibility; // @synthesize videoDetailVisibility=_videoDetailVisibility;
@property(nonatomic) _Bool shouldNotifyRedDotWhenStartup; // @synthesize shouldNotifyRedDotWhenStartup=_shouldNotifyRedDotWhenStartup;
@property(nonatomic) _Bool hasNotifyTabRedDot; // @synthesize hasNotifyTabRedDot=_hasNotifyTabRedDot;
@property(retain, nonatomic) NSDate *appStartupTime; // @synthesize appStartupTime=_appStartupTime;
@property(nonatomic) _Bool hasEnterShortVideoTab; // @synthesize hasEnterShortVideoTab=_hasEnterShortVideoTab;
@property(retain, nonatomic) NSTimer *timerForRecordingTimeBeforeEnterTab; // @synthesize timerForRecordingTimeBeforeEnterTab=_timerForRecordingTimeBeforeEnterTab;
@property(retain, nonatomic) NSTimer *timerForPoll; // @synthesize timerForPoll=_timerForPoll;
@property(nonatomic) long long strategyForRedDot; // @synthesize strategyForRedDot=_strategyForRedDot;
@property(nonatomic) long long styleForRedDot; // @synthesize styleForRedDot=_styleForRedDot;
@property(nonatomic) long long numberForRedDot; // @synthesize numberForRedDot=_numberForRedDot;
- (void).cxx_destruct;
- (long long)maxTimesForShowBubbleTip;
- (long long)bubbleTipStrategy;
- (id)bubbleTipConfig;
- (long long)maxTimesForShowRedDotOneDay;
- (long long)redDotIntervalBeforeEnterTab;
- (long long)redDotPollInterval;
- (long long)redDotStrategy;
- (id)redDotConfig;
- (_Bool)isSameDay:(id)arg1 date2:(id)arg2;
- (long long)timesForAlreadyShowBubbleTip;
- (id)dateForRecentlyShowBubbleTip;
- (long long)timesForCurrentDayShowBubbleTip;
- (id)dateForRecentlyShowRedDot;
- (long long)timesForCurrentDayShowRedDot;
- (void)notifyRedDotWithData:(id)arg1;
- (void)fetchRedDot;
- (void)notifyRedDotWhenStartup;
- (void)stopTimerForRecordingTimeBeforeEnterTab;
- (void)startTimerForRecordingTimeBeforeEnterTab;
- (void)stopTimerForPoll;
- (void)startTimerForPoll;
- (void)setShouldNotShowBubbleTip;
- (void)updateBubbleTipShownStatus;
- (long long)indexForBubbleTip;
- (id)textForBubbleTip;
- (_Bool)shouldShowBubbleTip;
- (void)clearRedDot;
- (id)extraCategoryListRequestParameters;
- (_Bool)shouldAutoReloadFromRemoteForCategory:(id)arg1 listEntrance:(id)arg2;
- (_Bool)isShowingRedDot;
- (void)setupShortVideoTabRedDotWhenStartupIfNeeded;
- (id)init;

@end

