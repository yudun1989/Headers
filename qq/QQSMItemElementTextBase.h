//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQSMItemElementBase.h>

@class NSString;

@interface QQSMItemElementTextBase : QQSMItemElementBase
{
    NSString *_color;
    NSString *_style;
    NSString *_size;
    NSString *_html;
    NSString *_type;
    double _lineSpace;
    int _numberOfLines;
}

@property(nonatomic) double lineSpace; // @synthesize lineSpace=_lineSpace;
- (id)getTextColor;
- (_Bool)isBold;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *color; // @dynamic color;
@property(retain, nonatomic) NSString *html; // @dynamic html;
@property(nonatomic) int numberOfLines; // @dynamic numberOfLines;
@property(retain, nonatomic) NSString *size; // @dynamic size;
@property(retain, nonatomic) NSString *style; // @dynamic style;
@property(retain, nonatomic) NSString *type; // @dynamic type;

@end

