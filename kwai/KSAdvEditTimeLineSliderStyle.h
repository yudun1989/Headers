//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface KSAdvEditTimeLineSliderStyle : NSObject
{
    _Bool _dashedBorderEnabled;
    UIColor *_highlightBorderColor;
    UIColor *_normalColor;
    UIColor *_normalBorderColor;
    UIColor *_alertColor;
    struct UIEdgeInsets _highlightBorderInsets;
}

@property(retain, nonatomic) UIColor *alertColor; // @synthesize alertColor=_alertColor;
@property(nonatomic) _Bool dashedBorderEnabled; // @synthesize dashedBorderEnabled=_dashedBorderEnabled;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(nonatomic) struct UIEdgeInsets highlightBorderInsets; // @synthesize highlightBorderInsets=_highlightBorderInsets;
@property(retain, nonatomic) UIColor *highlightBorderColor; // @synthesize highlightBorderColor=_highlightBorderColor;
- (void).cxx_destruct;

@end

