//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface KSLoadingView : UIView
{
    UILabel *_titleLabel;
    UIActivityIndicatorView *_indicatiorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *indicatiorView; // @synthesize indicatiorView=_indicatiorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)hiddenLoading;
- (void)showLoading;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

