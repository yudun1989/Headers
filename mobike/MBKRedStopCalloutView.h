//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MBKRedStopCalloutView : UIView
{
    NSString *_title;
    UIImageView *_backImageView;
    UIImageView *_downArrow;
    UILabel *_contextLabel;
}

@property(retain, nonatomic) UILabel *contextLabel; // @synthesize contextLabel=_contextLabel;
@property(retain, nonatomic) UIImageView *downArrow; // @synthesize downArrow=_downArrow;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)init;

@end

