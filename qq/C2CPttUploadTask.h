//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class C2CPttUploadReq;

@interface C2CPttUploadTask : NSObject
{
    int _nCmdCount;
    int _nSeq;
    int _nHttpSessionId;
    C2CPttUploadReq *_uploadReq;
    int _xo;
}

- (void)dealloc;
- (id)init;

// Remaining properties
@property(nonatomic) int nCmdCount; // @dynamic nCmdCount;
@property(nonatomic) int nHttpSessionId; // @dynamic nHttpSessionId;
@property(nonatomic) int nSeq; // @dynamic nSeq;
@property(retain, nonatomic) C2CPttUploadReq *uploadReq; // @dynamic uploadReq;

@end

