//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImageView;

@interface RECoinButton : UIButton
{
    UIImageView *_openImageView;
    UIImageView *_coinView;
    _Bool *_isAnimating;
}

@property(nonatomic) _Bool *isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIImageView *coinView; // @synthesize coinView=_coinView;
@property(retain, nonatomic) UIImageView *openImageView; // @synthesize openImageView=_openImageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

