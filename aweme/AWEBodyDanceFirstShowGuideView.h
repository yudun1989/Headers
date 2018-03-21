//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnimatedButton, UIImageView, UILabel, YYAnimatedImageView;

@interface AWEBodyDanceFirstShowGuideView : UIView
{
    UIView *_backView;
    UIView *_containerView;
    UIImageView *_titleImageView;
    YYAnimatedImageView *_guideImageView;
    UILabel *_guideTopTextLabel;
    UILabel *_guideBottomTextLabel;
    AWEAnimatedButton *_nextBtn;
}

@property(retain, nonatomic) AWEAnimatedButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UILabel *guideBottomTextLabel; // @synthesize guideBottomTextLabel=_guideBottomTextLabel;
@property(retain, nonatomic) UILabel *guideTopTextLabel; // @synthesize guideTopTextLabel=_guideTopTextLabel;
@property(retain, nonatomic) YYAnimatedImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)startGuideAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

