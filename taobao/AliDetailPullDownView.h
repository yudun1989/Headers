//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UIScrollView;

@interface AliDetailPullDownView : UIView
{
    UILabel *_arrow;
    UILabel *_msg;
    _Bool isAddObserver;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setText:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

