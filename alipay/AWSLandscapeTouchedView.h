//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UILabel;

@interface AWSLandscapeTouchedView : UIView
{
    NSMutableArray *_titleLabels;
    NSMutableArray *_valueLabels;
    UILabel *_timeLabel;
    NSString *_type;
    double _totalWidth;
    double _valueWidth;
    NSString *_volumnType;
}

@property(retain, nonatomic) NSString *volumnType; // @synthesize volumnType=_volumnType;
- (void).cxx_destruct;
- (void)buildTitleLabels:(id)arg1;
- (void)layoutSubviews;
- (void)buildValueLabels:(id)arg1 type:(id)arg2;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

