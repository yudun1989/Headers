//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QZTextAttachment.h>

@class NSAttributedString;

@interface QZETTextAttachment : QZTextAttachment
{
    NSAttributedString *_etText;
    unsigned long long _etFontId;
}

+ (void)initialize;
@property(nonatomic) unsigned long long etFontId; // @synthesize etFontId=_etFontId;
@property(retain, nonatomic) NSAttributedString *etText; // @synthesize etText=_etText;
- (void).cxx_destruct;
- (id)copyableText;
- (id)voiceText;

@end

