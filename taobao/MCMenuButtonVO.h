//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCBaseMenuButtonVO.h"

@class NSArray, NSString, UIColor;

@interface MCMenuButtonVO : MCBaseMenuButtonVO
{
    NSString *_text;
    UIColor *_textColor;
    NSString *_actionUrl;
    NSArray *_subButtons;
}

@property(retain, nonatomic) NSArray *subButtons; // @synthesize subButtons=_subButtons;
@property(copy, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (double)widthForButton;

@end

