//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImageView, UILabel;
@protocol TBLifeCircleGuideViewDelegate;

@interface TBLifeCircleGuideView : UIView
{
    UIImageView *_radarImageView;
    UILabel *_textLabel;
    long long _angle;
    UIImageView *_mapView;
    NSMutableArray *_itemImageViewArray;
    NSMutableArray *_itemShadowViewArray;
    NSArray *_stores;
    long long _count;
    id <TBLifeCircleGuideViewDelegate> _delegate;
}

+ (_Bool)isCanShowGuide;
@property(nonatomic) __weak id <TBLifeCircleGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showStoreImage;
- (void)fetchServiceData;
- (void)backButtonClick:(id)arg1;
- (void)enterButtonClick:(id)arg1;
- (void)setTextLabelString:(id)arg1;
- (void)endAnimation;
- (void)startAnimation;
- (void)initItemViews;
- (void)enterButtonDownEnd:(id)arg1;
- (void)enterButtonDown:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool showing;

@end

