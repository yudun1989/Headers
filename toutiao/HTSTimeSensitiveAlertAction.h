//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSAlertAction.h"

@interface HTSTimeSensitiveAlertAction : HTSAlertAction
{
    _Bool _timeSensitive;
    int _flyed;
    CDUnknownBlockType _timeFlys;
}

@property(nonatomic) _Bool timeSensitive; // @synthesize timeSensitive=_timeSensitive;
@property(readonly, nonatomic) int flyed; // @synthesize flyed=_flyed;
@property(copy, nonatomic) CDUnknownBlockType timeFlys; // @synthesize timeFlys=_timeFlys;
- (void).cxx_destruct;
- (void)onTimeClick;

@end

