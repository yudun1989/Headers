//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCListBaseCellView.h"

@class UIView;

@interface WCListPhotoCellView : WCListBaseCellView
{
    UIView *m_imageGridView;
}

+ (double)calculateHeightForRowData:(id)arg1 isFirstOneInsection:(_Bool)arg2 isLastOneInSection:(_Bool)arg3;
- (void).cxx_destruct;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)handleClickImageView:(id)arg1;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)initView;
- (void)initImageGridView;

@end

