//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface KSPointView : UIView
{
    UIColor *_tintColor;
    UIColor *_centerColor;
    double _edgeWidth;
}

@property(nonatomic) double edgeWidth; // @synthesize edgeWidth=_edgeWidth;
@property(retain, nonatomic) UIColor *centerColor; // @synthesize centerColor=_centerColor;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

