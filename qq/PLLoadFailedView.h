//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class QQAsynUrlImageView, UIImageView, UILabel;

@interface PLLoadFailedView : UIControl
{
    _Bool _subviewsVerticalAlignCenter;
    UIImageView *_failedImageView;
    QQAsynUrlImageView *_failedNeabyImageView;
    UILabel *_failedLabel;
}

@property(retain, nonatomic) UILabel *failedLabel; // @synthesize failedLabel=_failedLabel;
@property(retain, nonatomic) QQAsynUrlImageView *failedNeabyImageView; // @synthesize failedNeabyImageView=_failedNeabyImageView;
@property(retain, nonatomic) UIImageView *failedImageView; // @synthesize failedImageView=_failedImageView;
@property(nonatomic) _Bool subviewsVerticalAlignCenter; // @synthesize subviewsVerticalAlignCenter=_subviewsVerticalAlignCenter;

@end

