//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class APActivityIndicatorView, CLoadMoreLineTextView, UILabel;

@interface CLoadMoreView : UIControl
{
    APActivityIndicatorView *_indicatorView;
    UILabel *_texHCabel;
    CLoadMoreLineTextView *_lineView;
    CDUnknownBlockType _clickCallback;
}

@property(copy, nonatomic) CDUnknownBlockType clickCallback; // @synthesize clickCallback=_clickCallback;
@property(retain, nonatomic) CLoadMoreLineTextView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *texHCabel; // @synthesize texHCabel=_texHCabel;
@property(retain, nonatomic) APActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
- (void).cxx_destruct;
- (void)layoutContentViews;
- (void)refreshType:(int)arg1 text:(id)arg2 clickCallback:(CDUnknownBlockType)arg3;
- (void)refreshType:(int)arg1 text:(id)arg2;
- (void)layoutSubviews;
- (void)clickAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)scrollViewDidScroll:(id)arg1;

@end
