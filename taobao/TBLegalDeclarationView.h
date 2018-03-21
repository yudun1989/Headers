//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, UIButton, UIScrollView;

@interface TBLegalDeclarationView : UIView
{
    UIScrollView *_contentView;
    UIView *_separateView;
    UIButton *_agreeButton;
    UIButton *_disagreeButton;
    NSArray *_paragraphViews;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(copy, nonatomic) NSArray *paragraphViews; // @synthesize paragraphViews=_paragraphViews;
@property(nonatomic) __weak UIButton *disagreeButton; // @synthesize disagreeButton=_disagreeButton;
@property(nonatomic) __weak UIButton *agreeButton; // @synthesize agreeButton=_agreeButton;
@property(nonatomic) __weak UIView *separateView; // @synthesize separateView=_separateView;
@property(nonatomic) __weak UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)getAttributedStringWith:(id)arg1;
- (void)disagreeBtnTouch;
- (void)agreeBtnTouch;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
