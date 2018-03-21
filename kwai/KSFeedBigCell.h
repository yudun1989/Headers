//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "KSAsyncNode-Protocol.h"

@class KSFeedBigCellMetaView, KSFeedTimesAndCountBar, KSVideoImageView, KS_feed, NSString;
@protocol KSFeedBigCellDelegate;

@interface KSFeedBigCell : UITableViewCell <KSAsyncNode>
{
    id <KSFeedBigCellDelegate> _delegate;
    KSVideoImageView *_playerView;
    KSFeedTimesAndCountBar *_playTimesBar;
    KSFeedBigCellMetaView *_metaView;
    struct KS_feed *_feed;
}

+ (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1 forModel:(struct KS_feed *)arg2;
@property(retain, nonatomic) KS_feed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) KSFeedBigCellMetaView *metaView; // @synthesize metaView=_metaView;
@property(retain, nonatomic) KSFeedTimesAndCountBar *playTimesBar; // @synthesize playTimesBar=_playTimesBar;
@property(retain, nonatomic) KSVideoImageView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <KSFeedBigCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addTapRecognizerInView:(id)arg1 action:(SEL)arg2;
- (void)didTapPoi:(id)arg1;
- (void)didTapMoreComments:(id)arg1;
- (void)didDoubleTapPlayer:(id)arg1;
- (void)willDisplay;
- (void)layoutSubviews;
- (void)clean;
- (void)drawWithModel:(struct KS_feed *)arg1;
- (void)stop;
- (void)pause;
- (_Bool)playOrStopIfNeeded;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

