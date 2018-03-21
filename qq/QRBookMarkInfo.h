//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface QRBookMarkInfo : NSObject
{
    NSData *bookMarkId;
    NSString *bookId;
    long long paraOffset;
    long long lineOffset;
    NSString *topString;
    long long progress;
    NSDate *addTime;
    long long location;
    NSString *chapterTitle;
    long long length;
    long long start;
    long long space;
    NSData *_bookMarkId;
    NSString *_bookId;
    long long _paraOffset;
    long long _lineOffset;
    NSString *_topString;
    long long _progress;
    NSDate *_addTime;
    long long _location;
    NSString *_chapterTitle;
    long long _length;
    long long _start;
    long long _space;
    int _xo;
}

- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSDate *addTime; // @dynamic addTime;
@property(retain, nonatomic) NSString *bookId; // @dynamic bookId;
@property(retain, nonatomic) NSData *bookMarkId; // @dynamic bookMarkId;
@property(retain, nonatomic) NSString *chapterTitle; // @dynamic chapterTitle;
@property(nonatomic) long long length; // @dynamic length;
@property(nonatomic) long long lineOffset; // @dynamic lineOffset;
@property(nonatomic) long long location; // @dynamic location;
@property(nonatomic) long long paraOffset; // @dynamic paraOffset;
@property(nonatomic) long long progress; // @dynamic progress;
@property(nonatomic) long long space; // @dynamic space;
@property(nonatomic) long long start; // @dynamic start;
@property(retain, nonatomic) NSString *topString; // @dynamic topString;

@end

