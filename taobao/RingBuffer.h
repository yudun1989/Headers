//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface RingBuffer : NSObject
{
    NSMutableData *buffer;
    int position;
    int tail;
}

- (void).cxx_destruct;
- (int)flushToOutputStream:(id)arg1;
- (int)appendData:(id)arg1 offset:(int)arg2 length:(int)arg3;
- (_Bool)appendByte:(unsigned char)arg1;
@property(readonly, nonatomic) unsigned int freeSpace;
- (id)initWithData:(id)arg1;

@end

