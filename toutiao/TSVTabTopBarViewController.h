//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class CAGradientLayer, CALayer, NSMutableArray, NSString, SSThemedView, TSVRedPackPublishButton, TSVRedPackPublishButtonViewModel, TSVTabViewModel, TTBubbleView, UIScrollView;

@interface TSVTabTopBarViewController : UIViewController <UIScrollViewDelegate>
{
    TSVTabViewModel *_viewModel;
    UIScrollView *_scrollView;
    TSVRedPackPublishButtonViewModel *_publishButtonViewModel;
    TSVRedPackPublishButton *_publishButton;
    TTBubbleView *_publishIntroBubble;
    CALayer *_rightBackLayer;
    CAGradientLayer *_rightGradientLayer;
    SSThemedView *_bottomLine;
    NSMutableArray *_categoryButtons;
    CDUnknownBlockType _categorySelectBlock;
}

+ (unsigned long long)rightButtonType;
@property(copy, nonatomic) CDUnknownBlockType categorySelectBlock; // @synthesize categorySelectBlock=_categorySelectBlock;
@property(retain, nonatomic) NSMutableArray *categoryButtons; // @synthesize categoryButtons=_categoryButtons;
@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) CAGradientLayer *rightGradientLayer; // @synthesize rightGradientLayer=_rightGradientLayer;
@property(retain, nonatomic) CALayer *rightBackLayer; // @synthesize rightBackLayer=_rightBackLayer;
@property(retain, nonatomic) TTBubbleView *publishIntroBubble; // @synthesize publishIntroBubble=_publishIntroBubble;
@property(retain, nonatomic) TSVRedPackPublishButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) TSVRedPackPublishButtonViewModel *publishButtonViewModel; // @synthesize publishButtonViewModel=_publishButtonViewModel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TSVTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (double)categorySelectorTextGlowSize;
- (id)categorySelectorTextGlowColors;
- (id)categorySelectorTextColors;
- (void)themeReload;
- (void)publishBtnClicked:(id)arg1;
- (void)didScrollToIndex:(long long)arg1;
- (void)scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setCurrentIndex:(long long)arg1 scrollToPositionAnimated:(_Bool)arg2;
- (void)scrollFromIndex:(long long)arg1 toIndex:(long long)arg2 completePercent:(double)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)bindViewModel;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

