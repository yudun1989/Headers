//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class ARBinhaiStrokeLabel, NSString, REStrokeLabel, UIImageView;

@interface ARBinhaiCatchCountView : UIView
{
    UIImageView *_redPackView;
    REStrokeLabel *_xLabel;
    ARBinhaiStrokeLabel *_countLabel;
    NSString *_resourcePath;
}

- (void).cxx_destruct;
- (void)updateCatchCount:(int)arg1;
- (id)initWithFrame:(struct CGRect)arg1 resourcePath:(id)arg2;

@end

