//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface KSMusicBeatItem : NSObject
{
    double _offset;
    double _duration;
    double _amplitude;
    NSString *_comment;
}

@property(readonly, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(readonly, nonatomic) double amplitude; // @synthesize amplitude=_amplitude;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)initWithOffset:(double)arg1 duration:(double)arg2 amplitude:(double)arg3 comment:(id)arg4;

@end

