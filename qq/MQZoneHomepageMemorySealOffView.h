//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/QZFeedCellDelegate-Protocol.h>

@class NSString, QZLayoutInfo, QzoneFeedLayoutView, QzoneFeedModel;
@protocol MQZoneHomepageMemorySealOffViewDelegate;

@interface MQZoneHomepageMemorySealOffView : UIView <QZFeedCellDelegate>
{
    QzoneFeedLayoutView *_layoutView;
    QZLayoutInfo *_layoutInfo;
    QzoneFeedModel *_feedModel;
    id <MQZoneHomepageMemorySealOffViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MQZoneHomepageMemorySealOffViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) QzoneFeedModel *feedModel; // @synthesize feedModel=_feedModel;
- (void).cxx_destruct;
- (void)onFeedCell:(id)arg1 action:(unsigned long long)arg2 param:(id)arg3 feedModel:(id)arg4;
- (void)layoutMemorySealOffView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

