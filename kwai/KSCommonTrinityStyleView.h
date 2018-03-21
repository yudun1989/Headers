//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSHairlineView, KSTextField, NSArray, NSLayoutConstraint, NSMutableArray, UIColor, UIImage, UIImageView, UILabel, UITapGestureRecognizer;

@interface KSCommonTrinityStyleView : UIView
{
    _Bool _enabled;
    UIView *_contentView;
    UIImage *_image;
    UIView *_rightView;
    UILabel *_label;
    KSTextField *_textField;
    UIColor *_highlightedColor;
    unsigned long long _viewConfig;
    CDUnknownBlockType _tapBlock;
    UIImageView *_imageView;
    KSHairlineView *_lineView;
    UIImageView *_arrowView;
    double _constHeight;
    NSMutableArray *_arrangedConstraints;
    NSLayoutConstraint *_constraintNeedAddToArranged;
    NSArray *_constraintsNeedAddToArranged;
    UITapGestureRecognizer *_tapGestrue;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestrue; // @synthesize tapGestrue=_tapGestrue;
@property(retain, nonatomic) NSArray *constraintsNeedAddToArranged; // @synthesize constraintsNeedAddToArranged=_constraintsNeedAddToArranged;
@property(retain, nonatomic) NSLayoutConstraint *constraintNeedAddToArranged; // @synthesize constraintNeedAddToArranged=_constraintNeedAddToArranged;
@property(readonly, nonatomic) NSMutableArray *arrangedConstraints; // @synthesize arrangedConstraints=_arrangedConstraints;
@property(nonatomic) double constHeight; // @synthesize constHeight=_constHeight;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) KSHairlineView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(nonatomic) unsigned long long viewConfig; // @synthesize viewConfig=_viewConfig;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) KSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_tapped;
- (void)addSubviewToRightView:(id)arg1;
- (void)_removeArrangedConstraintsAndSubviews;
- (void)_updateWithConfig;
- (void)_commonInit;
- (id)initWithConfig:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

