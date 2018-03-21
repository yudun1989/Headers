//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, QQVIPFunctionReaderModel;

@interface ComicReadContext : NSObject
{
    NSString *_curReadComicID;
    NSString *_curReadSectionName;
    long long _curIndexInComicPicArr;
    long long _curIndexInSectionPicArr;
    QQVIPFunctionReaderModel *_info;
    int _xo;
    NSString *_curReadSectionID;
}

@property(retain, nonatomic) NSString *curReadSectionID; // @synthesize curReadSectionID=_curReadSectionID;
- (void)dealloc;

// Remaining properties
@property(nonatomic) long long curIndexInComicPicArr; // @dynamic curIndexInComicPicArr;
@property(nonatomic) long long curIndexInSectionPicArr; // @dynamic curIndexInSectionPicArr;
@property(retain, nonatomic) NSString *curReadComicID; // @dynamic curReadComicID;
@property(retain, nonatomic) NSString *curReadSectionName; // @dynamic curReadSectionName;
@property(retain, nonatomic) QQVIPFunctionReaderModel *info; // @dynamic info;

@end

