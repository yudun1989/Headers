//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface KSShareBar : UIView
{
    UIImageView *_leftIcon;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

