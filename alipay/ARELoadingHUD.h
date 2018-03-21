//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface ARELoadingHUD : UIView
{
    _Bool _isAnimating;
    UIImageView *_loadingView;
    NSString *_loadingText;
    UILabel *_loadingLabel;
}

@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(copy, nonatomic) NSString *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (struct CGSize)intrinsicContentSize;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

