//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSShareBar.h"

@class KSRoundSegmentedControl, NSArray, NSNumber;
@protocol KSSharePrivacyBarDelegate;

@interface KSSharePrivacyBar : KSShareBar
{
    id <KSSharePrivacyBarDelegate> _delegate;
    KSRoundSegmentedControl *_segmentedControl;
    NSArray *_privacyModes;
    NSArray *_privacyTitles;
    NSNumber *_snapShowHour;
}

+ (id)privateTextForPrivateType:(long long)arg1;
+ (void)setSnapShowHour:(id)arg1;
+ (id)snapShowHour;
+ (void)setPublishOptions:(id)arg1;
+ (id)publishOptions;
@property(retain, nonatomic) NSNumber *snapShowHour; // @synthesize snapShowHour=_snapShowHour;
@property(retain, nonatomic) NSArray *privacyTitles; // @synthesize privacyTitles=_privacyTitles;
@property(retain, nonatomic) NSArray *privacyModes; // @synthesize privacyModes=_privacyModes;
@property(retain, nonatomic) KSRoundSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(nonatomic) __weak id <KSSharePrivacyBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)storySegment;
- (void)didChangeIndexOfSegmentedControl:(id)arg1;
- (void)setPrivacyType:(long long)arg1 notify:(_Bool)arg2;
- (void)layoutSubviews;
- (void)commonInit;

@end

