//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VideoSnapshot : NSObject
{
    struct opaqueCMSampleBuffer *_buffer;
    CDStruct_1b6d18a9 _time;
}

@property(nonatomic) struct opaqueCMSampleBuffer *buffer; // @synthesize buffer=_buffer;
@property(nonatomic) CDStruct_1b6d18a9 time; // @synthesize time=_time;
- (void)dealloc;
- (id)init;

@end

