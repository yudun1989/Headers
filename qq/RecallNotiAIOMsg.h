//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface RecallNotiAIOMsg : NSObject
{
    _Bool _isLongMsg;
    int _orignalMsgType;
    int _xo;
    NSMutableArray *_msgArr;
}

- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isLongMsg; // @dynamic isLongMsg;
@property(retain, nonatomic) NSMutableArray *msgArr; // @dynamic msgArr;
@property(nonatomic) int orignalMsgType; // @dynamic orignalMsgType;

@end

