//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface CustomAnnotationDetailView : UIView
{
    UIImageView *_titleImageView;
    UIImageView *_iconImageView;
    UILabel *titleLabel;
    _Bool _isCycling;
    NSString *_infoTitle;
}

+ (id)animInAisappear;
+ (id)createDetailViewWithDescription:(id)arg1;
+ (id)createDetailViewWith:(long long)arg1 duration:(long long)arg2 isCycling:(_Bool)arg3;
@property(retain, nonatomic) NSString *infoTitle; // @synthesize infoTitle=_infoTitle;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doTitleLabelExpandAnimation;
- (id)animMoveFromRightRect:(struct CGRect)arg1;
- (id)animBounceRightWithRect:(struct CGRect)arg1;
- (void)playShowUpAnimation;
- (void)setupViewDesOnly;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isCycling:(_Bool)arg2;

@end

