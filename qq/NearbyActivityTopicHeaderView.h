//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NearbyActivityTopicHeaderViewModel, UIImageView, UILabel;
@protocol NearbyActivityTopicHeaderViewDelegate;

@interface NearbyActivityTopicHeaderView : UIView
{
    id <NearbyActivityTopicHeaderViewDelegate> _theDelegate;
    NearbyActivityTopicHeaderViewModel *_model;
    UILabel *_titleLb;
    UILabel *_numLb;
    UIImageView *_arrowImage;
}

@property(retain, nonatomic) NearbyActivityTopicHeaderViewModel *model; // @synthesize model=_model;
@property(nonatomic) id <NearbyActivityTopicHeaderViewDelegate> delegate; // @synthesize delegate=_theDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)notifyDelegateHeaderViewDidTouch;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2;

@end

