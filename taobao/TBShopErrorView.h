//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class TBModelStatusHandler;

@interface TBShopErrorView : UIScrollView
{
    UIScrollView *_oldScrollView;
    CDUnknownBlockType _selectorForErrorBlock;
    CDUnknownBlockType _selectorForEmptyBlock;
    TBModelStatusHandler *_failStatusHandler;
}

@property(retain, nonatomic) TBModelStatusHandler *failStatusHandler; // @synthesize failStatusHandler=_failStatusHandler;
@property(copy, nonatomic) CDUnknownBlockType selectorForEmptyBlock; // @synthesize selectorForEmptyBlock=_selectorForEmptyBlock;
@property(copy, nonatomic) CDUnknownBlockType selectorForErrorBlock; // @synthesize selectorForErrorBlock=_selectorForErrorBlock;
@property(nonatomic) __weak UIScrollView *oldScrollView; // @synthesize oldScrollView=_oldScrollView;
- (void).cxx_destruct;
- (void)showErrorView:(id)arg1 statusInfo:(id)arg2;
- (void)showEmptyViewWithStatusInfo:(id)arg1;
- (void)recreateHandler:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

