//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/ODChatTVCellSubRichitem.h>

@class NSString, UIColor, UIFont;

@interface ODChatTVCellTextSubRichitem : ODChatTVCellSubRichitem
{
    NSString *_originText;
    UIColor *_textColor;
    UIFont *_textFont;
}

@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *originText; // @synthesize originText=_originText;
- (struct CGRect)createRenderObjects:(struct CGRect)arg1 withLineWidth:(double)arg2 withLineHeight:(double)arg3;

@end

