//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSDictionary, NSString, UILabel;

@interface TBLifeCircleChatShopNavView : UIView
{
    _Bool _isFestivalOn;
    NSString *_title;
    NSDictionary *_data;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UIView *_shopStatus;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *shopStatus; // @synthesize shopStatus=_shopStatus;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isFestivalOn; // @synthesize isFestivalOn=_isFestivalOn;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

