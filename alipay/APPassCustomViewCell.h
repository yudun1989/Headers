//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class CALayer, NSDictionary, UIView;

@interface APPassCustomViewCell : APTableViewCell
{
    NSDictionary *_dict;
    UIView *_containerView;
    CALayer *_bBottomLine;
    CALayer *_bTopLine;
}

+ (double)getHeight:(id)arg1;
@property(retain, nonatomic) CALayer *bTopLine; // @synthesize bTopLine=_bTopLine;
@property(retain, nonatomic) CALayer *bBottomLine; // @synthesize bBottomLine=_bBottomLine;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)reloadData;
- (void)createSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

