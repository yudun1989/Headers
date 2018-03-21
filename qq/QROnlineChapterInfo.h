//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QROnlineChapterInfo : NSObject
{
    NSString *_chapterId;
    long long _seq;
    NSString *_title;
    long long _price;
    double _precisePrice;
    long long _wordCount;
    NSString *_bookId;
    long long _isPayed;
    NSString *_chapterMd5;
    int _xo;
}

+ (id)onlineChapterInfosWithCSVString:(id)arg1 bookId:(id)arg2;
- (void)makeChapterId;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *bookId; // @dynamic bookId;
@property(retain, nonatomic) NSString *chapterId; // @dynamic chapterId;
@property(retain, nonatomic) NSString *chapterMd5; // @dynamic chapterMd5;
@property(nonatomic) long long isPayed; // @dynamic isPayed;
@property(nonatomic) double precisePrice; // @dynamic precisePrice;
@property(nonatomic) long long price; // @dynamic price;
@property(nonatomic) long long seq; // @dynamic seq;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) long long wordCount; // @dynamic wordCount;

@end

