//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor;

@interface ScheuduleSummaryInfo : NSObject
{
    NSString *_type;
    NSString *_title;
    double _titleH;
    NSString *_address;
    double _addressH;
    NSString *_notedata;
    double _notedataH;
    NSString *_timestr;
    double _timestrH;
    UIColor *_tintColor;
}

@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) double timestrH; // @synthesize timestrH=_timestrH;
@property(retain, nonatomic) NSString *timestr; // @synthesize timestr=_timestr;
@property(nonatomic) double notedataH; // @synthesize notedataH=_notedataH;
@property(retain, nonatomic) NSString *notedata; // @synthesize notedata=_notedata;
@property(nonatomic) double addressH; // @synthesize addressH=_addressH;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(nonatomic) double titleH; // @synthesize titleH=_titleH;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void)dealloc;

@end

