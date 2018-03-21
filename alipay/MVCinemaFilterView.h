//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MVCinemaFilterItemView, MVLineView, NSArray, NSMutableArray, UIViewController;

@interface MVCinemaFilterView : UIView
{
    UIView *containerView_;
    MVLineView *lineView_;
    MVCinemaFilterItemView *selectFilterItemView_;
    UIViewController *_parentViewController;
    NSArray *_optionArray;
    CDUnknownBlockType _didSelectBlock;
    NSMutableArray *_filterItemArray;
}

@property(retain, nonatomic) NSMutableArray *filterItemArray; // @synthesize filterItemArray=_filterItemArray;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
@property(retain, nonatomic) NSArray *optionArray; // @synthesize optionArray=_optionArray;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (void)filterContentDidSelected:(id)arg1;
- (void)setSelectType:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)resetFilter;
- (void)filterItemViewDidTapped:(id)arg1;
- (void)updateUI;
- (void)initView;
- (void)initData;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

